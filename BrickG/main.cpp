#include <SFML/Graphics.hpp>
#include <vector>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const int PADDLE_WIDTH = 100;
const int PADDLE_HEIGHT = 20;
const int BALL_RADIUS = 10;
const int BRICK_WIDTH = 60;
const int BRICK_HEIGHT = 20;
const int ROWS = 5;
const int COLS = 10;

int main() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Brick Breaker");
    window.setFramerateLimit(60);

    // Paddle setup
    sf::RectangleShape paddle(sf::Vector2f(PADDLE_WIDTH, PADDLE_HEIGHT));
    paddle.setFillColor(sf::Color::Blue);
    paddle.setPosition(WINDOW_WIDTH / 2 - PADDLE_WIDTH / 2, WINDOW_HEIGHT - PADDLE_HEIGHT - 10);

    // Ball setup
    sf::CircleShape ball(BALL_RADIUS);
    ball.setFillColor(sf::Color::Red);
    ball.setPosition(WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2);
    sf::Vector2f ballVelocity(0.3f, -0.3f);

    // Bricks setup
    std::vector<sf::RectangleShape> bricks;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sf::RectangleShape brick(sf::Vector2f(BRICK_WIDTH, BRICK_HEIGHT));
            brick.setFillColor(sf::Color::Green);
            brick.setPosition(j * (BRICK_WIDTH + 5) + 35, i * (BRICK_HEIGHT + 5) + 50);
            bricks.push_back(brick);
        }
    }

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Paddle movement
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && paddle.getPosition().x > 0) {
            paddle.move(-0.6f, 0.f);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && paddle.getPosition().x + PADDLE_WIDTH < WINDOW_WIDTH) {
            paddle.move(0.6f, 0.f);
        }

        // Ball movement
        ball.move(ballVelocity);

        // Ball collision with window borders
        if (ball.getPosition().x < 0 || ball.getPosition().x + 2 * BALL_RADIUS > WINDOW_WIDTH) {
            ballVelocity.x = -ballVelocity.x;
        }
        if (ball.getPosition().y < 0) {
            ballVelocity.y = -ballVelocity.y;
        }

        // Ball collision with paddle
        if (ball.getGlobalBounds().intersects(paddle.getGlobalBounds())) {
            ballVelocity.y = -ballVelocity.y;
        }

        // Ball collision with bricks
        for (auto it = bricks.begin(); it != bricks.end();) {
            if (ball.getGlobalBounds().intersects(it->getGlobalBounds())) {
                ballVelocity.y = -ballVelocity.y;
                it = bricks.erase(it);
            }
            else {
                ++it;
            }
        }

        // Ball out of bounds
        if (ball.getPosition().y > WINDOW_HEIGHT) {
            // Game over or reset ball
            ball.setPosition(WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2);
            ballVelocity = sf::Vector2f(0.3f, -0.3f);
        }

        window.clear();
        window.draw(paddle);
        window.draw(ball);
        for (const auto& brick : bricks) {
            window.draw(brick);
        }
        window.display();
    }

    return 0;
}

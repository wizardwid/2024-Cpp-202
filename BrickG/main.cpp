#include <SFML/Graphics.hpp>

// Ball 클래스 정의
class Ball {
public:
    sf::CircleShape shape;
    sf::Vector2f velocity;

    Ball(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setRadius(10.f);
        shape.setFillColor(sf::Color::Red);
        shape.setOrigin(10.f, 10.f);
        velocity = { -8.f, -8.f };  // 왼쪽 위쪽
    }

    void update() {
        shape.move(velocity);

        if (left() < 0) velocity.x = 8.f;
        else if (right() > 800) velocity.x = -8.f;

        if (top() < 0) velocity.y = 8.f;
        else if (bottom() > 600) velocity.y = -8.f;
    }

    float left() { return shape.getPosition().x - shape.getRadius(); }
    float right() { return shape.getPosition().x + shape.getRadius(); }
    float top() { return shape.getPosition().y - shape.getRadius(); }
    float bottom() { return shape.getPosition().y + shape.getRadius(); }
};

// Paddle 클래스 정의
class Paddle {
public:
    sf::RectangleShape shape;
    const float paddleWidth = 100.f;
    const float paddleHeight = 20.f;
    const float paddleVelocity = 10.f;

    Paddle(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setSize({ paddleWidth, paddleHeight });
        shape.setFillColor(sf::Color::Blue);
        // 중심을 기준으로
        shape.setOrigin(paddleWidth / 2.f, paddleHeight / 2.f);
    }

    void update() {
        //왼쪽 화살키를 누르고 && 왼쪽 끝에 도달하지 않은 경우
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) && left() > 0) {
            shape.move(-paddleVelocity, 0.f);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) && right() < 800) {
            shape.move(paddleVelocity, 0.f);
        }
    }

    float left() { return shape.getPosition().x - shape.getSize().x / 2.f; }
    float right() { return shape.getPosition().x + shape.getSize().x / 2.f; }
    // 지금 당장은 쓸모가 없지만, 확장을 고려해서 일단 놔두겠다.
    float top() { return shape.getPosition().y - shape.getSize().y / 2.f; }
    float bottom() { return shape.getPosition().y + shape.getSize().y / 2.f; }
};

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Bricks");
    window.setFramerateLimit(60);

    Ball ball(800 / 2.f, 300.f);
    Paddle paddle(400.f, 550.f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // update
        paddle.update();
        ball.update();

        // 화면 지우기
        window.clear(sf::Color::White);

        // 그리기
        window.draw(paddle.shape);
        window.draw(ball.shape);

        // 화면 업데이트
        window.display();
    }

    return 0;
}

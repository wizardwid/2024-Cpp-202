#include <SFML/Graphics.hpp>

// Ball Ŭ���� ����
class Ball {
public:
    sf::CircleShape shape;
    sf::Vector2f velocity;

    Ball(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setRadius(10.f);
        shape.setFillColor(sf::Color::Red);
        shape.setOrigin(10.f, 10.f);
        velocity = { -8.f, -8.f };  //���� ����
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

int main()
{
    //init
    // â ����
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");
    window.setFramerateLimit(60);       //�ʴ� ������ 60����

    // �̺�Ʈ ���� ����
    while (window.isOpen())
    {
        //update
        sf::Event event;
        while (window.pollEvent(event))
        {
            // x ��ũ�� ������ ������ â�� �ݾ�����.
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //draw
        //clear���� ������ �ܻ��� �����ִ´�
        // ȭ�� �����
        window.clear(sf::Color::White);

        // ȭ�� ������Ʈ
        window.display();
    }

    return 0;
}

#include <SFML/Graphics.hpp>

int main()
{
    //init
    // â ����
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");
    window.setFramerateLimit(60);       //�ʴ� ������ 60����

    // �� ��ü ����
    sf::CircleShape circle(100.f);
    circle.setFillColor(sf::Color::Magenta);
    circle.setPosition(0.f, 0.f);

    // �簢�� ��ü ����
    sf::RectangleShape rectangle(sf::Vector2f(200.f, 100.f));
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setPosition(0.f, 0.f);

    // �̺�Ʈ ���� ����
    while (window.isOpen())
    {
        //update
        rectangle.move(0.5f, 0);
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

        //���׸���
        // ���� �׸���
        window.draw(circle);
        window.draw(rectangle);

        // ȭ�� ������Ʈ
        window.display();
    }

    return 0;
}

#include <SFML/Graphics.hpp>

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

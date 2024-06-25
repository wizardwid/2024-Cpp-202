#include <SFML/Graphics.hpp>

int main()
{
    //init
    // 창 생성
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");
    window.setFramerateLimit(60);       //초당 프레임 60으로

    // 이벤트 루프 시작
    while (window.isOpen())
    {
        //update
        sf::Event event;
        while (window.pollEvent(event))
        {
            // x 마크를 누르면 윈도우 창이 닫아진다.
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //draw
        //clear하지 않으면 잔상이 남아있는다
        // 화면 지우기
        window.clear(sf::Color::White);

        // 화면 업데이트
        window.display();
    }

    return 0;
}

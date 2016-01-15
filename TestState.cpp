#include "TestState.h"

TestState::TestState()
{
    //_sprite = ImageManager::instance()->getImage("test.png");
    _sprite.setTexture(ImageManager::instance()->getImage("test.png"));
   // _sprite.createMaskFromColor(sf::Color(255,0,255));
}

TestState::~TestState()
{

}


void TestState::update(GameManager* game)
{

}

void TestState::handleEvents(GameManager* game)
{
    sf::Event event;
    while(game->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            game->closeWindow();
            game->close();
        }
    }
}

void TestState::render(GameManager* game)
{
    game->clear(sf::Color::Black);
    game->draw(_sprite);
    game->display();
}

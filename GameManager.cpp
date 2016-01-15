#include "GameManager.h"


GameManager::GameManager(int width, int height, std::string title)
:
    sf::RenderWindow(sf::VideoMode(width, height), title),
    _open(true)
{

}

GameManager::~GameManager()
{
    _states.clear();
}


void GameManager::update()
{
    _states.back()->update(this);
}

void GameManager::handleEvents()
{
    _states.back()->handleEvents(this);
}

void GameManager::render()
{
    _states.back()->render(this);
}

void GameManager::pushState(State* state)
{
    _states.push_back(state);
}

void GameManager::popState()
{
    _states.pop_back();
}

void GameManager::closeWindow()
{
    _open = false;
}

bool GameManager::isOpen()
{
    return _open;
}

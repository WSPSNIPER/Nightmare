#ifndef _GAME_MANAGER_H_
#define _GAME_MANAGER_H_

#include <vector>
#include <string>
#include <SFML/Graphics.hpp>

#include "State.h"

class GameManager : public sf::RenderWindow
{
public:
    GameManager(int width, int height, std::string title);
    ~GameManager();

    void update();
    void handleEvents();
    void render();

    void pushState(State* state);
    void popState();

    void closeWindow();

    bool isOpen();

private:
    bool _open;

    std::vector<State*> _states;
};
#endif // _GAME_MANAGER_H_

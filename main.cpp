
#include "GameManager.h"
#include "TestState.h"
#include "MathFunctions.h"
int main()
{
    GameManager game(1200, 720, "Mario Clone");
    TestState* state = new TestState();

    game.pushState(state);
    while(game.isOpen())
    {
        game.update();
        game.handleEvents();
        game.render();
    }

    if(state)
        delete state;
    return 0;
}

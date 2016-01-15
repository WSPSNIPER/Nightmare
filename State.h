#ifndef _STATE_H_
#define _STATE_H_

class GameManager;

class State
{
public:
    State(){}
    virtual ~State(){}

    virtual void update(GameManager*) = 0;
    virtual void handleEvents(GameManager*) = 0;
    virtual void render(GameManager*) = 0;
};
#endif // _STATE_H_

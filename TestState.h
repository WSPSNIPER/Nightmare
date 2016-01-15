#ifndef _TEST_STATE_H_
#define _TEST_STATE_H_

#include "State.h"
#include "ImageManager.h"

#include "GameManager.h"
class TestState : public State
{
public:
    TestState();
    virtual ~TestState();

    virtual void update(GameManager*);
    virtual void handleEvents(GameManager*);
    virtual void render(GameManager*);

private:
    sf::Sprite _sprite;
};
#endif // _TEST_STATE_H_

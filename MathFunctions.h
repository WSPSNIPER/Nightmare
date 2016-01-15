#ifndef _MATH_FUNCTIONS_H_
#define _MATH_FUNCTIONS_H_

#include <math.h>
#include <SFML/System.hpp>

namespace trig
{
    // ? const sf::Vector2f&
    sf::Vector2f getVelocity(float length, float angle)
    {
        sf::Vector2f vel;
        vel.x = (length*(cosf(angle)));
        vel.y = (length*(sinf(angle)));
        return vel;
    }

    float getAngle(const sf::Vector2f& p1, const sf::Vector2f& p2)
    {
        float y = p2.y - p1.y;
        float x = p2.y - p1.x;
        if(x > 0)
            return atanf(y/x);
        return atan2f(y, x);
    }
    float getAngle(const sf::Vector2f& vec)
    {
        if(vec.x > 0)
            return atanf(vec.x/vec.y);
        return atan2f(vec.x, vec.y);
    }

    float getLength(const sf::Vector2f& p1, const sf::Vector2f& p2)
    {
        return sqrtf(powf(p2.x-p1.x,2) + powf(p2.y-p1.y, 2));
    }

    float getLength(const sf::Vector2f& vec)
    {
        return sqrtf(powf(vec.x,2)+powf(vec.y,2));
    }

    float getRotationAngle(const sf::Vector2f& p1, const sf::Vector2f& p2)
    {
        return ((atan2f(p2.x - p1.x, p2.y - p1.y) * 180/3.14593)+180);
    }

    void normalize(sf::Vector2f& vec)
    {
        float len = getLength(vec);
        vec.x /= len;
        vec.y /= len;
    }

    float dotProduct(const sf::Vector2f& p1, const sf::Vector2f& p2)
    {
        return (p1.x*p2.x + p1.y*p2.y);
    }

}

#endif // _MATH_FUNCTIONS_H_

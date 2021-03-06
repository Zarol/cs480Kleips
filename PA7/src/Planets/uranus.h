#ifndef URANUS_H
#define URANUS_H

#include "planet.h"
#include "../ring.h"

class Uranus     :   public Planet
{
public:
    Uranus();

    void initializeGL();
    void paintGL( Camera3D& camera, QMatrix4x4& projection );
    void update();
    void teardownGL();

private:
    Ring *ring;
};

#endif  //  URANUS_H
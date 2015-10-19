#include "mars.h"

//
// CONSTRUCTORS ////////////////////////////////////////////////////////////////
// 

Mars::Mars()
    :   Planet( ":/texture/mars.jpg" )
{
    transform.setScale( .0107f );
}

//
// OVERRIDDEN FUNCTIONS
// 

void Mars::update()
{
    transform.rotate( 1.0f, 0, 1, 0 );
}
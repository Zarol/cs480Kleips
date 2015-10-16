#include "mercury.h"

//
// CONSTRUCTORS ////////////////////////////////////////////////////////////////
// 

Mercury::Mercury()
    :   Planet( ":/texture/mercury.jpg" )
{
    transform.setScale( .75f );
}

//
// OVERRIDDEN FUNCTIONS
// 
void Mercury::update()
{
    transform.rotate( 1.0f, 0, 1, 0 );
}
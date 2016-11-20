#include "HMain.h"

//__________                    __________                     ____ 
//\______   \_____  ___  _______\______   \_____________  ____/_   |
// |       _/\__  \ \  \/  /  _ \|       _/\____ \_  __ \/  _ \|   |
// |    |   \ / __ \_>    <  <_> )    |   \|  |_> >  | \(  <_> )   |
// |____|_  /(____  /__/\_ \____/|____|_  /|   __/|__|   \____/|___|
//        \/      \/      \/            \/ |__|                     


int main( void )
{
    if( !pProcess->Attach( "csgo.exe" ) )
        return -1;

    if( !pNetVarManager->Load( ) )
        return -2;

    pNetVarManager->Dump( );
    pOffsetManager->Dump( );

    delete pOffsetManager;

    pNetVarManager->Release( );
    delete pNetVarManager;

    pProcess->Detach( );
    delete pProcess;
}

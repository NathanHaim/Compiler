/************************************************************************/
/* Class           : plus.h						*/
/* Description     : Represent a plus 		*/
/* Depend of files : 							*/
/* Date creation   : 21/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/


//---------- Interface de la classe Plus (fichier plus.h) ------
#if ! defined ( PLUS_H )
#define PLUS_H



//--------------------------------------------------- Interfaces utilisées
#include "expr.h"
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes
#include "caracteres.h"
//------------------------------------------------------------------------
// Role de la classe Etat:
//

//------------------------------------------------------------------------

class Plus : public Symbole {
    private:
	
    protected: 

    public:

        Plus():Symbole(PLUS) {};
        
        virtual ~Plus();



};
#endif // if ! defined PLUS_H
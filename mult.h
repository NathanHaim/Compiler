/************************************************************************/
/* Class           : mult.h						*/
/* Description     : Represent a mult 		*/
/* Depend of files : 							*/
/* Date creation   : 21/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/


//---------- Interface de la classe Mult (fichier mult.h) ------
#if ! defined ( MULT_H )
#define MULT_H



//--------------------------------------------------- Interfaces utilisées
#include "expr.h"
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes
#include "caracteres.h"
//------------------------------------------------------------------------
// Role de la classe Etat:
//

//------------------------------------------------------------------------

class Mult : public Symbole {
    private:
	
    protected: 

    public:

        Mult():Symbole(MULT) {};
        
        virtual ~Mult();

        virtual Mult*  clone();



};
#endif // if ! defined MULT_H
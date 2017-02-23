/************************************************************************/
/* Class           : number.h						*/
/* Description     : Represent a number 		*/
/* Depend of files : 							*/
/* Date creation   : 21/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/


//---------- Interface de la classe Number (fichier number.h) ------
#if ! defined ( NUMBER_H )
#define NUMBER_H



//--------------------------------------------------- Interfaces utilisées
#include "expr.h"
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes
#include "caracteres.h"
//------------------------------------------------------------------------
// Role de la classe Etat:
//

//------------------------------------------------------------------------

class Number : public Expr {
    private:
	
    protected: 

    public:

        Number(double val):Expr(val){ id = NUMBER; };
        
        virtual ~Number();



};
#endif // if ! defined NUMBER_H
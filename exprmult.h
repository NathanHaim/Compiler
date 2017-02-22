/************************************************************************/
/* Class           : ExprMult.h						*/
/* Description     : Represent a multiplication 		*/
/* Depend of files : 							*/
/* Date creation   : 22/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/


//---------- Interface de la classe ExprMult (fichier exprmult.h) ------
#if ! defined ( EXPRMULT_H )
#define EXPRMULT_H



//--------------------------------------------------- Interfaces utilisées
#include "expr.h"
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes
#include "caracteres.h"
//------------------------------------------------------------------------
// Role de la classe Etat:
//

//------------------------------------------------------------------------

class ExprMult : public Expr {
    private:
	
    protected: 

    public:

        ExprMult(Expr* s1, Expr* s2 ):Expr(s1->getValue() * s2->getValue())
        {
            delete(s1);
            delete(s2);
        };
        
        virtual ~ExprMult(){};



};

#endif // if ! defined EXPRMULT_H
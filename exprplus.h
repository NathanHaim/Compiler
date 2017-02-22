/************************************************************************/
/* Class           : ExprPlus.h						*/
/* Description     : Represent an addition 		*/
/* Depend of files : 							*/
/* Date creation   : 22/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/


//---------- Interface de la classe ExprMult (fichier exprplus.h) ------
#if ! defined ( EXPRPLUS_H )
#define EXPRPLUS_H



//--------------------------------------------------- Interfaces utilisées
#include "expr.h"
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes
#include "caracteres.h"
//------------------------------------------------------------------------
// Role de la classe Etat:
//

//------------------------------------------------------------------------

class ExprPlus : public Expr {
    private:
	
    protected: 

    public:

        ExprPlus(Expr* s1, Expr* s2 ):Expr(s1->getValue() + s2->getValue())
        {
            delete(s1);
            delete(s2);
        };
        
        virtual ~ExprPlus(){};



};
#endif // if ! defined EXPRPLUS_H
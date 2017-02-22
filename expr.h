/************************************************************************/
/* Class           : expr.h						*/
/* Description     : Represent an expression 		*/
/* Depend of files : 							*/
/* Date creation   : 21/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/


//---------- Interface de la classe Lexer (fichier Lexer.h) ------
#if ! defined ( EXPR_H )
#define EXPR_H



//--------------------------------------------------- Interfaces utilisées
#include "symbole.h"
#include <map>
#include <list>
#include <string>
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes
#include "caracteres.h"
//------------------------------------------------------------------------
// Role de la classe Etat:
//

//------------------------------------------------------------------------

class Expr : public Symbole {
    private:
	
    protected: 
    	double value;

    public:

        Expr(double val):Symbole(EXPR),value(val) {};
        
        virtual ~Expr(){};

        virtual double getValue(){ return value;}



};
#endif // if ! defined EXPR_H
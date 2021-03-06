/************************************************************************/
/* Class           : lexer.h						*/
/* Description     : Read stdin and create pile of symbole 		*/
/* Depend of files : 							*/
/* Date creation   : 15/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/


//---------- Interface de la classe Lexer (fichier Lexer.h) ------
#if ! defined ( LEXER_H )
#define LEXER_H



//--------------------------------------------------- Interfaces utilisées
#include "symbole.h"
#include "expr.h"
#include "plus.h"
#include "mult.h"
#include "number.h"
#include "fermepar.h"
#include "ouvrepar.h"
#include <stack>
#include <list>
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes
#include "caracteres.h"

//------------------------------------------------------------------------
// Role de la classe Etat:
//

//------------------------------------------------------------------------

class Lexer {
    private:
        std::list<Symbole*> stackSymbole;
        bool lexed;
	
    protected: 

    public:

        Lexer();

        void putSymbol(Symbole* s);

        int playLexer();

        bool getLexed();

        Symbole* getNext();

        int getSize();

        int next();
        
        virtual ~Lexer();

        void print() const;

        void printStackSymbole();

};
#endif // if ! defined LEXER_H

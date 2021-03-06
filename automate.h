/*************************************************************************
TPComp
Automate.h  -  description
 -------------------
 début                : 15/02/2017
 copyright            : (C)2015 par FOLLEAS Jacques et SCHROTER Quentin
 *************************************************************************/

//---------- Interface de la classe Automate (fichier Automate.h) ------
#if ! defined ( AUTOMATE_H )
#define AUTOMATE_H

//--------------------------------------------------- Interfaces utilisées

#include <stack>
#include "symbole.h"
#include "lexer.h"
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------------
// Role de la classe Automate:
//

//------------------------------------------------------------------------
class Etat;
class Automate {

    private:
        Lexer* lexer;
        Etat * CurrentState; 
        std::stack<Symbole*> symbolStack; 
        std::stack<Etat*> statesStack;
        bool error;

        

    public:
        Automate(Lexer* lex);
        ~Automate();
        void printCurrentState() const; // Debug function
        void decalage(Symbole * s,Etat *e);
        void reduction(int n,Symbole * s);
        void lecture();
        Expr* popSymbol();
        void popAndDestroySymbol();
        int sizeSymbolStack();
        void printSymbolStack();
        void printStatesStack();
        void setError(bool);

        //void automate::execute();

};
#endif // if ! defined AUTOMATE_H
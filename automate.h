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
        lexer lexer;
        Etat * CurrentState; 
        std::stack<Symbole*> symbolStack; 
        std::stack<Etat*> statesStack;

    public:
        Automate(lexer* lex);
        ~Automate();
        void printCurrentState() const; // Debug function
        void decalage(Symbole * s,Etat *e);
        void reduction(int n,Symbole * s);
        void lecture();
        Symbole* popSymbol();
        void popAndDestroySymbol();

        //void automate::execute();

};
#endif // if ! defined AUTOMATE_H
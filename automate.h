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

//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------------
// Role de la classe Automate:
//

//------------------------------------------------------------------------
class Etat;
class Automate {

    private:
        Etat * CurrentState; 
        std::stack<Etat*> symbolStack; 
        std::stack<Etat*> statesStack;

    public:
        Automate();
        ~Automate();
        void printCurrentState() const; // Debug function
        void decalage(Etat *e);
        void reduction(int n);

        //void automate::execute();

};
#endif // if ! defined AUTOMATE_H
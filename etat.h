/*************************************************************************
TPComp
Etat.h  -  description
 -------------------
 début                : 15/02/2017
 copyright            : (C)2015 par FOLLEAS Jacques et SCHROTER Quentin
 *************************************************************************/

//---------- Interface de la classe Etat (fichier Etat.h) ------
#if ! defined ( Etat_H )
#define Etat_H



//--------------------------------------------------- Interfaces utilisées
//#include "Symbole.h"
#include <iostream>

//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------------
// Role de la classe Etat:
//

//------------------------------------------------------------------------
class Automate;

class Etat{
    private:

        std::string name;

    public:

        Etat(std::string name);

        virtual ~Etat();

        std::string toString() const; 

        virtual bool transition(Automate & automate) = 0;

};
#endif // if ! defined Etat_H
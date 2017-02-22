/*************************************************************************
TPComp
E1.h  -  description
 -------------------
 début                : 15/02/2017
 copyright            : (C)2015 par FOLLEAS Jacques et SCHROTER Quentin
 *************************************************************************/

//---------- Interface de la classe E1 (fichier E1.h) ------
#if ! defined ( E1_H )
#define E1_H



//--------------------------------------------------- Interfaces utilisées
//#include "Symbole.h"
#include <iostream>
#include "etat.h"
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------------
// Role de la classe E1:
//

//------------------------------------------------------------------------

class E1 : public Etat {

    public:

        E1();
        
        virtual ~E1();

        bool transition(Automate & automate);

};
#endif // if ! defined E1_H
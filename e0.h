/*************************************************************************
TPComp
E0.h  -  description
 -------------------
 début                : 15/02/2017
 copyright            : (C)2015 par FOLLEAS Jacques et SCHROTER Quentin
 *************************************************************************/

//---------- Interface de la classe E0 (fichier E0.h) ------
#if ! defined ( E0_H )
#define E0_H



//--------------------------------------------------- Interfaces utilisées
//#include "Symbole.h"
#include <iostream>
#include "etat.h"
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------------
// Role de la classe E0:
//

//------------------------------------------------------------------------

class E0 : public Etat {

    public:

        E0();
        
        virtual ~E0();

        bool transition(Automate & automate);

};
#endif // if ! defined E0_H
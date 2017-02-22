/************************************************************************/
/* Class           : ouvrepar.h						*/
/* Description     : Represent a begin of parenthese		*/
/* Depend of files : 							*/
/* Date creation   : 21/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/


//---------- Interface de la classe OuvrePar (fichier ouvrepar.h) ------
#if ! defined ( OUVREPAR_H )
#define OUVREPAR_H



//--------------------------------------------------- Interfaces utilisées
#include "symbole.h"
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes
#include "caracteres.h"
//------------------------------------------------------------------------
// Role de la classe Etat:
//

//------------------------------------------------------------------------

class OuvrePar : public Symbole {
    private:
	
    protected: 

    public:

        OuvrePar():Symbole(O_PARENTH) {};
        
        virtual ~OuvrePar();



};
#endif // if ! defined OUVREPAR_H
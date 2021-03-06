/************************************************************************/
/* Class           : fermepar.h						*/
/* Description     : Represent a end of parenthese 		*/
/* Depend of files : 							*/
/* Date creation   : 21/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/


//---------- Interface de la classe OuvrePar (fichier ouvrepar.h) ------
#if ! defined ( FERMEPAR_H )
#define FERMEPAR_H



//--------------------------------------------------- Interfaces utilisées
#include "symbole.h"
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes
#include "caracteres.h"
//------------------------------------------------------------------------
// Role de la classe Etat:
//

//------------------------------------------------------------------------

class FermePar : public Symbole {
    private:

	
    protected: 

    public:

        FermePar():Symbole(F_PARENTH) {};
        
        virtual ~FermePar();

        virtual FermePar*  clone();



};
#endif // if ! defined FERMEPAR_H
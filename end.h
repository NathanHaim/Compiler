/************************************************************************/
/* Class           : end.h						*/
/* Description     : Represent a end of file 		*/
/* Depend of files : 							*/
/* Date creation   : 21/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/


//---------- Interface de la classe End (fichier end.h) ------
#if ! defined ( END_H )
#define END_H



//--------------------------------------------------- Interfaces utilisées
#include "symbole.h"
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes
#include "caracteres.h"
//------------------------------------------------------------------------
// Role de la classe Etat:
//

//------------------------------------------------------------------------

class End : public Symbole {
    private:
	
    protected: 

    public:

        End():Symbole(END) {};
        
        virtual ~End();

        virtual End*  clone();



};
#endif // if ! defined END_H
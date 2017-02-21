/************************************************************************/
/* Class           : number.h						*/
/* Description     : Represent a number 		*/
/* Depend of files : 							*/
/* Date creation   : 21/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/


//---------- Interface de la classe Number (fichier number.h) ------
#if ! defined ( NUMBER )
#define NUMBER_H



//--------------------------------------------------- Interfaces utilisées
#include "symbole.h"
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes
#include "caracteres.h"
//------------------------------------------------------------------------
// Role de la classe Etat:
//

//------------------------------------------------------------------------

class Number : public Symbole {
    private:
        int id;
        int value;
	
    protected: 

    public:

        Number(int val):Symbole(NUMBER),value(val) {};
        
        virtual ~Number();

        //virtual int getInfo() const{ return value;}

        //operator int() const{ return value;}



};
#endif // if ! defined NUMBER_H
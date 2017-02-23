/************************************************************************/
/* Class           : Symbole.h						*/
/* Description     : Represent a symbol 		*/
/* Depend of files : 							*/
/* Date creation   : 21/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/


//---------- Interface de la classe Lexer (fichier Lexer.h) ------
#if ! defined ( SYMBOLE_H )
#define SYMBOLE_H



//--------------------------------------------------- Interfaces utilisées
//------------------------------------------------------------------------

//------------------------------------------------------------- Constantes
#include "caracteres.h"
//------------------------------------------------------------------------
// Role de la classe Etat:
//

//------------------------------------------------------------------------

class Symbole {
    private:

	
    protected: 
        int id;

    public:

        Symbole(int ident):id(ident) {};

        void setId(){ id = 1;}
        
        virtual ~Symbole();

        void print() const;

        int getInfo() const{ return id;}

        virtual Symbole*  clone();

        //virtual  int operator<<() const{ return id;}

};
#endif // if ! defined SYMBOLE_H
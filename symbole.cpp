/************************************************************************/
/* Class           : symbole.xpp						*/
/* Description     : Read stdin and create pile of symbole 		*/
/* Depend of files : 							*/
/* Date creation   : 21/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/

//---------- Réalisation de la classe Lexer (fichier Lexer.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "symbole.h"

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques


Symbole* Symbole::clone()
{
	return new Symbole(*this);
}






//----- Destructeur
Symbole::~Symbole()
{}// Bloc vide
//----- Fin destructeur
/************************************************************************/
/* Class           : ExprPlus.cpp						*/
/* Description     : Represent an expression 		*/
/* Depend of files : 							*/
/* Date creation   : 21/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/

//---------- Réalisation de la classe ExprPlus (fichier exprplus.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "exprplus.h"

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques


ExprPlus* ExprPlus::clone()
{
	return new ExprPlus(*this);
}

//----- Destructeur
// Bloc vide
//----- Fin destructeur

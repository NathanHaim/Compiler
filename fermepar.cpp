/************************************************************************/
/* Class           : fermepar.cpp						*/
/* Description     : Represent a end of parenthese 		*/
/* Depend of files : 							*/
/* Date creation   : 21/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/

//---------- Réalisation de la classe OuvrePar (fichier ouvrepar.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "fermepar.h"

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

FermePar* FermePar::clone()
{
	return new FermePar(*this);
}


//----- Destructeur
FermePar::~FermePar()
{}// Bloc vide
//----- Fin destructeur
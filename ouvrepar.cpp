/************************************************************************/
/* Class           : ouvrepar.cpp						*/
/* Description     : Represent a begin of parenthese 		*/
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
#include "ouvrepar.h"

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques


OuvrePar* OuvrePar::clone()
{
	return new OuvrePar(*this);
}

//----- Destructeur
OuvrePar::~OuvrePar()
{}// Bloc vide
//----- Fin destructeur
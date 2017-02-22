/*************************************************************************
TPComp
Automate.cpp  -  description
-------------------
début                : 15/02/2017
copyright            : (C)2017 par Aparicio Christopher et Haim Nathan
*************************************************************************/

//---------- Réalisation de la classe Etat (fichier Etat.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "etat.h"
#include "automate.h"
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques


//----- Nouvelle méthode
string Etat::toString() const
{
    return this->name;
} 
//-----Fin méthode

//----- Constructeur
Etat::Etat(string name)
{
    this->name = name;
}
//----- Fin constructeur

//----- Destructeur
Etat::~Etat()
{}// Bloc vide
//----- Fin destructeur
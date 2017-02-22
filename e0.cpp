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
#include "e0.h"
#include "automate.h"
#include "caracteres.h"

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//----- Constructeur
E0::E0():Etat("E0")
{}
//----- Fin constructeur

//----- Destructeur
E0::~E0()
{}// Bloc vide
//----- Fin destructeur

//----- Fonction de Transition

bool E0::transition(Automate & automate)
{
    /*
    int value = 0;
    switch(value){
        case NUMBER:
        case PLUS:
        case MULT:
        case O_PARENTH:
        case F_PARENTH:
        case EXPR:
    }
    */
    automate.decalage(this);

    return false;
}
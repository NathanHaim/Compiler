/*************************************************************************
TPComp
E3.cpp  -  description
-------------------
début                : 15/02/2017
copyright            : (C)2017 par Aparicio Christopher et Haim Nathan
*************************************************************************/

//---------- Réalisation de la classe E3 (fichier E3.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "e3.h"
#include "caracteres.h"
#include "automate.h"
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//----- Constructeur
E3::E3():Etat("E3")
{}
//----- Fin constructeur

//----- Destructeur
E3::~E3()
{}// Bloc vide
//----- Fin destructeur

//----- Fonction de Transition

bool E3::transition(Automate & automate,Symbole *s)
{
    int value = s->getInfo();
    switch(value){
        case NUMBER:break;
        case PLUS:break;
        case MULT:break;
        case O_PARENTH:break;
        case F_PARENTH:break;
        case EXPR:break;
    }
    return false;
}
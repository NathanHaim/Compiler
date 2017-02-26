/*************************************************************************
TPComp
E6.cpp  -  description
-------------------
début                : 15/02/2017
copyright            : (C)2017 par Aparicio Christopher et Haim Nathan
*************************************************************************/

//---------- Réalisation de la classe E6 (fichier E6.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "e4.h"
#include "e5.h"
#include "e6.h"
#include "e9.h"
#include "caracteres.h"
#include "automate.h"
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//----- Constructeur
E6::E6():Etat("E6")
{}
//----- Fin constructeur

//----- Destructeur
E6::~E6()
{}// Bloc vide
//----- Fin destructeur

//----- Fonction de Transition

bool E6::transition(Automate & automate,Symbole *s)
{
    int value = s->getInfo();
    switch(value){
        case NUMBER:
            automate.setError(true);
            break;
        case PLUS:
            automate.decalage(s,new E4);
            break;
        case MULT:
            automate.decalage(s,new E5);
            break;
        case O_PARENTH:
            automate.setError(true);
            break;
        case F_PARENTH:
            automate.decalage(s,new E9);
            break;
        case EXPR:
            automate.setError(true);
            break;
        case END:
            automate.setError(true);
            break;
        default:
            automate.setError(true);
            break;
    }
    return false;
}
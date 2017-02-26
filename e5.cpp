/*************************************************************************
TPComp
E5.cpp  -  description
-------------------
début                : 15/02/2017
copyright            : (C)2017 par Aparicio Christopher et Haim Nathan
*************************************************************************/

//---------- Réalisation de la classe E5 (fichier E5.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "e2.h"
#include "e3.h"
#include "e5.h"
#include "e8.h"
#include "caracteres.h"
#include "automate.h"
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//----- Constructeur
E5::E5():Etat("E5")
{}
//----- Fin constructeur

//----- Destructeur
E5::~E5()
{}// Bloc vide
//----- Fin destructeur

//----- Fonction de Transition

bool E5::transition(Automate & automate,Symbole *s)
{
    int value = s->getInfo();
    switch(value){
        case NUMBER:
            automate.decalage(s,new E3);
            break;
        case PLUS:
            automate.setError(true);
            break;
        case MULT:
            automate.setError(true);
            break;
        case O_PARENTH:
            automate.decalage(s,new E2);
            break;
        case F_PARENTH:
            automate.setError(true);
            break;
        case EXPR:
            automate.decalage(s,new E8);
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
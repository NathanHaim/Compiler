/*************************************************************************
TPComp
E0.cpp  -  description
-------------------
début                : 15/02/2017
copyright            : (C)2017 par Aparicio Christopher et Haim Nathan
*************************************************************************/

//---------- Réalisation de la classe E0 (fichier E0.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système

//------------------------------------------------------ Include personnel
#include "e0.h"
#include "e1.h"
#include "e2.h"
#include "e3.h"
#include "caracteres.h"
#include "automate.h"
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

bool E0::transition(Automate & automate,Symbole *s)
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
            automate.decalage(s,new E1);
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
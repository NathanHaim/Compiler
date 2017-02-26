/*************************************************************************
TPComp
E1.cpp  -  description
-------------------
début                : 15/02/2017
copyright            : (C)2017 par Aparicio Christopher et Haim Nathan
*************************************************************************/

//---------- Réalisation de la classe E1 (fichier E1.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "e1.h"
#include "e4.h"
#include "e5.h"
#include "caracteres.h"
#include "automate.h"
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//----- Constructeur
E1::E1():Etat("E1")
{}
//----- Fin constructeur

//----- Destructeur
E1::~E1()
{}// Bloc vide
//----- Fin destructeur

//----- Fonction de Transition

bool E1::transition(Automate & automate,Symbole *s)
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
            automate.setError(true);
            break;
        case EXPR:
            automate.setError(true);
            break;
        case END:
                std::cout << "Analyse Terminee" << std::endl;
            break;
        default:
            automate.setError(true);
            break;
    }
    return false;
}
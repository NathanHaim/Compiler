/*************************************************************************
TPComp
E2.cpp  -  description
-------------------
début                : 15/02/2017
copyright            : (C)2017 par Aparicio Christopher et Haim Nathan
*************************************************************************/

//---------- Réalisation de la classe E2 (fichier E2.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "e2.h"
#include "e3.h"
#include "e6.h"
#include "caracteres.h"
#include "automate.h"
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//----- Constructeur
E2::E2():Etat("E2")
{}
//----- Fin constructeur

//----- Destructeur
E2::~E2()
{}// Bloc vide
//----- Fin destructeur

//----- Fonction de Transition

bool E2::transition(Automate & automate,Symbole *s)
{   
    int value = s->getInfo();
    switch(value){
        case NUMBER:
            automate.decalage(s,new E3);
            break;
        case PLUS:break;
        case MULT:break;
        case O_PARENTH:
            automate.decalage(s,new E2);
            break;
        case F_PARENTH:break;
        case EXPR:
            automate.decalage(s,new E6);
            break;
    }
    
    return false;
}
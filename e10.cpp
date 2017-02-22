/*************************************************************************
TPComp
E10.cpp  -  description
-------------------
début                : 15/02/2017
copyright            : (C)2017 par Aparicio Christopher et Haim Nathan
*************************************************************************/

//---------- Réalisation de la classe E10 (fichier E10.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "e10.h"
#include "caracteres.h"
#include "automate.h"
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//----- Constructeur
E10::E10():Etat("E10")
{}
//----- Fin constructeur

//----- Destructeur
E10::~E10()
{}// Bloc vide
//----- Fin destructeur

//----- Fonction de Transition

bool E10::transition(Automate & automate,Symbole *s)
{
    automate.decalage(s,new E10);
    /*
    int value = s->getInfo();
    switch(value){
        case NUMBER:break;
        case PLUS:break;
        case MULT:break;
        case O_PARENTH:break;
        case F_PARENTH:break;
        case EXPR:break;
    }
    */
    return false;
}
/*************************************************************************
TPComp
E7.cpp  -  description
-------------------
début                : 15/02/2017
copyright            : (C)2017 par Aparicio Christopher et Haim Nathan
*************************************************************************/

//---------- Réalisation de la classe E7 (fichier E7.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "e7.h"
#include "caracteres.h"
#include "automate.h"
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//----- Constructeur
E7::E7():Etat("E7")
{}
//----- Fin constructeur

//----- Destructeur
E7::~E7()
{}// Bloc vide
//----- Fin destructeur

//----- Fonction de Transition

bool E7::transition(Automate & automate,Symbole *s)
{
    automate.decalage(s,new E7);
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
/*************************************************************************
TPComp
E9.cpp  -  description
-------------------
début                : 15/02/2017
copyright            : (C)2017 par Aparicio Christopher et Haim Nathan
*************************************************************************/

//---------- Réalisation de la classe E9 (fichier E9.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "e9.h"
#include "caracteres.h"
#include "expr.h"
#include "automate.h"
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//----- Constructeur
E9::E9():Etat("E9")
{}
//----- Fin constructeur

//----- Destructeur
E9::~E9()
{}// Bloc vide
//----- Fin destructeur

//----- Fonction de Transition

bool E9::transition(Automate & automate,Symbole *s)
{
    int value = s->getInfo();
    switch(value){
        case NUMBER:break;
        case PLUS:
        {
            automate.popAndDestroySymbol();
            Expr *s1 = (Expr*) automate.popSymbol();
            int value = s1->getValue();
            automate.popAndDestroySymbol();
            automate.reduction(3, new Expr(value));
            break;
        }
        break;
        case MULT:
        {
            automate.popAndDestroySymbol();
            Expr *s1 = (Expr*) automate.popSymbol();
            int value = s1->getValue();
            automate.popAndDestroySymbol();
            automate.reduction(3, new Expr(value));
            break;
        }
        case O_PARENTH:break;
        case F_PARENTH:
        {
            automate.popAndDestroySymbol();
            Expr *s1 = (Expr*) automate.popSymbol();
            int value = s1->getValue();
            automate.popAndDestroySymbol();
            automate.reduction(3, new Expr(value));
            break;
        }
        case EXPR:break;
    }
    
    return false;
}
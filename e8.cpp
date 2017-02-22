/*************************************************************************
TPComp
E8.cpp  -  description
-------------------
début                : 15/02/2017
copyright            : (C)2017 par Aparicio Christopher et Haim Nathan
*************************************************************************/

//---------- Réalisation de la classe E8 (fichier E8.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "e8.h"
#include "expr.h"
#include "exprmult.h"
#include "caracteres.h"
#include "automate.h"
//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//----- Constructeur
E8::E8():Etat("E8")
{}
//----- Fin constructeur

//----- Destructeur
E8::~E8()
{}// Bloc vide
//----- Fin destructeur

//----- Fonction de Transition

bool E8::transition(Automate & automate,Symbole *s)
{
    automate.decalage(s,new E8);
    
    int value = s->getInfo();
    switch(value){
        case NUMBER:break;
        case PLUS:
            {
            Expr *s1 = (Expr*) automate.popSymbol();
            automate.popAndDestroySymbol();
            Expr *s2 = (Expr*) automate.popSymbol();
            automate.reduction(3, new ExprMult(s1,s2));
            break;
            }
        case MULT:
            {
            Expr *s1 = (Expr*) automate.popSymbol();
            automate.popAndDestroySymbol();
            Expr *s2 = (Expr*) automate.popSymbol();
            automate.reduction(3, new ExprMult(s1,s2));
            break;
            }
        case O_PARENTH:break;
        case F_PARENTH:
            {
            Expr *s2 = (Expr*) automate.popSymbol();
            automate.popAndDestroySymbol();
            Expr *s1 = (Expr*) automate.popSymbol();
            automate.reduction(3, new ExprMult(s1,s2));
            break;
            }
        case EXPR:break;
        default://EOF
        {
            Expr *s1 = (Expr*) automate.popSymbol();
            automate.popAndDestroySymbol();
            Expr *s2 = (Expr*) automate.popSymbol();
            automate.reduction(3, new ExprMult(s1,s2));
            break;
        }
    }
    
    return false;
}
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
#include "e5.h"
#include "e7.h"
#include "expr.h"
#include "exprplus.h"
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
    int value = s->getInfo();
    switch(value){
        case NUMBER:break;
        case PLUS:
        {
            Expr *s1 = (Expr*) automate.popSymbol();
            automate.popAndDestroySymbol();
            Expr *s2 = (Expr*) automate.popSymbol();
            automate.reduction(3, new ExprPlus(s1,s2));
            break;
        }
        case MULT:
            automate.decalage(s,new E5);
            break;
        case O_PARENTH:break;
        case F_PARENTH:
            {
            Expr *s1 = (Expr*) automate.popSymbol();
            automate.popAndDestroySymbol();
            Expr *s2 = (Expr*) automate.popSymbol();
            automate.reduction(3, new ExprPlus(s1,s2));
            break;
            }
        case EXPR:break;
        default://EOF
        {
            //automate.printSymbolStack();
            //automate.printStatesStack();
            Expr *s1 = (Expr*) automate.popSymbol();
            automate.popAndDestroySymbol();
            Expr *s2 = (Expr*) automate.popSymbol();
            automate.reduction(3, new ExprPlus(s1,s2));
            break;
        }
    }
    
    return false;
}
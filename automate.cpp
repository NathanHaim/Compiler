/*************************************************************************
TPComp
Automate.cpp  -  description
-------------------
début                : 15/02/2017
copyright            : (C)2017 par Aparicio Christopher et Haim Nathan
*************************************************************************/

//---------- Réalisation de la classe Automate (fichier Automate.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <stack>

using namespace std;

//------------------------------------------------------ Include personnel
#include "automate.h"
#include "etat.h"
#include "e0.h"
#include "e1.h"

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques

//----- Constructeur
Automate::Automate(Lexer* lex)
{
    lexer = lex;
    this->CurrentState = new E0();
    //cout << "Transition du Current State" << endl;
    //this->CurrentState->transition(*this,new Symbole(43));
    //this->CurrentState = new E1();
    //this->CurrentState->transition(*this,new Symbole(43));
    /*
    this->decalage(new E0);
    this->decalage(new E1);
    this->decalage(new E1);
    this->decalage(new E1);
    this->reduction(2);
    */
}
//----- Fin constructeur

//----- Destructeur
Automate::~Automate()
{
    // Bloc Vide
}
//----- Fin destructeur

void Automate::printCurrentState() const
{
    cout << "Current State : " << CurrentState->toString() << endl;
}

void Automate::decalage(Symbole * s,Etat *e)
{
    cout << "Automate::decalage - New Etat : " << e->toString()  << ", New Symbole : " << s->getInfo() << endl;
    this->lexer->next();
    this->statesStack.push(e);
    this->symbolStack.push(s);
    this->CurrentState = e;
}

void Automate::lecture()
{
    Symbole* symb = NULL;
    while((symb = lexer->getNext()) != NULL && (this->CurrentState->toString() != "E1"))
    {
        if(lexer->getNext() != NULL)
        {
            lexer->next();
            cout << symb->getInfo() << endl;
            cout << "Automatte::lecture - Transition" << endl; 
            this->CurrentState->transition(*this,symb);
        }
        else
        {
            this->CurrentState->transition(*this,symb);
        }
        
    }
    cout << "End of While" << endl;
    if(this->CurrentState->toString() != "E1")
    {
        cout << "Reduction A Faire" <<endl;
    }
    else
    {
        cout << "E1 Finished" << endl;
    }
    /*
    if(this->symbolStack.top()->getInfo() == EXPR)
    {
        cout << "End EXPR" << endl;
        cout << ((Expr*)this->symbolStack.top())->getValue();
    }
    else
    {
        cout << "ERR" << endl;
    }
    */
}

void Automate::reduction(int n,Symbole *s)
{
    cout << "Automate::reduction - n : " << n  << " Symbole : " << s->getInfo() << endl;
    for(int i=0;i < n;i++)
    {
        //cout << "Top State : " << this->statesStack.top()->toString() << endl;
        // Delete the top of stack and pop
        delete(this->statesStack.top());
        this->statesStack.pop();
        // Debug
        //cout << "Current State : " << this->CurrentState->toString() << endl;
        //cout << "Size : " << this->statesStack.size() <<endl;
    }
    this->CurrentState = this ->statesStack.top();
    lexer -> putSymbol(s);
}
Symbole* Automate::popSymbol()
{
    Symbole * s = new Symbole(*(this->symbolStack.top()));
    this->symbolStack.pop();
    return s;
}

void Automate::popAndDestroySymbol()
{
    this->symbolStack.pop();
}

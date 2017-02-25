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
#include <string.h>
#include <stdio.h>

using namespace std;

//------------------------------------------------------ Include personnel
#include "automate.h"
#include "expr.h"
#include "etat.h"
#include "e0.h"
#include "e1.h"
#include "end.h"



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
    this->statesStack.push(new E0());
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
    this->statesStack.push(e);
    this->CurrentState = e;
    if(s->getInfo() != 46)
    {
        // Move if s isn't EOF
        this->symbolStack.push(s->clone());
        this->lexer->next();
    }
}

void Automate::lecture()
{
    Symbole* symb = NULL;
    while(((symb = lexer->getNext()) != NULL) || strcmp(this->CurrentState->toString().c_str(),"E1") != 0)
    { 
        cout << "Size : " << lexer->getSize() << endl;
        if(lexer->getLexed())
        {
            //cout << "Automatte::lecture - Transition" << endl; 
            //cout << "Automatte::lecture - Transition Symbole :" << symb->getInfo() << endl;     
            this->CurrentState->transition(*this,symb);
        }
        else if(strcmp(this->CurrentState->toString().c_str(),"E1") != 0)
        {
            cout << "Different E1 "<<endl;
            this->CurrentState->transition(*this,new End());
        }
        else
        {

        }
        cout << "Actual state : " << this->CurrentState->toString() << endl;
        
    }
    cout << "End of While" << endl;
    cout << ((Expr*)symbolStack.top())->getValue() << endl;
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
    this->CurrentState = this->statesStack.top();
    lexer->putSymbol(s);
}
Expr* Automate::popSymbol()
{
    //cout << "Size : " << symbolStack.size() << endl;
    //cout << this->symbolStack.top()->getInfo() <<endl;
    cout << "Pop Value : " << ((Expr*)this->symbolStack.top()) ->getValue()<<endl;
    Expr * s = new Expr(*((Expr*)this->symbolStack.top()));
    this->symbolStack.pop();
    return s;
}

void Automate::popAndDestroySymbol()
{
    this->symbolStack.pop();
}

int Automate::sizeSymbolStack()
{
    return this->symbolStack.size();
}

void Automate::printSymbolStack()
{
    while(!(this->symbolStack.empty()))
    {
        Symbole * s = symbolStack.top();
        cout << "Symbole : " << s->getInfo() <<endl;
        if(s->getInfo() == 44)
        {
            cout << "Value : " << ((Expr*)s)->getValue() <<endl;
        }
        symbolStack.pop();

    }
}

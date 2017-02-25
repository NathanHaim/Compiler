/************************************************************************/
/* Class           : lexer.cpp						*/
/* Description     : Read stdin and create pile of symbole 		*/
/* Depend of files : 							*/
/* Date creation   : 15/02/2017						*/
/* Authors         : Aparicio Christopher and Nathan Haim		*/
/************************************************************************/

//---------- Réalisation de la classe Lexer (fichier Lexer.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <fstream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "lexer.h"

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques



//----- Constructeur
Lexer::Lexer()
{
    this->lexed = false;	
}
//----- Fin constructeur

Symbole* Lexer::getNext()
{
	if(this->lexed)
	{
		return this->stackSymbole.front();
		//return (Expr*)this->stackSymbole.top();
		//return new Symbole( *(this->stackSymbole.top()));
	}
	else
	{
		return NULL;
	}
}

int Lexer::next()
{
	if(this->lexed)
	{
		this->stackSymbole.pop_front();
		if(this->stackSymbole.empty())
		{
			this->lexed = false;
		}
		return 0;
	}
	else
	{
		return -1;
	}
}


//----- playLexer
int Lexer::playLexer()
{
	string str;
	int c;
	std::ifstream is;
	//Waning:bool lastWasDigit = false;
	while((c = getchar()))
	{
		if(c==EOF)
		{
			
		}
		if(c == TAB || c==SPACE || c==BACKSPACE)
		{
			break;
		}
		else if ( c >= MIN_INT && c <= MAX_INT )//is int
		{	
			str = (char)c;	
			while((c = cin.peek()))
			{
				if( c >= MIN_INT && c <= MAX_INT)
				{	
					getchar();
					str+= (char)c;
				}
				else
				{
					break;
				}
			}
			this->stackSymbole.push_back(new Number(stoi(str)));
		}
		else if (c == O_PARENTH || c == F_PARENTH || c== MULT || c == PLUS)
		{	
			switch(c)
			{
				case O_PARENTH: this->stackSymbole.push_back(new OuvrePar());break;
				case F_PARENTH: this->stackSymbole.push_back(new FermePar());break;
				case MULT: this->stackSymbole.push_back(new Mult());break;
				case PLUS: this->stackSymbole.push_back(new Plus());break;
			}
			str= (char)c;
		}
		else
		{
			this->stackSymbole.clear();
			break;
		}
	}
	if(!this->stackSymbole.empty())
	{
		lexed = true;
		return 0;
	}
	else
	{
		lexed = false;
		return -1;
	}
}

void Lexer::putSymbol(Symbole* s)
{
	this->stackSymbole.push_front(s);
	this->lexed = true;
}

bool Lexer::getLexed()
{
	return this->lexed;
}

int Lexer::getSize()
{
	return stackSymbole.size();
}
void Lexer::printStackSymbole()
{
	while(!(this->stackSymbole.empty()))
    {
        Symbole * s = stackSymbole.front();
        cout << "Symbole : " << s->getInfo() <<endl;
        if(s->getInfo() == 44)
        {
            cout << "Value : " << ((Expr*)s)->getValue() <<endl;
        }
        stackSymbole.pop_front();

    }
}
//----- Destructeur
Lexer::~Lexer()
{}// Bloc vide
//----- Fin destructeur
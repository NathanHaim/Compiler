#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <fstream>

#include "lexer.h"
using namespace std;


void test(int* b)
{
	b = new int;
	*b = 5;
}

int main()
{	
	Lexer lexer;
	cout << "donnez ligne" << endl;
	lexer.playLexer();

	Symbole* symb = NULL;
	int a;
	symb = lexer.getNext();
	cout << symb->getInfo() << endl;
	lexer.next();
	symb = lexer.getNext();

	
	

	



}


#include <iostream>
#include "automate.h"
using namespace std;

int main()
{	
	Lexer* l = new Lexer();
	l->playLexer();
	cout << "sortie Lexer" << endl;
	Automate* automate = new Automate(l);
	cout << "zut" << endl;
	automate->lecture();
	return 0;
}

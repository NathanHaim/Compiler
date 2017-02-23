
#include <iostream>
#include "automate.h"
using namespace std;

int main()
{	
	Lexer* l = new Lexer();
	l->playLexer();
	Automate* automate = new Automate(l);
	cout << "zut";
	automate->lecture();
	return 0;
}

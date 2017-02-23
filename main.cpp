
#include <iostream>
#include "automate.h"
#include "number.h"
#include "ExprMult.h"

using namespace std;

int main()
{	
	Lexer* l = new Lexer();
	l->playLexer();
	cout << "Lexer Ready" << endl;
	Automate* automate = new Automate(l);
	cout << "Automate Ready" << endl;
	automate->lecture();
	cout << "Automate Finished" << endl;
	return 0;

}

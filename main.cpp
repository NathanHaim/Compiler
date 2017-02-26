
#include <iostream>
#include "automate.h"
#include "number.h"
#include "ExprMult.h"

using namespace std;

int main()
{	
	Lexer* l = new Lexer();
	if(l->playLexer()==0)
	{
		cout << "Lexer Ready" << endl;
		Automate* automate = new Automate(l);
		cout << "Automate Ready" << endl;
		automate->lecture();
		cout << "Automate Finished" << endl;

	}
	else
	{
		cout << "error analyse lexical" << endl;
	}
	
	return 0;
}

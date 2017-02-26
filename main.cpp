
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
		//DEBUG
		//cout << "Lexer Ready" << endl;
		Automate* automate = new Automate(l);
		//DEBUG
		//cout << "Automate Ready" << endl;
		automate->lecture();
		cout << "Automate Finished" << endl;
		delete(automate);

	}
	else
	{
		cout << "error analyse lexical" << endl;
	}
	delete(l);
	return 0;
}

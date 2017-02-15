#include <iostream>
#include <string>
#include <cctype>
#include <stdio.h>
#include <fstream>
using namespace std;

int main()
{	
	string str;
	int c;
	std::ifstream is;
	bool lastWasDigit = false;
	while( c = getchar())
	{
		if(c==EOF)
		{
			break;
		}
		if(c == 9 || c==10 || c==13)
		{
		}
		else if ( c >= 48 && c <= 57 )
		{	
			str = (char)c;	
			while(c = cin.peek())
			{
				if( c >= 48 && c <= 57)
				{	
					getchar();
					str+= (char)c;
				}
				else
				{
					break;
				}
			}
			cout <<  str << endl;
			
		}
		else if (c == 43 || c == 42 || c==40 || c == 41)
		{	
			str= (char)c;
			cout <<  str << endl;
		}

	}

}

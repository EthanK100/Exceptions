// Ethan Klenda
// CIS 1202 501
// December 1, 2023

#include<iostream>

using namespace std;

// function prototypes
char character(char start, int offset);


int main()
{
	try
	{ 
		cout << "New letter: " << character('z', -2) << endl << endl;
	}
	catch(char)
	{
		cout << "Error: invalid starting value" << endl << endl;
	}
	catch (int)
	{
		cout << "Error: target out of range" << endl << endl;
	}

	
    return 0;
}

// function definitions
char character(char start, int offset)
{
	

	if (isupper(start) || !isalpha(start))
	{
		throw 'A';
	}

	char newCharacter = start + offset;

	if (!isalpha(newCharacter))
	{
		
		throw 1;
	}

	return newCharacter;
}
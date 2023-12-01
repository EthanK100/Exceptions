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
		cout << character('a', 1);
	}
	catch(char A)
	{
	
	}
	catch (char Z)
	{

	}

	
    return 0;
}

// function definitions
char character(char start, int offset)
{
	char newCharacter = start + offset;

	return newCharacter;
}
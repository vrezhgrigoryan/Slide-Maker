#include "Lexer.h"
#include <iostream>

std::string getLexem(std::ifstream& indata)
{
	char c;
	ignoreSpaces(indata);
	std::string lexem = "";

	if (indata.eof())
	{
		return "";
	}
	if (isalpha(indata.peek()))
	{
		while (isalpha(indata.peek()) || isdigit(indata.peek()))
		{
			indata.get(c);
			lexem += c;
		}
	}
	else if (isdigit(indata.peek()))
	{
		while (isdigit(indata.peek()))
		{
			indata.get(c);
			lexem += c;
		}
		
	}
	return lexem;
}
void ignoreSpaces(std::ifstream& indata)
{
	while (indata.peek() == ' ' || indata.peek() == '\n')
	{
		indata.get();
	}
}
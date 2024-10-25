#include "Console.h"
void Console::getInput() 
{

}
void Console::outputresponse()
{

}

CommandHandler* Console::parser(std::ifstream& input)
{
	return 	sem->makeCommand(input);
}







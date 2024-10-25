#include <iostream>
#include "Console.h"
#include "SlidesContainer.h"
int main()
{
	std::ifstream in;
	in.open("commands.txt");
	ConsoleInterface* console = new Console();
	SlidesContainer* slideshow = new Slideshow();
	if (in)
	{
		while (!in.eof())
		{
			console->parser(in)->execute(slideshow);
		}
	}
	delete console;
	delete slideshow;
	return 0;
}
#include "Slide.h"


void Slide::removeElement(int number) 
{
	Elements.erase(Elements.begin() + number);
}
void Slide::showAllElements(std::ostream& output) 
{
	for (auto el : Elements)
	{
		el.print(output);
	}
}
void Slide::addElement(int pos, IElement* type) 
{
		
}


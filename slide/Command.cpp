#include "Command.h"

removeSlide::removeSlide(int p)
{
	pos = p;
}
void removeSlide::execute(SlidesContainer* s)
{
	s->removeSlide(pos);
}
addSlide::addSlide(int p)
{
	Slide* newSlide = new Slide();
	pos = p;
}
void addSlide::execute(SlidesContainer* s)
{
	s->addSlide(pos);
}
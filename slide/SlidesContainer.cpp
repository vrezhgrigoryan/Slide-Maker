#include "SlidesContainer.h"
#include "Slide.h"
#include <vector>
void Slideshow::addSlide(int pos) 
{
	Slide* newSlide = new Slide();
	slideshow.insert(slideshow.begin() + pos, *newSlide);
}
void Slideshow::removeSlide(int pos) 
{
	slideshow.erase(slideshow.begin() + pos);
}

int Slideshow::currentSlideNum() 
{
	return currentSlide;
}
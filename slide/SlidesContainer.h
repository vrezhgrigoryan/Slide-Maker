#pragma once
#include "Slide.h"
#include <vector>
class SlidesContainer
{
public:
	virtual void addSlide(int pos) = 0;
	virtual void removeSlide(int pos) = 0;
	virtual int currentSlideNum() = 0;
};
class Slideshow : public SlidesContainer
{
private:
	std::vector <Slide> slideshow;
	int currentSlide = 0;
public:
	void addSlide(int pos) override;
	void removeSlide(int pos)override;
	int currentSlideNum()override;
};
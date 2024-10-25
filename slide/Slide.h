#pragma once
#include "IElement.h"
#include <vector>
class ISlide
{
public:
	virtual void addElement(int pos, IElement* type) = 0;
	virtual void removeElement(int number) = 0;
	virtual void showAllElements(std::ostream& output) = 0;
};
class Slide : public ISlide
{
private:
	std::vector<IElement> Elements;
public:
	void addElement(int pos, IElement* type) override;
	void removeElement(int number) override;
	void showAllElements(std::ostream& output) override;
};

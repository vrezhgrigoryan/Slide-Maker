#pragma once
#include <map>
#include <string>
#include "Slide.h"
#include "SlidesContainer.h"
class CommandHandler
{
public:
	virtual void execute(SlidesContainer*) = 0;
	//virtual void print() = 0;
};
class addSlide : public CommandHandler
{
private:
	int pos;
	
public:
	addSlide(int p);
	void execute(SlidesContainer* s);
};
class addElem : public CommandHandler
{

};

class removeSlide : public CommandHandler
{
private:
	int pos;
public:
	removeSlide(int p);
	void execute(SlidesContainer* s);
};

class removeElem : public CommandHandler
{
private:

};
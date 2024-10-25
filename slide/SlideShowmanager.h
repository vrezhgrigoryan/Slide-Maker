#pragma once
#include <string>
class SlideShowManager
{
public:
	virtual void load(std::string slideshowname) = 0;//load from file
	virtual void save() = 0;//save in file
};

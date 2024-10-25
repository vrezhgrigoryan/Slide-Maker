#pragma once
#include "Command.h"
#include "Lexer.h"
#include <map>
#include <iostream>

class Semantic
{
private:
	void wrongCommand();
	bool isint(std::string str);
	enum commands {addSl, addElement, removeSlide, removeElement};
	std::map<std::string, commands> stoenum{ {"addSlide", addSl}, {"addElement", addElement}, {"removeSlide", removeSlide}, {"removeElement", removeElement} };
public:


	CommandHandler* makeCommand(std::ifstream& input);
};
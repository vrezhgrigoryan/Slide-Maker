#pragma once
#include "SemanticAn.h"
#include "Command.h"
class ConsoleInterface
{
public:
	virtual void getInput() = 0;
	virtual void outputresponse() = 0;
	virtual CommandHandler* parser(std::ifstream& input) = 0;
};

class Console : public ConsoleInterface
{
private:
	Semantic* sem;
public:
	void getInput() override;
	void outputresponse() override;
	CommandHandler* parser(std::ifstream& input) override;
};
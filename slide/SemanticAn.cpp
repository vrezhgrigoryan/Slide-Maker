#include "SemanticAn.h"
void Semantic::wrongCommand()
{
	std::cout << "wrong command";
	exit(1);
}
bool Semantic::isint(std::string str)
{
	for (auto s : str)
	{
		if (!isdigit(s))
		{
			return 0;
		}
	}
}
CommandHandler* Semantic::makeCommand(std::ifstream& input)
{

	std::string s = getLexem(input);
	auto c = stoenum.find(s);
	if (c == stoenum.end())
	{
		wrongCommand();
	}

	std::string p;
	switch (stoenum[s])
	{
	case addSl:
		p = getLexem(input);
		if (!isint(p))
		{
			wrongCommand();
		}
		return new addSlide(stoi(p));
	}
}
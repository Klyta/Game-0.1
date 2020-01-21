#include "Action.h"

std::string Action::getStr()
{
	return str;
}
Action::Action() 
{
	std::cout << "Action()" << std::endl;
}
Action::Action(std::string str):str(str)
{
	std::cout << "Action(str)" << std::endl;
}
int Action::getGameObjNum()
{
	return GameObjNum;
}
std::string Action::getAType()
{
	std::string str;
	return str;
}
Action::~Action()
{
	std::cout << "~Action()" << std::endl;
}
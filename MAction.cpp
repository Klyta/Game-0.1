#include "MAction.h"
MAction::MAction(int pn, int gon, int x, int y, std::string t):PlayerNum(pn),GameObjNum(gon),X(x),Y(y),CellType(t)
{
	std::cout << "MAction(int,int,int,int,str)" << std::endl;
}
MAction::~MAction()
{
	std::cout << "~MAction()" << std::endl;
}
int MAction::getGameObjNum()
{
	return GameObjNum;
}
int MAction::getPlayerNum()
{
	return PlayerNum;
}
std::string MAction::getAType()
{
	return ActionType;
}
int MAction::getX()
{
	return X;
}
int  MAction::getY()
{
	return Y;
}
std::string  MAction::getCellType()
{
	return CellType;
}
#pragma once
#include <string>
#include <iostream>
class Action
{
private:
	const std::string str;
	int GameObjNum=0;
	std::string ActionType;
public:
	Action(std::string);
	Action();
	std::string getStr();
	virtual std::string getAType();
	virtual int getGameObjNum();
	~Action();
};


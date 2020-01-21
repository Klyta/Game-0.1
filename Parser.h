#pragma once
#include<string>
#include"Action.h"
#include"MAction.h"
#include<string>
class Parser
{
public:
	static Action* parse(std::string str);
};


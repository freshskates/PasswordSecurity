#pragma once
#include <iostream>

class Plugin
{
public: 

	Plugin() = default;
	~Plugin() = default;
	
	virtual bool condition(std::string);
};


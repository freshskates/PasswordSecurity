#pragma once
#include "plugin.h"

class Mininum : public Plugin 
{
private: 
	short int minLength; 

public: 
	Mininum() = default; 
	Mininum(int&);

	bool condition(std::string&);

	short int getMinLength(); 
	void setMinLength(int&);
};

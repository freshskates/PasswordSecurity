#pragma once
#include "../plugin.h"

class Maximum : public Plugin
{
private:
	short int maxLength;

public:
	Maximum() = default;
	Maximum(int&);

	bool condition(std::string&);

	short int getMaxLength();
	void setMaxLength(int&);
};

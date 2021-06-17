#pragma once
#include <iostream>
using namespace std;

class Panel
{	
private: 
	enum Status { help = 1, start = 2, prompt = 4, error = 8, quit = 16 };

public: 

	Panel() = default;
	~Panel() = default;
	
	void run();
	void status(int);
	int loop(); 

};

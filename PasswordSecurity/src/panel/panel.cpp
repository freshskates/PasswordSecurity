#include "panel.h"
#include <string>
#include <vector>

using namespace std; 

void Panel::run() {
	status(start);

	if (!loop()) {
		status(quit);
		return; 
	}

}

int Panel::loop() {
	string userInput; 
	while (true) {
		getline(cin, userInput);
		
	}

}

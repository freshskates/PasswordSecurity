#include "panel.h"
#include <string>
using namespace std;

void Panel::status(int flag) {

	if (flag & start) {
		cout << "-------------------------------\n";
		cout << "\tWelcome to Spark\n";
		cout << "-------------------------------\n";
	}

	if (flag & error) {

	}

	if (flag & help) {

	}

	if (flag & prompt) {

	}

	if (flag & quit) {
		cout << "---------- THANK YOU ----------\n";

	}

}
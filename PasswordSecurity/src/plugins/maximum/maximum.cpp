#include "maximum.h"

using namespace std;

Maximum::Maximum(int& maxLength) : maxLength(maxLength) {}

bool Maximum::condition(string& phrase) {
	return phrase.size() >= this->maxLength;
}

short int Maximum::getMaxLength() {
	return this->maxLength;
}

void Maximum::setMaxLength(int& maxLength) {
	this->maxLength = maxLength;
}

#include "mininum.h"
using namespace std; 

Mininum::Mininum(int& minLength) : minLength(minLength) {}

bool Mininum::condition(string& phrase) {
	return phrase.size() >= this->minLength;
}

short int Mininum::getMinLength() {
	return this->minLength;
}

void Mininum::setMinLength(int& minLength) {
	this->minLength = minLength;
}

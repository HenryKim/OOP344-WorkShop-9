/*
OOP344 WINTER 2014
Workshop 09
w9.cpp
Hyungi Kim
025 741 125*/
#include <iostream>
#include <stdio.h>
#include "limits.h"
using namespace std;
void displayBits(unsigned x);

int main(void) {

	displayBits(0);
	displayBits(1);
	displayBits(-1);
	displayBits(2000000000);
	displayBits(-2000000000);
	
	return 0;
}

void displayBits(unsigned x) {
	unsigned int mask = (1 << (CHAR_BIT - 1));
	int counter = 0;

	while (mask > 0) {
		counter++;
		if ((x & mask) == 0)
			cout << "0";
		else
			cout << "1";
		if ((counter % 8) == 0)

			cout << " ";
		mask = mask >> 1;
	}
	cout << endl;
}

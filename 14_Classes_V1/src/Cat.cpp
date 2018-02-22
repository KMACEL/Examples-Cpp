/*
 * Cat.cpp
 *
 *  Created on: Sep 19, 2017
 *      Author: acel
 */

#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::sound(void) {
	cout << "Miyavv" << endl;
}

void Cat::jump(void) {
	cout << "Ficciu" << endl;
}

int Cat::age(int ages) {
	return ages * 9;
}

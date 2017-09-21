//============================================================================
// Name        : 27_AllocatingMemory.cpp
// Author      : AceL
// Version     :
// Copyright   : C++ Example
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Bird {
private:
	string birdName;

public:
	Bird() {
		cout << "Create Bird Class" << endl;
	}

	Bird(const Bird &otherClass) {
		cout << "Class Copied : " << otherClass.birdName << endl;
	}

	~Bird() {
		cout << this->birdName << " : Class is Finished" << endl;
	}

	void setBirdName(string birdName) {
		this->birdName = birdName;
	}

	void birdSound() {
		cout << this->birdName << " is Cik cik Ciiike Ciik" << endl;
	}
};

int main() {
	cout << "Allocating Memory" << endl; // prints Allocating Memory

	// primitive type method

	string name("mert");
	cout << "Name : " << name << endl;

	cout << endl << "======================================" << endl << endl;

	string name2(5, 'a');
	cout << "Name2 : " << name2 << endl;

	cout << endl << "======================================" << endl << endl;

	char charArray = 'b';
	charArray++;

	cout << "charArray : " << charArray << endl;

	cout << endl << "======================================" << endl << endl;

	int *pInt = new int;
	*pInt = 17;
	cout << "pInt : " << *pInt << endl;
	delete (pInt);

	cout << endl << "======================================" << endl << endl;

	Bird *pBird = new Bird;
	pBird->setBirdName("Cuk cuk");
	pBird->birdSound();
	delete (pBird);

	cout << endl << "======================================" << endl << endl;

	Bird *pBird2 = new Bird[5];
	pBird2[3].setBirdName("vuk vuuk ");
	pBird2[3].birdSound();

	delete[] pBird2;

	cout << endl << "======================================" << endl << endl;

	cout << "pBird3 : " << endl;
	Bird *pBird3 = new Bird[5];
	Bird *allList = pBird3;

	pBird3->setBirdName("vuk vuuk ");
	pBird3->birdSound();

	pBird3++;

	pBird3->setBirdName("kukukk vuuk ");
	pBird3->birdSound();

	pBird3++;

	pBird3->setBirdName("lukkurukk ");
	pBird3->birdSound();

	pBird3++;

	pBird3->setBirdName("şukkurubukkk ");
	pBird3->birdSound();

	pBird3++;

	pBird3->setBirdName("futturu tukkukk ");
	pBird3->birdSound();

	delete[] allList;

	return 0;
}

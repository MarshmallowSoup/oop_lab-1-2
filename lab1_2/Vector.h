////////////////////////////////////////////////////
// Vector.h
#pragma once
#include <iostream>
using namespace std;

class Vector
{
private:
	int* p;
	int i;
	int state;
public:
	int getI() { return i; }
	void setI(int value) { i = value; };
	int getState() { return state; }
	void setState(int value) { state = value; }
	bool init(int n, int s);
	void create();
	void setElem(int a, int b);
	int getElem(int a, int b);
	void printArr();
	void display();
	void read();
	double eucledianSpace();
	int* getArr() { return p; };
	void setArr();

};
////////////////////////////////////////////////////
// Vector.cpp
#include "Vector.h"
#include "iostream"

using namespace std;

bool Vector::init(int n, int s)
{
	if (n > 0 && s == 0) {
		setI(n);
		setState(s);
		return true;
	}
	else
		setState(s);
		return false;
}

void Vector::create()
{
	p = new int[i];
}

void Vector::setElem(int a, int b)
{
	if (a < i) {
		p[a] = b;
		setState(0);
	}
	else{
		setState(1);
		cout << "ERROR | Out of array" << endl;
	}
}

int Vector::getElem(int a, int b)
{
	if (a < i) {
		setState(0);
		return p[a];
	}
	else
		setState(1);
		cout << "ERROR | Out of array" << endl;
		return 0;
}

void Vector::printArr()
{
	for (int n = 0; n < i; n++)
		cout << p[n] << " ";
	
}

void Vector::display()
{
	cout << " Amount of elements of array [i] =" << i << endl; 
	if (getState() == 0)
		cout << "State: no issues found (code " << getState() << ")" << endl;
	else if (getState () == 1)
		cout << "State: ERROR | Out of array (code "<< getState() << ")" << endl;
	else
		cout << "State: ERROR | Unknown error (code " << getState() << ")" << endl;
}



void Vector::read()
{
	int x, y;
	do
	{
		cout << " Amount of elements "; cin >> x;
		cout << " State (press 0 to continue) "; cin >> y;
	} while (!init(x,y));
}

double Vector::eucledianSpace()
{
	double s = 0;
	for (int n = 0; n < i; n++) {
		int x = p[n];
		s += pow(x, 2);
	}
	double result = sqrt(s);
	return result;
}

void Vector::setArr()
{
	int b;
	for (int n = 0; n < i; n++)
	{
		b = 0;
		cout << "Input a value" << endl;
		cout << "Value of i[" << n << "]="; cin >> b;
		setElem(n, b);
	}
}

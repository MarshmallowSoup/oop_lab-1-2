////////////////////////////////////////////////////
// lab1_2.cpp
#include "Vector.h"
#include <iostream>

using namespace std;

Vector makeVector(int i,int s){
    Vector v;

    if (!v.init(i,s))
        cout << "Wrong arguments to Init!" << endl;
    return v;
}

int main()
{
    Vector v;
    v.read();
    v.display();
    v.create();
    v.setArr();
    v.printArr();
    cout << "Euclidean space = " << v.eucledianSpace() << endl;

    int x, y;

    cout << " Amount of elements "; cin >> x; 
    cout << " State (press 0 to continue) "; cin >> y;

    Vector u = makeVector(x, y);
    u.display();
    u.create();
    u.setArr();
    u.printArr();
    double result = u.eucledianSpace();
    cout << "Euclidean space = " << result << endl;

    return 0;

}
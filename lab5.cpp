// this exercise is for user to enter POSITIF value for x and z.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string name;

	cout << "please enter your name : ";
	getline(cin, name);
	cout << "your name is " << name << endl;

	int x, z;
	double y = 0.0;

	cout << "please enter value of x : ";
	cin >> x;
	cout << "please enter value of z : ";
	cin >> z;

	if (x > 0 && z > 0)
	{
		y = x / pow(z, 2) + 2;
		cout << "y = (x /(z*z) + 2 is " << setprecision(4) << y << endl << endl;
	}
	else
	{
		cout << "please enter positive value" << endl;
	}

}
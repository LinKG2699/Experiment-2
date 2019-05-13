#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{ 
	double x, y, z, V; int a;
	z=2.50;
	
	cout << "Input x:";
	cin >> a;
	switch (a)
	{
	case 1:
	{
	cout << "Input y:";
	cin >> y;
	x = 1;
	V=x*y*z;
		if (1<y && y<5)
	{
			cout << "V= " << setprecision(2) << setw(10) << fixed << V;
	}
		else if (y>=5)
		cout << "V= " << x + (y/z);
		else
		cout << "V= " << x + y + z;
		break;
	}
		case 2:
		{
			x=2;
		cout << "Input y:";
		cin >> y;
		if (y<=5)
		{
		cout << "V= " << abs((x-y)/z);
		}
		else if (y>5)
		cout << "V= " << x- sqrt(y+z);
		else 
		cout << "V= " << x + y + z;
		break;
	}
		default:
			x=a;
			cout << "Input y:";
			cin >> y;
			cout << "V= " << x + y + z;
		
}
	_getch;
	
	return 0;
}

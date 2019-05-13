#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char X; int H;
	cout << "Package A: P995/mo 10 hrs of access, additional P20/hr" << endl;
	cout << "Package B: 1495/mo 20 hrs of access, additional P10/hr" << endl;
	cout << "Package C: 1995/mo unlimited access is provided" << endl;
	
	cout << "Press 1 for package A, 2 for package B, and 3 for Package C" << endl;
	cin >> X;
	
		switch (X)
	{
		case '1':
			cout << "insert number of hours used:";
			cin >> H;
			cout << "Monthly Bill: P";
			if (H<10)
			cout << "995";
			else
			cout << 995 + (H-10)*20;
			break;
			
		case '2':
			cout << "insert number of hours used:";
			cin >> H;
			cout << "Monthly Bill: P";
			if (H<20)
			cout << "1495";
			else
			cout << 1495 + (H-20)*10;
			break;
			
		case '3':
		cout << "insert number of hours used:";
			cin >> H;
			cout << "Monthly Bill: P1995";
			
	}
_getch();

return 0;	
}

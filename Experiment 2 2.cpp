#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int G, U;
	
	cout << "Water bill:" << endl;
	cout << "Water demand charge P35" << endl;
	cout << "number of gallons used:";
	cin >> G;
	cout << "unpaid balance: P";
	cin >> U;
	cout << "Total water bill:";
	if (U>0)
	cout << " P" << 35 + 1.1*G + U + 20;
	else
	cout << " P" << 35 + 1.1*G;

	
	
	_getch();
	
	return 0;
}

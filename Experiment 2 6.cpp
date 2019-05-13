#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int count, N, S;
	
	
	cout << "Enter a number:";
	cin >> N;
	do {
		if (N>=1)
		{
		
		S=0;
		for (count = 1; count<=N; count++)
	{
		S+=count;
	}
	cout << "sum of all whole numbers from 1 to " << N << " is: " << S << endl;
	
	cout << "Enter a number:";
	cin >> N;
}
}
	while (N>0);
	cout << "Thank You!" << endl;
	
	_getch();
	return 0;
}

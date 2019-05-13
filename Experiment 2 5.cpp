#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int Count, F, L, N;
	cout << "Fibonacci Numbers:" << endl;
	cout << "0, ";
	for (Count = 0; Count <21; Count++)
	{
	
		
			N= F + L;
			F = L;
			L = N;
		
		cout << N << ", ";
	}
_getch();
return 0;	
}

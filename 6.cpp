#include <iostream>
#include <conio.h>
int fibo(int n);
using namespace std;
int main()
{
	int a;
	cout <<"please enter your number : ";
	cin >> a;
	
	int n;
	for(n = 1; n <= a; n++)
	{
		cout << fibo(n) << " ";
	}
}

int fibo(int n)
{
	if(n == 0) return 0;
	if(n == 1) return 1;
	
	return fibo(n-1) + fibo(n-2);	
}	

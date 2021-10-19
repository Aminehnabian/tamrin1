#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
	int i, s;
	string move = "continue";
	while(move != "exit")
	{
		cout << "please enter your number : ";
		cin >> i;
		s += i;
		cout << "do you contiue or exit ? ";
		cin >> move;
		cout << "\n";
	}
	cout << "sum of numbers is : " << s;
}

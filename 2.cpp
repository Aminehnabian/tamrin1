#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int hour, minute, second, s = 0;
	cout << "please enter hour: ";
	cin >> hour;
	cout << "please enter minute: ";
	cin >> minute;
	cout << "please enter second: ";
	cin >> second;
	s = second + (minute*60) + (hour*3600);
	
	cout << "your time in second : " << s;
}
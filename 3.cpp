#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int hour, minute, second, s = 0;
	cout << "please enter second : ";
	cin >> s;
	hour = s / 3600;
	minute = (s % 3600)/ 60;
	second = (s % 3600)% 60;
	cout << hour << " : " << minute << " : " << second;
}

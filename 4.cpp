#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	int num, i;
	float ave, max , min, s , score;
	
	cout << "please enter of number : ";
	cin >> num;
	
	cout << "please enter score 1 : ";
	cin >> score;
	s = score;
	max = score;
	min = score;
	for(i = 2 ; i <= num; i++)
	{
		cout << "please enter score " << i << " : ";
		cin >> score;
		if(score >= max)
		{
			max = score;
		}
		else if(score <= min)
		{
			min = score;
		}
		s += score;
	}

	cout << "max : " << max << "\n";
	cout << "min : " << min << "\n";
	cout << "average : " << s / num << "\n";

}

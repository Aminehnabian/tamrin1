#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main()
{
	int i = 0;
	srand(time(0));
	i = rand() % 6 + 1;
	cout << i << "\n";
	while(i == 6)
	{
		i = rand() % 6 + 1;
		cout << "prize : " << i << "\n";
	}
}
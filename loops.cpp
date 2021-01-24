#include <iostream>
#include <time.h>
using namespace std;

void time_delay(int seconds)
{
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds);
}

int main()
{
	int num; int i; int loops;
	for (;;)
	{
		cout << "\n" << "loops: "; cin >> loops;
		if (loops <= 0)
		{
			cout << "\n" << "invalid" << "\n";
			time_delay(1);
		}
		else
		{
			for (i = 0; i < loops; i++)
			{
				cout << "\n" << "num: "; cin >> num;
				time_delay(0.75);
				if (num != 1) 
				{
					cout << "\n" << "invalid" << "\n";
					time_delay(1);
					return main();
				}
			}
		}
	}
	return 0;
}

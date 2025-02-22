#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main() {
	float rainfull,TotalRain = 0;
	int month = 0;

	while (month < 12) {
		month++;
		cout << "How much rainfall was there for month " << month << " : " ;
		cin >> rainfull;
		cout << "-------------------------------------------------" << endl;;

		TotalRain = TotalRain + rainfull;
	}
	
	cout << "the total rainfall for this year is : " << TotalRain << "mm";
	return 0;

}

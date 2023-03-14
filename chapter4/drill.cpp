#include "../std_lib_facilities.h"


int main() {

	double smallest = sizeof(int); 
	double biggest, sum = 0;
	int i = 0;
	string unit;
	
	vector<double> values;

	for (double temp; cin >> temp >> unit; i++) {
		
		if (unit == "cm") temp /= 100;
		if (unit == "in" || unit == "ft") temp *= 2.54;
		if (unit == "ft") temp *= 12;	
		
		if (unit != "cm" && unit != "m" && unit != "ft" && unit != "in") 
				cout << "The unite provide is not taken in consideration" << endl;

			

		if (temp > biggest) biggest = temp;
		if (temp < smallest) smallest = temp;

			
		values.push_back(temp);
		sum += temp;
		
	}

	cout << "The sum is: " << sum << "\nThe biggest and smallest value is: " << biggest << " " << smallest << "\nThe total number of value inserted is: " << i << endl;
	
	sort(values);
	for (double x : values) cout << x << " ";

}

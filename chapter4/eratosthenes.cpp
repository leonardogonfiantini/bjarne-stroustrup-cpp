#include "../std_lib_facilities.h"

int main() {
	
	cout << "Insert the range: ";
	int range; cin >> range;

	bool A[range];
	for (int i = 0; i < range; i++) A[i] = true;
	
	for (int i = 2; i < sqrt(range); i++) {
		if (A[i]) {
			for (int j = pow(i, 2); j < range; j += i) A[j] = false; 
		}
	}

	for (int i = 0; i < range; i++) {
		if (A[i]) cout << i << " ";
	}
}

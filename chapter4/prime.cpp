#include "../std_lib_facilities.h"


int main() {

	vector<int> primes = {1};
	int max = 100000;

	for (int i = 2; i < max; i++) {
		
		bool div = true;
		for (int x : primes) {
			if (x != 1 && (i % x) == 0) {
				div = false;
				break;
			}
		}

		if (div) primes.push_back(i);
	}

	for (int x : primes) cout << x << " ";

	


}


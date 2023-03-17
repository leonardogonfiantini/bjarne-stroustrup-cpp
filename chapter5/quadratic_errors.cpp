#include "../std_lib_facilities.h"




vector<double> quadratic(double a, double b, double c) {

    double check = pow(b,2) - (4*a*c);
    if (check < 0) {
        error("Delta is negative, no real square root");
    }

    vector<double> results;

    double dem = 2*a;
    double delta = sqrt(check);

    double res1 = ((-b) + delta) / dem;
    double res2 = ((-b) - delta) / dem;

    results.push_back(res1);
    results.push_back(res2);

    return results;
}



int main() {

    cout << "Insert a, b, c: ";
    double a, b, c; cin >> a >> b >> c;
    cout << endl;

    try {
        vector<double> res = quadratic(a, b, c);
        
        cout << "The results are: ";
        for (double x : res) {
            cout << x << " ";
        }
        cout << endl;
    } catch(exception& e) {
        cout << e.what() << endl;
    }

    
}
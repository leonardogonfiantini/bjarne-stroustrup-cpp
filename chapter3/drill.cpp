#include "../std_lib_facilities.h"

int main() {
	
	cout << "Enter your first name\n";
	string fn; cin >> fn;
	cout << "Enter your second name\n";
	string sn; cin >> sn;
	
	cout << "Hello, " << fn << " " << sn << "\nHow are you? i'm fine" << endl;
	
	string friend_name = "Andrea";
	cout << "Have you seen " << friend_name << " lately?" << endl;
	
	cout << "Enter the sex of the friend m/f: ";
	char sex; cin >> sex;

	if (sex == 'm') cout << "If you see " << friend_name << " please ask him to call me" << endl;
	else cout << "If you see " << friend_name << " please ask her to call me" << endl;
	
	cout << "Enter the age of the recipient:";
	int age; cin >> age;
	if (age > 110) simple_error("You are kidding me?!");
	cout << "I hear you just had a birthday and you are " << age << " years old" << endl;
	
	if (age < 12) cout << "Next year you will have " << age+1 << endl;
	if (age == 17) cout << "Next year you will be able to vote" << endl;
	if (age > 70) cout << "I hope you are enjoying retirement" << endl;

	cout << "Yours sincerly \n\n Leonardo" << endl;
		
	
		
	
		
	
	
}

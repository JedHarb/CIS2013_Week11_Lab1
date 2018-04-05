#include<iostream>
#include<cstring>
using namespace std;

struct myDate {
	int day;
	int month;
	int year;
};

void printmyDate(myDate d) {
	cout << d.month << "/" << d.day << "/" << d.year;
}

int main() {
	myDate bob_bday;
	myDate tom_bday;

	cout << "Enter Bobs bday day: ";
	cin >> bob_bday.day;

	cout << "Enter Bobs bday month: ";
	cin >> bob_bday.month;

	cout << "Enter Bobs bday year: ";
	cin >> bob_bday.year;

	cout << "Bob's birthday is ";
	printmyDate(bob_bday);

	char cont = 'y';
	cin >> cont;
	return 0;
}

class birthDate {
public:
	int year;
	int month;
	int day;
};



int main2() {
	birthDate bob;

	return 0;
}
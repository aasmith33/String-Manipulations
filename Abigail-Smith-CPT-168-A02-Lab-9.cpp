// Abigail-Smith-CPT-168-A02-Lab-9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
void reverse_String(string& fullname, int n, int i) {

	if (n <= i) { return; }

	swap(fullname[i], fullname[n]);
	reverse_String(fullname, n - 1, i + 1);

}

int main()
{
	system("color f0");
	cout << "\t\t\t***************************\t\t" << endl;
	cout << "\t\t\t*      Abigail Smith      *\t\t" << endl;
	cout << "\t\t\t*      CPT-168-A02S       *\t\t" << endl;
	cout << "\t\t\t*   String Manipulations  *\t\t" << endl;
	cout << "\t\t\t***************************\t\t" << endl << endl;
	
	string fname = "", lname = "", fullname = "";
	string phone = "";
	string ssn = "";
	char res = ' ';

	do {
		cout << "Enter your first name: ";
		cin >> fname;
		cout << "Enter your last name: ";
		cin >> lname;
		fullname = fname + " " + lname;

		cout << "Enter 10 digit phone number (with no dashes or parathesis): ";
		cin >> phone;
		if (phone.length() != 10)
		{
			cout << "Enter 10 digit phone number (with no dashes or parathesis): ";
			cin >> phone;
		}
			
		cout << "Enter 9 digit SSN (with no dashes): ";
		cin >> ssn;
		if (ssn.length() != 9)
		{
			cout << "Enter 9 digit SSN (with no dashes): ";
			cin >> ssn;
		}

		cout << endl;
		cout << "Your full name is: ";
		cout << fullname << endl;
		reverse_String(fullname, fullname.length() - 1, 0);
		cout << "Your reversed full name is: " << fullname << endl;
		cout << "Your phone number: ";
		phone.insert(0, "(");
		phone.insert(4, ")");
		phone.insert(8, "-"); 
		cout << phone << endl;
		cout << "Your Social Security Number: ";
		ssn.insert(3, "-");
		ssn.insert(6, "-");
		cout << ssn << endl << endl;
		cout << "Would you like to try another set of phone and ssn (Y or N)? ";
		cin >> res;
		cout << endl;
	} 	while (toupper(res) == 'Y');
	cout << endl << "\t\tT H A N K  Y O U" << endl << endl;
	system("pause");
	return 0;
}

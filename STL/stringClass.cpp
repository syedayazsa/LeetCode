#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//STRING CLASS
	string s1;
	string s2("Hello");
	string s3 = "Hello World!";

	string s4(s3);
	string s5 = s3;

	//from character array;
	char a[] = {'a', 'y', 'a', 'z', '\0'};
	string s6(a);

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;
	cout << s6 << endl;


	if (s1.empty())
		cout << "S1 is empty" << endl;

	//Append
	cout << s1.append("I love c++");
	s1 += " and Python.";

	cout << endl << "-------------------------" << endl << s1 << endl;


	//Clearing the string

	cout << "The length of the string s1 is " << s1.length() <<  endl;
	s1.clear();
	cout << "The length is the string s1 after clearing is " << s1.length() << endl;

	//comparing strings
	string s0 = "Apple";
	s1 = "Mango";

	cout << s0.compare(s1) << endl;

	//overloaded operator
	if (s0 > s1)
	{
		cout << "Mango is lexiographically greater than apple" << endl;
	}
	else
		cout << "Apple is lexiographically greater than apple" <<  endl;

	//finding substring
	string s = "I want apple juice";
	int index = s.find("apple");
	cout << index << endl;

	//remove word from string
	string word = "apple";
	int len = word.length();
	s.erase(index, len + 1);
	cout << s << endl;

	//iterate over the string
	for (int i = 0; i < s.length(); i++)
		cout << s[i] << ":";
	cout <<  endl;

	//using iterators
	for (string::iterator it = s.begin(); it != s.end(); it++)
		cout << *it << ":";
	cout << endl;

	//for each loop
	for (auto c : s)
		cout << c;
	cout << endl;
}
#include<iostream>
#include<string>
using namespace std;

string removeDuplicates(string my_string, int n) {
	string result;
	result += my_string[0];
	for (int i = 1; i < my_string.size(); ++i) {
		if (my_string[i] != my_string[i - 1]) {
			result += my_string[i];
		}
	}
	return result;
}


int main() {

	string test = "ww";
		test.find('w');
	return 0;
}

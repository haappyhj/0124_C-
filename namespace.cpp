#include<iostream>

using namespace std;


namespace NamespaceA {
	void display() {
		cout << "inside a" << endl;
	}
	int value = 50;
}

namespace NamespaceB{
	void display() {
	cout << "inside b" << endl;
}
double value = 3.14;
}

int main() {
	NamespaceA::display();
	cout << "inside a" << NamespaceA::value<< endl;

	NamespaceB::display();
	cout << "inside b" << NamespaceB::value << endl;

	return 0;
}

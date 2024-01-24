#include<iostream>

using namespace std;

int add(int a, int b) {

	return a + b;

}

double add(double a, double b) {

	return a + b;

}

int sum(int a, int b=0, int c = 0) {
	return a + b + c;
}

int main() {
	int res = sum(5);
	cout << res << endl;
}
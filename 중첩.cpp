#include<iostream>

using namespace std;
using namespace OtherNamespace;
namespace OtherNamespace {
	int overValue = 20;

	namespace InnerNamespace {
		int innerValue = 30;
	}

}

int main() {

	cout << overValue << endl;

}
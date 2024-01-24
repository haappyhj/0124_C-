#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	string model;
	string company;
	int gassolin;
	int fuel_efficiency;
	int seater;

public:

	//생성자 함수
	Car(string m,string c,int g, int f, int s) {
		this->model = m;
		this->company = c;
		this->gassolin = g;
		this->fuel_efficiency = f;
		this->seater = s;

	}
		void introduce() {
			cout << "모델명은 " << this->model << endl;
			cout << "회사는 " << this->company << endl;
			cout << "남은 연료는 " << this->gassolin << endl;
			cout << "연비는 " << this->fuel_efficiency << endl;
			cout << "좌석 수는 " << this->seater << endl;

	}

		void drive(int distance) {
			if (this->gassolin - distance/ this->fuel_efficiency < 0) {
				cout << "움직일 수가 없음 " << endl;

			}
			else {
				this->gassolin -= distance / this->fuel_efficiency;
				cout << "부릉부릉 달려 " << endl;
			}
		}
		
};

int main() {
	Car a("k5", "kia", 100, 10, 4);
	Car b("벤츠", "메데스", 80, 9, 4);

	a.introduce();
	a.drive(1);

	b.introduce();
	b.drive(2);
}
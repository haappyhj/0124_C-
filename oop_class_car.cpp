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

	//������ �Լ�
	Car(string m,string c,int g, int f, int s) {
		this->model = m;
		this->company = c;
		this->gassolin = g;
		this->fuel_efficiency = f;
		this->seater = s;

	}
		void introduce() {
			cout << "�𵨸��� " << this->model << endl;
			cout << "ȸ��� " << this->company << endl;
			cout << "���� ����� " << this->gassolin << endl;
			cout << "����� " << this->fuel_efficiency << endl;
			cout << "�¼� ���� " << this->seater << endl;

	}

		void drive(int distance) {
			if (this->gassolin - distance/ this->fuel_efficiency < 0) {
				cout << "������ ���� ���� " << endl;

			}
			else {
				this->gassolin -= distance / this->fuel_efficiency;
				cout << "�θ��θ� �޷� " << endl;
			}
		}
		
};

int main() {
	Car a("k5", "kia", 100, 10, 4);
	Car b("����", "�޵���", 80, 9, 4);

	a.introduce();
	a.drive(1);

	b.introduce();
	b.drive(2);
}
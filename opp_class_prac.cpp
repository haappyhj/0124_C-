//�Լ�+ ���� ������
#include<iostream>
#include<string>
using namespace std;

class Slime {
private:
	string state = "alive";
	int hp = 100;
	int attack = 10;
public:
	void showHp() {
		cout << "������ ü��:" << this->hp << endl;
		cout << "������ ����:" << this->state << endl;
	}
	void getDamage(int damage) {
		if (this->hp - damage < 0) {
			this->hp = 0;
			this->state == "dead";
		}
		else {
			this->hp -= damage;
			if (this->hp == 0) {
				this->state == "dead";
			}
		}


	}
};

int main() {
	Slime a;

	while (1) {
		cout << "������ �Է�:";
		int damage;
		cin >> damage;
		a.getDamage(damage);
		a.showHp();
	}
}
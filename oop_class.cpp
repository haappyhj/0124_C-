#include<iostream>
#include<string>
using namespace std;


typedef struct SoccerPlayer {
	char name[50];
	int number;
}SoccerPlayer;

//������� + ��� �Լ�= Ŭ����
// ���������� �߰�


class Dog {

public: //��� ����
	string name;
	string breed;
	string color;
	double weight;

	//��� �Լ�
	void eating() {
		cout << "�ȳ�" << endl;
	}

	void varking() {
		cout << "�۸�" << endl;
	}
};
typedef struct Surgery {
	string date;
	string name;
	string duration;
}Surgery;

//�꺸�� Ŭ����
class Dog {
public:
	int age;
	string name;
	string breed;
	string gender;
	Surgery surgery[10];
	char size;

	void addSurgery() {
	}
	void changeGender(){}
	void changeSize(){}
};

class Dog {
public:
	int hp;
	int energy;
	int love;
	string state;
	string name;
	void takeWalking() {
	}
	void eating(){}
	void sleeping(){}
};
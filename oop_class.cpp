#include<iostream>
#include<string>
using namespace std;


typedef struct SoccerPlayer {
	char name[50];
	int number;
}SoccerPlayer;

//¸â¹öº¯¼ö + ¸â¹ö ÇÔ¼ö= Å¬·¡½º
// Á¢±ÙÁ¦¾îÀÚ Ãß°¡


class Dog {

public: //¸â¹ö º¯¼ö
	string name;
	string breed;
	string color;
	double weight;

	//¸â¹ö ÇÔ¼ö
	void eating() {
		cout << "³È³È" << endl;
	}

	void varking() {
		cout << "¸Û¸Û" << endl;
	}
};
typedef struct Surgery {
	string date;
	string name;
	string duration;
}Surgery;

//Æêº¸Çè Å¬·¡½º
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
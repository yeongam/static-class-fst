#include<iostream>
using namespace std;
class Person {
public:
	int money;
	void addMoney(int money) { this->money += money;}
	static int sharedMoney;
	static void addShared(int n) { sharedMoney += n; }
};
int Person::sharedMoney = 10;
int main() {
	Person kim;
	kim.money = 100;
	kim.sharedMoney = 200;
	Person lee;
	lee.money = 100;
	lee.addMoney(200);
	lee.addShared(200);
	cout << kim.money << ' ' << lee.money << endl;
	cout << kim.sharedMoney << ' ' << lee.sharedMoney << endl;
}
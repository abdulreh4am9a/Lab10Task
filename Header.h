#include <iostream>
using namespace std;
class runner {
	int hrs, speed;
public:
	runner();
	runner(int hour);
	runner(int hour, int s);
	void sethrs(int hour);
	void setspeed(int s);
	int totaldistance();
	runner& operator++();
	friend runner  operator +(runner a, runner b);
	runner& operator+(int a);
	void display() {
		cout << "Hours: " << hrs << endl << "Speed: " << speed << endl;
	}
};
#include"Header.h"
runner::runner() {
	hrs = NULL;
	speed = NULL;
}
runner::runner(int hour) {
	hrs = hour;
	speed = NULL;
}
runner::runner(int hour, int s) {
	hrs = hour;
	speed = s;
}
void runner::sethrs(int hour) {
	hrs = hour;
}
void runner::setspeed(int s) {
	speed = s;
}
int runner::totaldistance() {
	return (hrs * speed);
}
runner& runner::operator++() {
	runner temp(hrs++, speed++);
	return temp;
}
runner operator +(runner a, runner b) {
	runner temp(a.hrs + b.hrs, a.speed + b.speed);
	return temp;
}
runner& runner::operator+(int a) {
	runner temp(hrs + a, speed + a);
	return temp;
}
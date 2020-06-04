#include "Header.h"
int main() {
	runner obj1(30); //calling one parameter constructor
	cout << "Callling One Parameter Constructor" << endl;
	obj1.display();
	runner obj2(40, 50); //calling two parameter constructor
	cout << "Callling Two Parameter Constructor" << endl;
	obj2.display();
	obj1.setspeed(20); //calling setter function
	cout << "Callling Setter Function" << endl;
	obj1.display();
	cout << "Total Distance: " << obj2.totaldistance() << endl;
	cout << "Increamenting value" << endl;
	cout << "Before Increament" << endl;
	obj1.display();
	++obj1;
	cout << "After Increament" << endl;
	obj1.display();
	runner obj3 = obj1 + obj2;
	cout << "Addition of objects" << endl;
	obj3.display();
	obj3 = obj3 + 10;
	cout << "Adding integer value to an object" << endl;
	obj3.display();
	return 0;
}
#include<iostream>
using namespace std;

class student {

public:
	string name;
	int age;
	int no;

	void tellname() {
		cout << "my name is: " << name << endl;
	}

};

		int main() {
		student student1;
		student1.name = "faruk";
		student1.tellname();

	}

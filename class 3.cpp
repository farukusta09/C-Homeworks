#include<iostream>
using namespace std;

class student {
private:
	string name;
public:
	void setname(string name) {
		this->name = name;
	}

	string getname() {
		return name;
	}


};







int main() {

	student student1;
	student1.setname("faruk");
	cout<<student1.getname();

}

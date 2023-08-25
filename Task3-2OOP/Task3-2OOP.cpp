#include <iostream>
using namespace std;
//Create class Computer which contains :
//-id(int)
//- Default & parameterized constructors
//- virtual void shortForm() = 0;
//-virtual void famousFor() = 0;
class Computer {
private:
	int id;
public:
	Computer() { id = 0; }
	Computer(int i) { id = i; }
	virtual void shortForm() = 0;
	virtual void famousFor() = 0;
};
//-Create class Laptop which inherits from Computer and override all methods
//-Create class Desktop Laptop which inherits from Computer and override all methods
//- Create class supercomputer which inherits from Computer and override all methods
/*
laptop is LP
It is Famous for its Portability
---------------------
Desktop is DK
It is famous for its Flexibility
---------------------
SuperComputer is SC
It is Famous for its Speed
*/
class Laptop : public Computer {
public:
	Laptop(int i) :Computer(i) {}
	void shortForm() override{ cout << "laptop is LP" << endl; }
	void famousFor() override{
		cout << "It is Famous for its Portability" << endl;
	}
};
class Desktop : public Computer {
public:
	Desktop(int i):Computer(i) {}
	void shortForm() override { cout << "Desktop is DK" << endl; }
	void famousFor() override {
		cout << "It is famous for its Flexibility" << endl;
	}
};
class supercomputer : public Computer {
public:
	supercomputer(int i) :Computer(i) {}
	void shortForm() override { cout << "SuperComputer is SC" << endl; }
	void famousFor() override {
		cout << "It is Famous for its Speed" << endl;
	}
};
int main()
{
	Computer* c[] = {
	new Laptop(0),
	new Desktop(1),
	new supercomputer(2)
	};

	for (int i = 0; i < 3; i++)
	{
		c[i]->shortForm();
		c[i]->famousFor();
	}
	//delete c;
}
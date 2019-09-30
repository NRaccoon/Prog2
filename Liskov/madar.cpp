#include <iostream>
using namespace std;

class Madar{
public:
	void repul(){
	cout << "Repul" << endl;
	}
};

class Program{
public:
	void reptet(Madar &madar){
	madar.repul();
	}
};

class Sas : public Madar{};

class Pingvin : public Madar{};

int main(){

	Program program;
	Madar madar;
	program.reptet(madar);

	Sas sas;
	program.reptet(sas);

	Pingvin pingvin;
	program.reptet(pingvin);
}

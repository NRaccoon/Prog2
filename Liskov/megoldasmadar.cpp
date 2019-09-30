#include <iostream>
using namespace std;

class Madar{};

class RepuloMadar : public Madar{
public:
	virtual void repul(){
	cout << "Repul" << endl;
	}
};

class Program{
public:
	void reptet(RepuloMadar& rmadar){
	rmadar.repul();
	}
};

class Sas : public RepuloMadar{};

class Pingvin : public Madar{};

int main(){

	Program program;

	Sas sas;
	program.reptet(sas);

	Pingvin pingvin;
	program.reptet(pingvin); //enélkül a sor nélkül lefordul és fut a program
}

#include <iostream>
using namespace std;

	class Szulo{
	public:
	 void kiir1(){
		cout << "Szulo" << endl;
		}
	};

	class Gyerek : public Szulo{
	public:
	 void kiir2(){
		cout << "Gyerek" << endl;
		}
	};

int main(){
	
	Szulo* sz = new Gyerek();

	sz->kiir1();
	sz->kiir2();

}

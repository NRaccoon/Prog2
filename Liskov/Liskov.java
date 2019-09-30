class Liskov{

public static void main (String[] args){

	Program program = new Program();
	Madar madar = new Madar();
	program.reptet(madar);

	Sas sas = new Sas();
	program.reptet(sas);

	Pingvin pingvin = new Pingvin();
	program.reptet(pingvin);
	}
}

class Madar{
public
	void repul(){
	System.out.println("repul");
	}
}

class Program{
public
	void reptet(Madar madar){
	madar.repul();
	}
}

class Sas extends Madar{}

class Pingvin extends Madar{}

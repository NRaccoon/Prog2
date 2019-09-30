public class Osztaly{

	public static void main(String[] args){
	Szulo sz = new Gyerek();
	sz.kiir1();
	sz.kiir2();
	}
}

	class Szulo{
	public void kiir1(){
		System.out.println("Szulo");
		}
	}

	class Gyerek extends Szulo{
	public void kiir2(){
		System.out.println("Gyerek");
		}
	}

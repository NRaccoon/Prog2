package binfa;

import java.io.FileNotFoundException;
import java.io.IOException;

public aspect order {

	int melyseg = 0;

	public pointcut travel(LZWBinFa.Csomopont elem, java.io.PrintWriter os) 
		: call(public void LZWBinFa.kiir(LZWBinFa.Csomopont, java.io.PrintWriter)) && args(elem,os);

	after(LZWBinFa.Csomopont elem, java.io.PrintWriter os) throws IOException : travel(elem, os)
	{

		java.io.PrintWriter kiPre = new java.io.PrintWriter(
				new java.io.BufferedWriter(new java.io.FileWriter("preorder.txt")));

		melyseg = 0;
		preorder(elem, kiPre);

		kiPre.close();
	}

	public void preorder(LZWBinFa.Csomopont elem, java.io.PrintWriter p) {
		if (elem != null) {
			++melyseg;
			for (int i = 0; i < melyseg; ++i) {
				p.print("---");
			}
			p.print(elem.getBetu());
			p.print("(");
			p.print(melyseg - 1);
			p.println(")");
			preorder(elem.egyesGyermek(), p);
			preorder(elem.nullasGyermek(), p);

			--melyseg;
		}
	}

}

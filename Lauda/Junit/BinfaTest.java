public class BinfaTest {
	LZWBinFa binfa = new LZWBinFa();

	@org.junit.Test

	public void tesBitFeldolg() {
		for (char c : "01111001001001000111".toCharArray()) 
		{
			binfa.egyBitFeldolg(c);
		}
		org.junit.Assert.assertEquals(4, binfa.getMelyseg(), 0.0);
		org.junit.Assert.assertEquals(2.75, binfa.getAtlag(), 0.001);
		org.junit.Assert.assertEquals(0.957427, binfa.getSzoras(), 0.0001);
	}
}
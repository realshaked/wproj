package fobos1;

public class TestaCasa {
	public static void main(String [] args) {
		Casa a = new Casa();
		Casa b = new Casa();
		a.cor = "verde";
		a.numero = 36;
		b.cor = "rosinha";
		b.numero = 71;
		System.out.println("A casa de numero" + " " + a.numero + " " + "tem cor" + " " + a.cor);
		System.out.println("A casa de numero" + " " + b.numero + " " + "tem cor" + " " + b.cor);
	}

}


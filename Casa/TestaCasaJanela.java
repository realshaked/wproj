package fobos1;

public class TestaCasaJanela {
	public static void main(String [] args) {
		Janela d = new Janela();
		Casa c = new Casa();
		d.cor = "rosinha";
		d.material = "argamassa";
		c.cor = "verde";
		c.numero = 3;
		c.janela = d;
		System.out.println("a casa de numero" + " " + c.numero + " " + "tem a cor" + " " + c.cor + " " + "e a janela" + " " + c.janela);
		System.out.println("a janela de cor" + " " + d.cor + " e feita do material" + " " + d.material);
	}

}


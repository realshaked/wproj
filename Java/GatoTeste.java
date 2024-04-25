package Pack1;

public class GatoTeste {

	public static void main(String[] args) {
		Gato x = new Gato();
		Gato y = new Gato();
		Gato z = new Gato();
		x.vivo = true;
		x.cor = "branco";
		x.idade = 3;
		x.nome = "Raimundo";
		y.vivo = false;
		y.cor = "verde";
		y.idade = 2;
		y.nome = "Philipe";
		z.vivo = true;
		z.cor = "rosa";
		z.idade = 5;
		z.nome = "Obama";
		System.out.println("Gato: " + x.nome + " cor: " + x.cor + " idade: " + x.idade + " vivo: " + x.vivo);
		System.out.println("Gato: " + y.nome + " cor: " + y.cor + " idade: " + y.idade + " vivo: " + y.vivo);
		System.out.println("Gato: " + z.nome + " cor: " + z.cor + " idade: " + z.idade + " vivo: " + z.vivo);
	}

}

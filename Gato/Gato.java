package fobos1;

public class GatoTeste {
	public static void main(String [] args) {
		Gato p = new Gato();
		Gato j = new Gato();
		Gato l = new Gato();
		p.vivo = true;
		p.cor = "rosa choque";
		p.idade = 300;
		p.nome = "phobos";
		j.vivo = false;
		j.cor = "rosa bebe";
		j.idade = 69420;
		j.nome = "jve";
		l.vivo = true;
		l.cor = "rosinha";
		l.idade = 6969;
		l.nome = "lcs";
		System.out.println("nome do gato=" + p.nome + "\tgato esta vivo?=" + p.vivo + "\tidade=" + p.idade + "\tcor=" + p.cor + "\n");
		System.out.println("nome do gato=" + j.nome + "\tgato esta vivo?=" + j.vivo + "\tidade=" + j.idade + "\tcor=" + j.cor + "\n");
		System.out.println("nome do gato=" + l.nome + "\tgato esta vivo?=" + l.vivo + "\tidade=" + l.idade + "\tcor=" + l.cor + "\n");
	}

}


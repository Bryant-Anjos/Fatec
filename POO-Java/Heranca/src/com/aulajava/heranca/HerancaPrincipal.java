package com.aulajava.heranca;

public class HerancaPrincipal
{

	public static void main(String[] args)
	{
		Passaro passaro = new Passaro();
		passaro.correr();
		
		passaro.setCor("Amarelo");
		passaro.voar();
		
		System.out.println(passaro.getCor());
		
		Cao cao = new Cao();
		cao.latir();
	}

}

package com.aulajava.heranca;

public class Passaro extends Animal
{
	public void voar()
	{
		System.out.println("Voar");
	}
	
	public void correr()
	{
		super.correr();
		System.out.println("Correr como Pássaro");
	}
}

package com.projeto.classes;

public class ClassePrincipal
{

	public static void main(String[] args)
	{
		Home minhaCasa = new Home();
		minhaCasa.color = "Laranja";
		
		System.out.println(minhaCasa.color);
		
		minhaCasa.abrirGaragem();
	}

}

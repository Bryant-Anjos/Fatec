package com.aulajava.heranca;

public class Animal
{
	private String tamanho;
	private double peso;
	private String cor;
	
	public void correr()
	{
		System.out.println("Correr como animal");
	}
	
	//	getter and setter
	public void setCor(String cor)
	{
		this.cor = cor;		
	}
	
	public String getCor()
	{
		return this.cor;
	}
}

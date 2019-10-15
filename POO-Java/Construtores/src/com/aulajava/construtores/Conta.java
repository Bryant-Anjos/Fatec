package com.aulajava.construtores;

public class Conta
{
	private int numeroConta;
	private double saldo;
	
	public Conta(int nConta)
	{
		//	Inicializar a conta
		this.numeroConta = nConta;
	}
	
	public void imprime()
	{
		System.out.println(this.numeroConta);
	}
}

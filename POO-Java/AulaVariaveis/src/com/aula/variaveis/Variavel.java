package com.aula.variaveis;

public class Variavel
{
	
	//	Variáveis: a capacidade de armazenamento de cada um dos tipos é diferente.
	
	//	byte: é capaz de armazenar valores entre -128 até 127.
	//	short: é capaz de armazenar valores entre – 32768 até 32767.
	//	int: é capaz de armazenar valores entre –2147483648 até 2147483647.
	//	long: é capaz de armazenar valores entre –9223372036854775808 até 9223372036854775807.
	
	//	float: é capaz de armazenar valores entre 3.4e–038 até 3.4e+038
	//	double: é capaz de armazenar valores entre 1 .7e–308 até 1.7e+308
	
	//	boolean - valores booleanos - true / false
	
	//	String - "café", "escola", "Jamilton Damasceno"

	public static void main(String[] args)
	{
		byte variavelByte = 15;
		int variavelInt = 1000000;
		long variavelLong = 100000000;
		
		float variavelFloat = 1.666f;
		double variavelDouble = 1.25255844;
		
		boolean variavelBoolean  = false;
		
		String variavelString = "Óculos de Sol";
			
		System.out.println(variavelByte);
		System.out.println(variavelInt);
		System.out.println(variavelLong);
		System.out.println(variavelFloat);
		System.out.println(variavelDouble);
		System.out.println(variavelBoolean);
		System.out.println(variavelString);
		System.out.println("\nConcatenar: " + variavelByte + " " + variavelBoolean);

	}

}

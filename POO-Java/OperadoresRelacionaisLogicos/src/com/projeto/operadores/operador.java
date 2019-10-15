package com.projeto.operadores;

public class operador
{

	public static void main(String[] args)
	{
		boolean a, b, c, d, e, f;
		boolean x, y;
		int num1 = 5, num2 = 5;
		
		a = num1 == num2;
		b = num1 != num2;
		c = num1 > num2;
		d = num1 < num2;
		e = num1 >= num2;
		f = num1 <= num2;
		
		x = f && a;
		y = c || d;
		
		System.out.println(num1 + " é igual a " + num2 + "? " + a);
		System.out.println("\n" + num1 + " é diferente de " + num2 + "? " + b);
		System.out.println("\n" + num1 + " é maior que " + num2 + "? " + c);
		System.out.println("\n" + num1 + " é menor que " + num2 + "? " + d);
		System.out.println("\n" + num1 + " é maior ou igual que " + num2 + "? " + e);
		System.out.println("\n" + num1 + " é menor ou igual  que " + num2 + "? " + f);
		System.out.println("\n" + x);
		System.out.println("\n" + y);

	}

}

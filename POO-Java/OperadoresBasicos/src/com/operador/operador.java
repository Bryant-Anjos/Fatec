package com.operador;

public class operador {

	public static void main(String[] args) {
		
		int numero1 = 10, numero2 = 3, soma = 0, menos = 0, vezes = 0, dividir = 0, mod = 0;
				
		soma = numero1 + numero2;
		menos = numero1 - numero2;
		vezes = numero1 * numero2;
		dividir = numero1 / numero2;
		mod = numero1 % numero2;
		
		System.out.println("Soma: " + soma + "\nSubtração: " + menos + "\nMultiplicação: " + vezes + "\nDivisão: " + dividir + "\nMOD: " + mod);

	}

}

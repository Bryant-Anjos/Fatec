#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int interface() { // Interface para navegação no programa
    // Informações para o usuário
    printf("--------MENU DE SELECAO--------\n");
    printf("Escolha uma das opcoes: \n\n");
    printf("1: Funcoes Matematicas como Potencia, Raiz Quadrada, Arredondamentos\n");
    printf("2: Mostra o Maior Valor de Dois Numeros\n");
    printf("3: Converte o Horario para Segundos\n");
    printf("4: Converte Minutos em Horas e Minutos\n");
    printf("5: Passagem de Parametros por Funcoes e Procedimentos\n");
    printf("Outro valor: Finaliza o programa\n\n");

    int opcao; // Declaração da variável opção do tipo inteiro
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &opcao); // Variavel opcao recebe o valor digitado
    system("cls"); // Limpa a tela após a escolha do usuário
    return opcao; // Retorna um valor inteiro escolhido pelo usuário
}

void math() { // Procedimento para o usuário realizar operações matemáticas
    // Interface do procedimento math
    printf("-----OPERACOES MATEMATICAS-----\n");
    printf("Qual operacao matematica voce deseja?\n\n");
    printf("1: Potenciacao\n");
    printf("2: Radiciacao\n");
    printf("3: Arredondar para baixo\n");
    printf("Outro valor: Nenhuma\n\n");

    int opcao; // Declaração da variável opção do tipo inteiro
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &opcao); // Variavel opcao recebe o valor digitado
    system("cls"); // Limpa a tela após a escolha do usuário

    double valor1; // Declaração da variável para recebr valores dos cálculos matemáticos

    printf("-----OPERACOES MATEMATICAS-----\n");
    switch(opcao) { // Usa o valor digitado pelo usuário para decidir qual operação fazer
        // Operação de Potência
        case 1: printf("Potenciacao\n");
        double potencia; // Variável da potência que o número escolhido será elevado
        printf("Digite o numero que voce gostaria de elevar: ");
        scanf("%lf", &valor1); // Recebe o número a ser elevado
        printf("A qual base voce gostaria de elevar o numero %.2lf?: ", valor1);
        scanf("%lf", &potencia); // Recebe a potência que o número será elevado
        printf("O resultado de %.2lf^%.2lf e igual a %.2lf\n", valor1, potencia, pow(valor1, potencia)); // Escreve o resultado da potência
        break;
        // Operação de Raiz Quadrada
        case 2: printf("Radiciacao\n");
        printf("Digite o numero que voce gostaria de descobrir a raiz quadrada: ");
        scanf("%lf", &valor1); // Recebe o número para ser usado na conta
        printf("A raiz quadrada de %.2lf e igual a %.2lf\n", valor1, sqrt(valor1)); // Escreve a raíz quadrada do número digitado pelo usuário
        break;
        // Operação para arredondar números quebrados para baixo
        case 3: printf("Arredondar numero\n");
        double decimal;
        printf("Digite o numero que voce gostaria de arredondar: ");
        scanf("%lf", &valor1); // Recebe o número a ser arredondado
        decimal = valor1 - floor(valor1);
        if (fabs(decimal) >= 0.5){
            printf("O arredondamento do numero %.2lf e %.2lf\n", valor1, ceil(valor1)); // Escreve o valor digitado pelo usuário arredondado para baixo
        } else {
            printf("O arredondamento do numero %.2lf e %.2lf\n", valor1, floor(valor1)); // Escreve o valor digitado pelo usuário arredondado para baixo
        }
        break;
    }
    printf("-------------------------------\n\n");
}

void maior(int num1, int num2) { // Procedimento para retornar o maior número entre dois
    if (num1 >= num2) { // Verificação se o primeiro número é maior ou igual ao segundo
        printf("O maior numero entre %d e %d e: %d", num1, num2, num1); // Caso o maior número seja o primeiro, será escrito isso
    } else {
        printf("O maior numero entre %d e %d e: %d", num1, num2, num2); // Caso o maior número seja o segundo, será escrito isso
    }
    if (num1 == num2) { // Verifica se os dois números são iguais
        printf(". E os dois numeros sao iguais"); // Se os dois números são iguais escreve isso
    }
    printf("\n-------------------------------\n\n");
}

int second(int horas, int minutos, int segundos) { // Função que recebe 3 valores inteiros como parâmetro
    return horas * 3600 + minutos * 60 + segundos; // Calcula os três valores convertendo em segundo e retorna para a função
}

void hour(int min) {  // Função que recebe um número inteiro entre 0 e 1339
    int horas = min/60; // Converte o valor recebido para horas e atribui a variável
    int minutos = min%60; // Mod para descobrir os minutos que não formam uma hora completa
    printf("%d minutos em horas e minutos e %.2d:%.2d h\n", min, horas, minutos);
}

void valida(int escolha) { // Procedimento para validar os valores das opções 3 e 4
    int min, hor, seg, valido = 0; // Variável valido recebe 1 para executar o while

    switch(escolha) { // Escolhe qual processo seguir dependendo do valor recebido
        case 3:
            printf("------HORAS PARA SEGUNDOS------\n");
            // while faz a verificação se os números recebidos nas variáveis são válidos para o formato de horário
            while(valido == 0) {
                printf("Digite a hora desejada: ");
                scanf("%d", &hor);
                if (hor >= 0 && hor <= 23) { // If para só aceitar valores entre 0 e 23
                    valido = 1; // Variável recebe 1 para executar o próximo while
                } else {
                    printf("\nValor invalido. Por favor, digite um numero entre 0 e 23\n");
                }
            }
            while(valido == 1) {
                printf("\nDigite o minuto desejado: ");
                scanf("%d", &min);
                if (min >= 0 && min <= 59) { // If para só aceitar valores entre 0 e 59
                    valido = 2; // Variável recebe 2 para executar o próximo while
                } else {
                    printf("\nValor invalido. Por favor, digite um numero entre 0 e 59\n");
                }
            }
            while(valido == 2) {
                printf("\nDigite os segundos desejados: ");
                scanf("%d", &seg);
                if (seg >= 0 && seg <= 59) { // If para só aceitar valores entre 0 e 59
                    valido = 3; // Variável recebe 3 para finalizar o while
                } else {
                    printf("\nValor invalido. Por favor, digite um numero entre 0 e 59\n");
                }
        }
        // Chama a função second() e exibe na tela o resultado da conversão
        printf("%2d:%2d:%2d em segundos e %d segundos\n", hor, min, seg, second(hor, min, seg));
        printf("-------------------------------\n\n");
        break; // Finaliza os processos do primeiro case

        case 4:
            printf("-------MINUTOS PARA HORAS------\n");
            while(valido == 0) {
                printf("Digite a quantidade de minutos desejada (entre 0 e 1339): ");
                scanf("%d", &min);
                if (min >= 0 && min <= 1339) { // If para só aceitar valores entre 0 e 1339
                    hour(min); // Chama o procedimento hour() e usa como parâmetro o valor digitado pelo usuário
                    valido = 1; // Se o if foi executado a variável recebe 1 para finalizar o while
                } else {
                    printf("\nValor invalido. Por favor, digite um numero entre 0 e 1339\n");
                }
        printf("-------------------------------\n\n");
        }
        break;
    }
}

int procA(int valor) { // Função para receber um valor por cópia
    return ++valor; // Retorna o valor do parâmetro com um pré incremento
}

int procB(int* valor) { // Função para receber um valor por simulação de referência
    int* x = valor; // Variável declarada recebe o ponteiro do do parâmetro
    return ++*x; // Retorna o pré incremento do valor no endereço do ponteiro
}

int main()
{
    int escolha = 1; // Declaração da variável com valor 1 resultando num valor verdadeiro no while
    int num1, num2; // Variaveis a serem usadas no switch case 2
    int valor; // Variável a ser usada no switch case 5
    while (escolha >= 1 && escolha <= 5) { // Enquanto o while é verdadeiro o programa continua executando
        escolha = interface(); // Executa a função Interface ao mesmo tempo que recebe o valor retornado por ela

        switch (escolha) { // Recebe o valor da variável escolha para se tomar uma decisão
            case 1: math(); break; // Chama o procedimento math()
            case 2:
                printf("----------MAIOR NUMERO---------\n");
                printf("Digite o numero 01: ");
                scanf("%d", &num1);
                printf("Digite o numero 02: ");
                scanf("%d", &num2);
                maior(num1, num2); // Utiliza os valores digitados pelos usuários como parâmetros do procedimento maior()
                break;
            case 3: valida(3); break; // Chama o procedimento valida para que será utilizado para a função second()
            case 4: valida(4); break; // Chama o procedimento valida para que será utilizado para o procedimento hour()
            case 5: // Conjunto de passos para receber um valor e enviar para duas funções e escrever todos os passos
                printf("---------ProcA e ProcB--------\n");
                printf("Digite um parametro inteiro para ser passado por copia e por simulacao de referencia: ");
                scanf("%d", &valor);
                printf("\no valor digitado foi: %d\n\n", valor);
                printf("Valor retornado pela funcao de passagem por copia: %d\n\n", procA(valor)); // Executa o procedimento procA() e escreve o valor retornado
                printf("O valor que foi digitado apos a passagem por copia: %d\n\n", valor);
                printf("Valor retornado pela funcao de passagem por simulacao de referencia: %d\n\n", procB(&valor)); // Executa o procedimento procB() enviando um endereço como parâmetro e escreve o valor retornado
                printf("O valor que foi digitado apos a passagem por simulacao de referencia: %d\n\n", valor);
                printf("-------------------------------\n\n");
                break;
        }
    }
        printf("FIM DO PROGRAMA\n"); // Se o valor digitado pelo usuário na função interface for diferente dos usados pelo switch, essa mensagem é exibida
        return 0;
}

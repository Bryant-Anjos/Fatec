// Memoria_Matriz.cpp
// Programa para verificar representacao arranjos multidimensionais alocados dinamicamente

#include <iostream>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
   // auxiliares
   int i, j, k;
   int valor;

   // arranjo unidimensional, alocacao fixa
   int VF[10];

   // arranjo unidimensional, alocacao dinamica
   int * VD;
   int   tvd;  // tamanho do vetor

   // arranjo bidimensional, alocacao fixa
   int AF[3][4];

   // arranjo bidimensional, alocacao dinamica
   int ** AD;
   int    lad; // qtd linhas
   int    cad; // qtd colunas

   // arranjo tridimensional, alocacao fixa
   int BF[3][4][2];

      // arranjo tridimensional, alocacao dinamica
   int *** BD;
   int    nad; // qtd niveis (linhas e colunas usam as variaveis acima)

   /* ------------ ALOCACAO FIXA ------------- */
   valor = 0;
   cout << "Armazenamento do vetor (matriz unidimensional) de ALOCACAO FIXA VF[10]: " << endl;
   cout << "----------------------------------------------------------------------- " << endl;
   for (i=0; i<10; i++) {
   	  cout << "Endereco de VF[" << i << "] : " << &(VF[i]) ;
   	  VF[i] = valor++;
   	  cout << "  -  Valor de VF[" << i << "] : " << VF[i] << endl;
   }
   cout << endl;
   cout << endl;

   valor = 0;
   cout << "Armazenamento da matriz bidimensional de ALOCACAO FIXA AF[3][4]: " << endl;
   cout << "---------------------------------------------------------------- " << endl;
   for (i=0; i<3; i++) {
      for (j=0; j<4; j++) {
      	 cout << "Endereco de AF[" << i << "][" << j << "] : " << &(AF[i][j]) ;
      	 AF[i][j] = valor++;
      	 cout << "  -  Valor de AF[" << i << "][" << j << "] : " << AF[i][j] << endl;
      }
   }
   cout << endl;
   cout << endl;

   valor = 0;
   cout << "Armazenamento da matriz tridimensional de ALOCACAO FIXA BF[3][4][2]: " << endl;
   cout << "-------------------------------------------------------------------- " << endl;
   for (i=0; i<3; i++) {
      for (j=0; j<4; j++) {
      	 for (k=0; k<2; k++) {
      	    cout << "Endereco de BF[" << i << "][" << j << "][" << k << "] :" << &(BF[i][j][k]) ;
      	    BF[i][j][k] = valor++;
      	    cout << "  -  Valor de BF[" << i << "][" << j << "][" << k << "] :" << BF[i][j][k] << endl;
      	 }
      }
   }
   cout << endl;
   cout << endl;

   /* ------------ ALOCACAO DINAMICA - VETOR ------------- */
   cout << "Armazenamento do vetor (matriz unidimensional) de ALOCACAO DINAMICA VD[10]: " << endl;
   cout << "--------------------------------------------------------------------------- " << endl;
   /* obtencao do tamanho do vetor (calculo, atribuicao ou leitura, como neste caso) */
   cout << "Informe a qtd de elementos do vetor: ";
   cin  >> tvd;
   cout << endl;

   /* alocacao do vetor */
   VD = (int *) malloc ( tvd * sizeof (int) );
   cout << "O endereco de VD eh: " << &(VD) << endl;
   cout << "O conteudo de VD eh: " <<   VD  << endl;
   cout << endl;

   /* preenchimento de cada elemento do vetor */
   valor = 0;
   for ( i = 0; i < tvd; i++ )   {
   	  cout << "Endereco de VD[" << i << "] : " << &(VD[i]) ;
   	  VD[i] = valor++;
   	  cout << "  -  Valor de VD[" << i << "] : " << VD[i] << endl;
   }

   /* liberacao da memoria do vetor */
   free (VD);
   cout << endl;
   cout << endl;

   /* ------------ ALOCACAO DINAMICA - MATRIZ BIDIMENSIONAL  ------------- */
   cout << "Armazenamento da matriz bidimensional de ALOCACAO DINAMICA AD[10]: " << endl;
   cout << "------------------------------------------------------------------ " << endl;
   /* obtencao de qtd linhas e colunas (calculo, atribuicao ou leitura, como neste caso) */
   cout << "Informe a qtd de linhas  da matriz: ";
   cin  >> lad;
   cout << "Informe a qtd de colunas da matriz: ";
   cin  >> cad;
   cout << endl;

   /* alocacao do array de ponteiros */
   AD = (int **) malloc ( lad * sizeof (int *) );
   cout << "O endereco de AD eh: " << &(AD) << endl;
   cout << "O conteudo de AD eh: " <<   AD  << endl;
   cout << endl;

   /* alocacao de cada linha da matriz */
   for ( i = 0; i < lad; i++ )   {
	   AD[i] = (int *) malloc ( cad * sizeof (int) );
       cout << "O endereco de AD[" << i << "] eh: " << &(AD[i]) << endl;
       cout << "O conteudo de AD[" << i << "] eh: " <<   AD[i]  << endl;
   }
   cout << endl;

   /* a partir daqui, podemos usar A[i][j] normalmente ... */
   valor = 0;
   for ( i = 0; i < lad; i++ ) {
	   for ( j = 0; j < cad; j++ )
		   AD[i][j] = ((double) valor++)*1.1;      /* preenche com numeros sequenciais */
   }

   for ( i = 0; i < lad; i++ ) {
	   for ( j = 0; j < cad; j++ ) {
           cout << "O endereco de AD[" << i << "][" << j << "] eh: " << &(AD[i][j]) << endl;
           cout << "O conteudo de AD[" << i << "][" << j << "] eh: " <<   AD[i][j]  << endl;
	   }
   }

   /* desalocacao na ordem inversa */
   for ( i = lad-1; i >= 0; i-- )   {
	   free ( AD[i] );
   }
   free ( AD );

   /* ------------ ALOCACAO DINAMICA - MATRIZ TRIDIMENSIONAL  ------------- */
   cout << "Armazenamento da matriz tridimensional de ALOCACAO DINAMICA BD: " << endl;
   cout << "------------------------------------------------------------------ " << endl;
   /* obtencao de qtd linhas e colunas (calculo, atribuicao ou leitura, como neste caso) */
   cout << "Informe a qtd de linhas  da matriz: ";
   cin  >> lad;
   cout << "Informe a qtd de colunas da matriz: ";
   cin  >> cad;
   cout << "Informe a qtd de niveis da matriz: ";
   cin  >> nad;
   cout << endl;

   BD = (int ***) malloc( nad * sizeof(int **) );
   cout << "O endereco de BD eh: " << &(BD) << endl;
   cout << "O conteudo de BD eh: " <<   BD  << endl;
   cout << endl;

   for ( i = 0; i < nad; i++) {
    BD[i] = (int **) malloc( cad * sizeof(int *) );
    cout << "O endereco de BD["  << i <<  "] eh: " << &(BD[i]) << endl;
    cout << "O conteudo de BD["  << i <<  "] eh: " <<   BD[i]  << endl;
    cout << endl;

    for( j = 0; j < cad; j++) {
        BD[i][j] = (int *) malloc( nad * sizeof(int) );
        cout << "Endereco de BD[" << i << "][" << j << "] : " << &(BD[i][j]) << endl;
        cout << "  -  Valor de BD[" << i << "][" << j << "] : " << BD[i][j] << endl;
        cout << endl;
    }
   }

   valor = 0;
    for( i = 0; i < lad; i++) {
        for( j = 0; j < cad; j++) {
                for( k = 0; k < nad; k++) {
                    BD[i][j][k] = valor++;
                }
        }
    }

    for ( i = 0; i < lad; i++ ) {
	   for ( j = 0; j < cad; j++ ) {
            for ( k = 0; k < nad; k++ ) {
               cout << "O endereco de BD[" << i << "][" << j << "][" << k << "] eh: " << &(BD[i][j][k]) << endl;
               cout << "O conteudo de BD[" << i << "][" << j << "][" << k << "] eh: " <<   BD[i][j][k]  << endl;
            }
	   }
   }



   char v;
   cout << endl;
   cout << endl;
   cout << "Pressione qualquer tecla e depois <Enter> para sair: " << endl;
   cin  >> v;

   return 0;
}

'use strict';

function Stack() {

    // conteúdo da pilha como um arranjo
    let itens = [];

    // métodos

    // 1. insere um ou mais elementos no topo da pilha
    this.push = function(elemento) {
       itens.push(elemento);
    };

    // 2. remove um elemento do topo, devolvendo o valor removido
    this.pop = function() {
       return itens.pop();
    };

    // 3. verifica se a pilha está vazia
    this.isEmpty = function() {
        return (itens.length == 0);
    };

    // 4. verifica o conteúdo do elemento do topo da pilha, sem removê-lo
    this.peek = function() {
        // lembrar que o topo da pilha está no final do arranjo
        return itens[itens.length-1];
    };

    // 5. limpa ("esvazia" completamente) a pilha
    this.clear = function() {
        itens = [];
    };

    // 6. exibe todo o conteúdo da pilha (auxiliar para testes)
    this.print = function() {
        return itens.toString();
    };

    this.comprimento = function() {
      return itens.length;
    };
 }

let pilha = new Stack();

/*pilha.push(52);
console.log(pilha.length);*/

 for (var i = 1; i < 5; i++) {
   for (var j = 1; j < 4; j++) {
     pilha.push( i*j );
   }
   console.log("Conteúdo da Pilha: " + pilha.print());
   console.log("Comprimento da Pilha: " + pilha.comprimento());
   pilha.pop();
   console.log("Conteúdo da Pilha: " + pilha.print());
   console.log("Comprimento da Pilha: " + pilha.comprimento());
 }

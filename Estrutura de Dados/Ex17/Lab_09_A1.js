'use strict';

class Queue {

    // método construtor
   constructor() { this.itens = []; }

   // métodos

   // 1. insere um ou mais elementos no final da fila
   enqueue(elemento) {
      this.itens.push(elemento);
   }

   // 2. remove um elemento do início da fila, devolvendo o valor removido
   dequeue() {
      return this.itens.shift();
   }

   // 3. verifica se a fila está vazia
   isEmpty() {
       return(this.itens.length == 0);
   }

   // 4. verifica o conteúdo do primeiro elemento da fila, sem removê-lo
   showFront() {
       return(this.itens[0]);
   }

   // 5. limpa ("esvazia" completamente) a fila
   clear() {
       itens = [];
   }

   // 6. exibe todo o conteúdo da fila (auxiliar para testes)
   showAll() {
       console.log("Itens da Fila: " + this.itens.toString());
       console.log("Comprimento da Fila: " + this.itens.length);
   }

}

let fila = new Queue();

for (var i = 1; i < 4; i++) {
  for (var j = 1; j < 5; j++) {
    fila.enqueue( i*j );
  }
  fila.showAll();
  fila.dequeue();
  console.log();
  fila.showAll();
  console.log();
}

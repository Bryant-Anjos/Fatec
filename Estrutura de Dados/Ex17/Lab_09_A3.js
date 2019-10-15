'use strict';

class QueueElement {

  constructor(elemento, prioridade) {
    this.element = elemento;
    this.priority = prioridade;
  }
}

class PriorityQueue {

  // método construtor
  constructor() { this.itens = []; }

  // métodos

  // 1. insere um ou mais elementos no final da fila
  enqueue(elemento, prioridade) {
    let queueElemento = new QueueElement(elemento, prioridade);
    this.itens.push(queueElemento);
  }

  // 2. remove um elemento com mais prioridade
  dequeue() {
    var prioridade = this.itens[0].priority;
    var aux = 0;
    for (var i = 1; i < this.itens.length; i++) {
      if ( this.itens[i].priority <  prioridade) {
        prioridade = this.itens[i].priority;
        aux = i
      }
    }
     return this.itens.splice(aux, 1);
  };

  // 3. verifica se a fila está vazia
  isEmpty() {
      return(this.itens.length == 0);
  };

  // 4. verifica o conteúdo do primeiro elemento da fila, sem removê-lo
  showFront() {
      return(this.itens[0]);
  };

  // 5. limpa ("esvazia" completamente) a fila
  clear() {
      this.itens = [];
  };

  // 6. exibe todo o conteúdo da fila (auxiliar para testes)
  showAll() {
    for (var i = 0; i < this.itens.length; i++) {
      console.log("Elemento: " + this.itens[i].element + " - Prioridade: " + this.itens[i].priority);
    }
    console.log("Comprimento da Fila: " + this.itens.length);
  };

}

let fila2 = new PriorityQueue();

fila2.enqueue('Carlos', 30);
fila2.enqueue('Pedro', 10);
fila2.enqueue('Maria', 20);
fila2.enqueue('Paula', 20);
fila2.enqueue('Alex', 10);

fila2.showAll();

fila2.dequeue();
fila2.showAll();

fila2.dequeue();
fila2.showAll();

fila2.dequeue();
fila2.showAll();

fila2.dequeue();
fila2.showAll();

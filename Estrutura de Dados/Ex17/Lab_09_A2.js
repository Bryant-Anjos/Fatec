function PriorityQueue() {
  // conteúdo da fila como um arranjo
  let itens = [];

  // caracterização de cada elemento
  function QueueElement(elemento, prioridade) {
    this.element = elemento;
    this.priority = prioridade;
  }

  // métodos
  // 1. insere elemento na fila de acordo com sua prioridade
  this.enqueue = function(elemento, prioridade) {
    // instanciação de um novo elemento (par elemento-prioridade)
    let queueElemento = new QueueElement(elemento, prioridade);
    // variável auxiliar para indicar fim do loop
    let inseriu = false;
    // loop de busca pela posição de inserção do novo elemento
    // (começa pelo elemento mais prioritário, que está no início da fila)
    for (let i = 0; i < itens.length && !inseriu; i++) {
      // compara prioridade do novo elemento com aquela do elemento da posição i
      if (queueElemento.priority < itens[i].priority) {
        // novo elemento é mais prioritário: entra na posição i
        itens.splice(i, 0, queueElemento);
        // avisa que o loop já pode terminar
        inseriu = true;
      }
    }

    // se ainda não inseriu o novo elemento ...
    if (!inseriu) {
      // então ele é o menos prioritário mesmo e irá para o final da fila
      itens.push(queueElemento);
    }
    // fim do método de inserção
  };

  // 2. remove um elemento do início da fila, devolvendo o valor removido
  this.dequeue = function() {
     return itens.shift();
  };

  // 3. verifica se a fila está vazia
  this.isEmpty = function() {
      return(itens.length == 0);
  };

  // 4. verifica o conteúdo do primeiro elemento da fila, sem removê-lo
  this.showFront = function() {
      return(itens[0]);
  };

  // 5. limpa ("esvazia" completamente) a fila
  this.clear = function() {
      itens = [];
  };

  // 6. exibe todo o conteúdo da fila (auxiliar para testes)
  this.showAll = function() {
    for (var i = 0; i < itens.length; i++) {
      console.log("Elemento: " + itens[i].element + " - Prioridade: " + itens[i].priority);
    }
    console.log("Comprimento da Fila: " + itens.length);
  };

}

let fila2 = new PriorityQueue();

fila2.enqueue('Carlos', 30);
fila2.enqueue('Pedro', 10);
fila2.enqueue('Maria', 20);
fila2.enqueue('Paula', 20);
fila2.enqueue('Alex', 10);

fila2.showAll();

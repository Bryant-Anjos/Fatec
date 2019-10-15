'use strict';

function LinkedList() {

    // definicao do elemento da lista
    let NohLista = function(valor) {
        this.conteudo = valor;
        this.proximo  = null;
    };

    // propriedade: qtd elementos da lista
    let comprimento = 0;

    // referencia para o elemento do inicio da lista
    let primeiro = null;

    // referencia para o elemento do inicio da lista
    let ultimo = null;

    // metodos

    // 1. verifica se a lista estah vazia
    this.estahVazia = function() {
        return (comprimento == 0);
        // tambem pode ser: return (primeiro == null);
    };

    // 2. insere um elemento no ini�cio da lista
    this.insereInicio = function(valor) {
        // cria (instancia) um NohLista
        let novo = new NohLista(valor);
        // se a lista estah vazia
        if (this.estahVazia()) {
            // novo elemento serah o primeiro
            primeiro = novo;
            ultimo = novo;
        }
        else {
            // senao, quem era o primeiro serah o segundo (proximo do novo)
            novo.proximo = primeiro;
            primeiro = novo;
            let aux = primeiro;
            while ( aux.proximo != null) {
              aux = aux.proximo;
            }
            ultimo = aux;
        }
        // IMPORTANTE: incrementa o indicador de qtd de elementos da lista
        // caso contrario, a lista parecerah sempre vazia
        comprimento++;

        return true;
    };

    // 3. imprime os conteudos de todos os elementos atualmente na lista
    this.print = function() {
        // se a lista estah vazia, nada a imprimir ...
        if ( this.estahVazia()) {
            console.log('A lista estah vazia !');
        }
        else {
            // utiliza variavel auxiliar para o percurso
            // (esta variavel eh uma referencia para o elemento)
            let aux = primeiro;
            // enquanto a variavel auxiliar referenciar um elemento da lista
            while ( aux != null ) {
                // imprimir o conteudo do elemento referenciado
                console.log('Conteudo do elemento atual: ' + aux.conteudo);
                // avancar para o proximo elemento da lista
                aux = aux.proximo;
            }
        }
        return true;
    };

    // 4. remove um elemento do inicio da lista
    this.removeInicio = function() {
      if ( this.estahVazia() ) {
        console.log('A lista estah vazia !');
      } else {
        let conteudoRemovido = primeiro.conteudo;
        primeiro = primeiro.proximo;
        comprimento--;
        return conteudoRemovido;
      }
    };

    // 5. insere um elemento no final  da lista
    this.insereFinal = function(valor) {

      let novo = new NohLista(valor);

      if ( this.estahVazia() ) {
        primeiro = novo;
        comprimento++;
      } else {
        ultimo.proximo = novo;
        ultimo = novo;
        comprimento++;
      }
  };

    // 6. remove um elemento do final  da lista
    this.removeFinal = function() {
      if ( this.estahVazia() ) {
        console.log('A lista estah vazia !');
      } else if ( primeiro.proximo == null ) {
        let conteudoRemovido = primeiro.conteudo;
        primeiro = null;
        comprimento--;
        return conteudoRemovido;
      } else {
        let aux = primeiro;
        while ( aux.proximo.proximo != null ) {
          aux = aux.proximo;
        }
        let conteudoRemovido = aux.proximo.conteudo;
        aux.proximo = null;
        comprimento--;
        return conteudoRemovido;
      }
    };

}

// "PROGRAMA PRINCIPAL"

// cria uma lista
let lista = new LinkedList();

// verifica se a lista estah vazia
console.log("Logo depois de criar a lista ...");
if (lista.estahVazia()) {
    console.log('A lista estah vazia !');
}
else {
    console.log('A lista NAO estah vazia !');
}

console.log('Iniciando as operacoes com a lista ...');
console.log();
// insere cinco elementos seguidos no inicio da lista
for (var i = 0; i < 5; i++) {
  lista.insereInicio( Math.floor(Math.random() * 100) );
}
// exibe o conteudo atual da lista
lista.print();
console.log();

// insere cinco elementos seguidos no final da lista
for (var i = 0; i < 5; i++) {
  lista.insereFinal( Math.floor(Math.random() * 100) );
}
// exibe o conteudo atual da lista
lista.print();
console.log();

// remove elementos alternadamente do inicio e do final da lista
for (var i = 0; i < 5; i++) {
  console.log('Removido elemento do inicio da lista - conteudo: ' + lista.removeInicio());
  console.log('Removido elemento do final  da lista - conteudo: ' + lista.removeFinal() );
}

// com alista jah vazia, tentar remover mais um elemento
console.log();
lista.removeInicio();   // testar tambem com lista.removeFinal()

// TAD - Tipo Abstrato de Dados

var pilha = new Array();
var maxtam = pilha.lenght;
console.log(pilha.length);

var topo;

function pilhaConstrutor() {
  topo = -1;
}

function pilhaVazia() {
  if (topo == -1) {
    return true;
  } else {
    return false;
  }
}

function pilhaCheia() {
  if (topo == maxtam - 1) {
    return true;
  } else {
    return false;
  }
}

function pilhaPush(var valor) { // Push: Empilhar
  if ( pilhaCheia() ) {
    return false;
  } else {
    topo++;
    pilha[topo] = valor;
    return true;
  }
}

function pilhaPop() { // Pop: Desempilhar
  if ( pilhaVazia() ) {
    return false;
  } else {

  }
}

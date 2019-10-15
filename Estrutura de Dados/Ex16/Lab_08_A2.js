class Stack {
 // método construtor
 constructor() { this.itens = []; }

 // métodos

 // 1. insere um ou mais elementos no
 // topo da pilha
 push(elemento) {
    this.itens.push(elemento);
 }

 // 2. remove um elemento do topo,
 // devolvendo o valor removido
 pop() {
    return this.itens.pop();
 }

 // 3. verifica se a pilha está vazia
 isEmpty() {
    return (this.itens.length == 0);
 }

 // 4. verifica o conteúdo do elemento do topo da pilha, sem removê-lo
 peek() {
     // lembrar que o topo da pilha está no final do arranjo
    return this.itens[this.itens.length-1];
 }

 // 5. limpa ("esvazia" completamente) a pilha
 clear() {
    this.itens = [];
 }

 // 6. exibe todo o conteúdo da pilha (auxiliar para testes)
 print() {
    return this.itens.toString();
 }

 comprimento() {
    return this.itens.length;
 }

}

let pilha2 = new Stack();

pilha2.push('Jaime');
pilha2.push('Fernando');
pilha2.push('Isamara');
pilha2.push('Leonardo');
pilha2.push('Willian');
pilha2.push('Valdir');
pilha2.push('Jhonatan');
pilha2.push('Daniel');
pilha2.push('Guilherme');
pilha2.push('João');

pilha2.itens.sort();

console.log(pilha2.print());


let nomes2 = new Stack();

nomes2.itens = pilha2.itens.reverse();

console.log(nomes2.print());

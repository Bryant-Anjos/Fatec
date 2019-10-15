var obj3 = {
  nome: {
    primeiro: 'Carlos',
    segundo: 'Magnus'
  },
  local: 'FATEC'
};

obj3.printNomeCompleto = function() {
  console.log(this.nome.primeiro + " " + this.nome.segundo);
}

obj3.printLocal = function() {
  console.log(this.local);
}

console.log("Nome do obj3: " + obj3.nome.primeiro + " " + obj3.nome.segundo);
console.log("Local do obj3: " + obj3.local + "\n");

obj3.nome.primeiro = "Stefan";
obj3.nome.segundo = "Molyneux";
obj3.local = "Youtube";

console.log("Nome do obj3: " + obj3.nome.primeiro + " " + obj3.nome.segundo);
console.log("Local do obj3: " + obj3.local + "\n");

obj3.printNomeCompleto();
obj3.printLocal();
console.log();

function Livro1(titulo, autor, pags, isbn) {
  this.titulo = titulo;
  this.autor = autor;
  this.pags = pags;
  this.isbn = isbn;
  this.preco = 0.00;
  this.printIsbn = function() {
    console.log(this.isbn);
  }
  this.printInfos = function() {
    console.log("Livro: " + this.titulo + "\nAutor: " + this.autor + "\nPáginas: " + this.pags + "\nIsbn: " + this.isbn + "\nPreço: " + this.preco + "\n");
  }
}

class Livro2 {
  // construtor
  constructor (titulo, autor, pags, isbn) {
    this.titulo = titulo;
    this.autor = autor;
    this.pags = pags;
    this.isbn = isbn;
    this.preco = 0.00;
  }
  // funcoes
  printIsbn() {
    console.log(this.isbn);
  }
  printInfos() {
    console.log("Livro: " + this.titulo + "\nAutor: " + this.autor + "\nPáginas: " + this.pags + "\nIsbn: " + this.isbn + "\nPreço: " + this.preco + "\n");
  }
  setPreco(preco) {
    this.preco = preco;
    console.log("Preço do livro " + this.titulo + " atualizado com sucesso!");
  }
  getPreco() {
    return this.preco;
  }
}

var l1 = new Livro1("A Lei", "Frédéric Bastiat", 100, 255);
var l2 = new Livro2("As Seis Lições", "Ludwig von Mises", 200, 126);

l1.printInfos();
l2.printInfos();

l2.setPreco("Preço do Livro " + l2.titulo + ": " + 50.00 + " reais\n");
console.log(l2.getPreco());

Livro1.prototype.changeLivro = function(titulo, autor, pags, isbn) {
  this.titulo = titulo;
  this.autor = autor;
  this.pags = pags;
  this.isbn = isbn;
};

l1.changeLivro("O que o Governo fez com o nosso Dinheiro", "Murray N. Rothbard", 150, 488);
l1.printInfos();

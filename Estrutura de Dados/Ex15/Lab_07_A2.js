// Criação do Array
var nomes = new Array();

// Função para imprimir valores do Array
function printArray(array) {
  console.log("Valores do Array: " + array.join(', '));
  console.log("Quantidade de elementos do Array: " + array.length);
  console.log();
}

// Função para inverter valores do Array
function invert(array) {
  var aux;
  for (var i = 0; i < array.length/2; i++) {
    aux = array[i];
    array[i] = array[array.length - i - 1];
    array[array.length - i - 1] = aux;
  }
}

// Adição de valores ao Array
nomes.push("Mises",
          "Rothbard",
          "Hoppe",
          "Hayek",
          "Menger",
          "Bohm-Bawerk",
          "Bastiat",
          "Kizner",
          "Kinsela",
          "Hazlitt"
);

printArray(nomes);

nomes.sort();
printArray(nomes);

invert(nomes);
printArray(nomes);

/* Função Slice que recebe 2 inteiros como parâmetro, no qual o primeiro
seleciona o primeiro elemento a fazer parte da seleção e o segundo elemento
seleciona o último.
No exemplo a seguir uma variável é declarada recebendo o valor da seleção */
var selecao = nomes.slice(2, 7);
printArray(selecao);

// Criação do Array
var numeros = new Array(0,1,2,3,4,5,6,7);

// Função para imprimir valores do Array
function printArray(array) {
console.log("Valores do Array: " + array);
console.log("Quantidade de elementos do Array: " + array.length);
console.log();
}

// Imprime os elementos do Array
printArray(numeros);

numeros.push(8,9,10);
printArray(numeros);

numeros.pop();
printArray(numeros);

numeros.unshift(-1,-2, -3);
printArray(numeros);

numeros.shift();
printArray(numeros);

numeros.splice(5,3);
printArray(numeros);

numeros.splice(5,0,3,4,5);
printArray(numeros);

numeros.reverse();
printArray(numeros);

numeros.sort();
printArray(numeros);

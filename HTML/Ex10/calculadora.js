const NUMBERS = 10;
var buttonsNum = document.createElement('div');
document.body.appendChild(buttonsNum);
buttonsNum.id = 'buttonsNum';
var btn = [];

var num1 = null;
var num2 = null;
var operator = false;

for (let i = 0; i < NUMBERS; i++) {
    buttonsNum.innerHTML += '<button class="btnNum" id="btn' + i + '" value="' + i + '">' + i + '</button>';
}

for (let i = 0; i < NUMBERS; i++) {
    btn.push(document.getElementById('btn' + i));    
}

for (let i = 0; i < btn.length; i++) {
    btn[i].addEventListener('click', getValues);
}

const res = document.getElementById('res');
btn.push(document.getElementById('btnSum'));

function operation(num1, num2, op) {
    parseFloat(num1);
    parseFloat(num2);

    switch (op) {
        case 'sum':
            return num1 + num2;
        case 'minus':
            return num1 - num2;
        case 'times':
            return num1 * num2;
        case 'division':
            return num1 / num2;
    }
}

var x = "";

function getValues(element) {
    x += element.srcElement.value;
    
    if (operator == false) {
        num1 = parseFloat(x);
    } else {
        num2 = parseFloat(x);
        render();
        num1 = null;
        num2 = null;
        x = "";
        operator = false;
    }
    console.log(num1);
    console.log(num2);
}

const btnSum = document.getElementById('btnSum');
btnSum.addEventListener('click', getOperator);
const btnMinus = document.getElementById('btnMinus');
btnMinus.addEventListener('click', getOperator);
const btnTimes = document.getElementById('btnTimes');
btnTimes.addEventListener('click', getOperator);
const btnDivision = document.getElementById('btnDivision');
btnDivision.addEventListener('click', getOperator);

function getOperator(element) {
    operator = element.srcElement.value;
    x = "";
    console.log(operator);
}

function render() {
    res.innerHTML = operation(num1, num2, operator);
}
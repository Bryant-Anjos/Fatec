function multiplica(num1, num2) {
  if ( num1 == 0 || num2 == 0 ) {
    return 0;
  } else if ( num2 == 1 ) {
    return num1;
  } else {
    return ( num1 + multiplica(num1, num2 - 1));
  }
}

var result = multiplica(13,20);
console.log(result);

//const readline = require('readline');

//let rl = readline.createInterface({input: process.stdin, output: process.stdout});
enum semana {
  Domingo = 1,
  Segunda,
  Terca,
  Quarta,
  Quinta,
  Sexta,
  Sabado
}

let agenda3 = (dia: number) => {
  console.log(semana[dia]);
};

let menu = () => {
  //rl.question('Olá, por favor informe um número entre 1 e 7', (num) => {

    let num = prompt("Olá, por favor informe um número entre 1 e 7");
    console.log(agenda3(parseInt(num)));

    //rl.close();
};

menu()

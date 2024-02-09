// Exemplo 1 - utilizando uma função simples
function agenda(diaDaSemana: number) {
  switch (diaDaSemana) {
    case 1:
      console.log("Domingo");
      break;
    case 2:
      console.log("Segunda");
      break;
    case 3:
      console.log("Terça");
      break;
    case 4:
      console.log("Quarta");
      break;
    case 5:
      console.log("Quinta");
      break;
    case 6:
      console.log("Sexta");
      break;
    case 7:
      console.log("Sábado");
      break;
    default:
      console.log("Isto não é um dia da semana!");
      break;
  }
}

//Exemplo 2 - usando uma Arrow Function 
let agenda2 = (diaDaSemana: number) => {
  switch (diaDaSemana) {
    case 1:
      console.log("Domingo");
      break;
    case 2:
      console.log("Segunda");
      break;
    case 3:
      console.log("Terça");
      break;
    case 4:
      console.log("Quarta");
      break;
    case 5:
      console.log("Quinta");
      break;
    case 6:
      console.log("Sexta");
      break;
    case 7:
      console.log("Sábado");
      break;
    default:
      console.log("Isto não é um dia da semana!");
      break;
  }
}

//Exemplo 3 - usando uma Arrow Function + enum ao invés de switch
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
}

let dia = 7;
let dia2 = 5;
let dia3 = 2;

agenda(dia);
agenda2(dia2);
agenda3(dia3);

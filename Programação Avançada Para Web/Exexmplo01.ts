function agenda(diaDaSemana){
	switch(diaDaSemana){
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

let agenda2 = (diaDaSemana) =>{
	switch(diaDaSemana){
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


let dia = 7;
let dia2 = 5;

agenda(dia);
agenda2(dia2);

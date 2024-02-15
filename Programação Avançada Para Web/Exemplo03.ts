interface PessoaInter{
  nome: string;
  sobrenome: string;

  validarDados(): boolean;
}

class PessoaFisica implements PessoaInter{

  nome : string;
  sobrenome: string;
  cpf: string;

  constructor(nome: string, sobrenome: string, cpf: string){
    this.nome = nome;
    this.sobrenome = sobrenome;
    this.cpf = cpf;
  }

  validarDados = (): boolean => {
    if (this.cpf.length !== 11)
    {
      alert("Este CPF não é válido.");
      return false;
    }
    else
    {
      alert("CPF válido!");
      return true;
    }
  }
}


class PessoaJuridica implements PessoaInter{

  nome : string;
  sobrenome: string;
  cnpj: string;
  credito: number;

  constructor(nome: string, sobrenome: string, cnpj: string, credito: number){
    this.nome = nome;
    this.sobrenome = sobrenome;
    this.cnpj = cnpj;
    this.credito = credito;
  }

  validarDados = (): boolean => {
    if (this.cnpj.length !== 9)
    {
      console.error("Este CNPJ não é válido.");
      return false;
    }
    else
    {
      console.log("CNPJ válido!")
      return true;
    }
  }
}

class ContaCorrente{
  correntista : PessoaInter;
  saldo: number;

  constructor(correntista: PessoaInter, saldo: number){
    this.correntista = correntista;
    this.saldo = saldo;
  }

  adicionarCorrentistaPF = (novo_correntPF: PessoaInter) : void =>{
    this.correntista = novo_correntPF;
  }

  adicionarCorrentistaPJ = (novo_correntPJ: PessoaInter) : void =>{
    this.correntista = novo_correntPJ;
  }

  imprimirDadosPF = () : string =>{
    return
  }

  imprimirDadosPJ = () : string =>{
    return
  }
}

const Main = () : void =>{
  let clientePF = new PessoaFisica("Isaque","Ferreira","00190787665");
  clientePF.validarDados();
}

Main();

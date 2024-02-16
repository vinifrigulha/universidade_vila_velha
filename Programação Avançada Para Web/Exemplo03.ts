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
      alert("Este CNPJ não é válido.");
      return false;
    }
    else
    {
      alert("CNPJ válido!")
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

  adicionarCorrentistaPF = (novo_correntPF: PessoaInter): ContaCorrente =>{
    return new ContaCorrente(novo_correntPF, this.saldo);
  }

  adicionarCorrentistaPJ = (novo_correntPJ: PessoaInter): ContaCorrente =>{
    return new ContaCorrente(novo_correntPJ, this.saldo);
  }

  imprimirDadosPF = () : string =>{

    if (this.correntista instanceof PessoaFisica){
      alert(`
      Dados correntista:\n
      \nNome: ${this.correntista.nome}
      \nSobrenome: ${this.correntista.sobrenome}
      \nCPF: ${this.correntista.cpf}
      \nSaldo: ${this.saldo}`
      );
    }
    else{
      return `Tipo de correntista inválido para imprimir dados de Pessoa Física`;
    }
  
  }

  imprimirDadosPJ = () : string =>{
     if (this.correntista instanceof PessoaJuridica){
      alert(`
      Dados correntista:\n
      \nNome: ${this.correntista.nome}
      \nSobrenome: ${this.correntista.sobrenome}
      \nCPF: ${this.correntista.cnpj}
      \nCrédito: ${this.correntista.credito}
      \nSaldo: ${this.saldo}`
      );
    }
    else{
      return `Tipo de correntista inválido para imprimir dados de Pessoa Jurídica`;
    }
  }
}

const Main = () : void =>{

    let clientePF = new PessoaFisica("Isaque","Ferreira","00190787665");
    clientePF.validarDados();

    if(clientePF.validarDados() == true){
      let contaPF = new ContaCorrente(clientePF, 1000);
      contaPF.imprimirDadosPF();
    }
    else{
      alert("Infelizmente não foi possível criar a conta de Pessoa Física");
    }

}

Main();

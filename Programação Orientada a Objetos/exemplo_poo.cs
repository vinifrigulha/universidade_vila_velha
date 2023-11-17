// Exercício de experimentação para entender os funcionamentos da orientação a objeto
// Implementando uma classe Televisão e chamando seus métodos e atributos

using System;

namespace myConsole{

// Criando uma classe Televisão
  
  class Televisao{

    // Definindo seus atributos
    
    public string marca;
    public int tamanho;
    public string tipo;

    // Definindo seus métodos
    public void ligar(){

      Console.WriteLine("A TV está ligada.");

    }

    public void desligar(){

      Console.WriteLine("A TV está desligada");

    }

    public void mudarCanal(){

      Console.WriteLine("O canal foi mudado.");

    }

    public void exibirTelevisao(Televisao minhaTelevisao){

      Console.WriteLine("\n--- Expecificação Televisão ---\n");

      Console.Write("\nFabricante: _________________ " + minhaTelevisao.marca);
      Console.Write("\nTamanho:    ----------------- " + minhaTelevisao.tamanho + " polegadas");
      Console.Write("\nTipo:       ----------------- " + minhaTelevisao.tipo);
      Console.Write("\n ---------------------------------------------------------------------- ");
      Console.Write("\n");
    }

    // Criando um menu para gerenciar o programa
    
    public void menu(Televisao minhaTelevisao){

      Console.WriteLine("\nMuito bem, o que você deseja fazer agora?\n");
      Console.WriteLine("\n[1] Desligar TV \n");
      Console.WriteLine("[2] Trocar de canal. \n");
      Console.WriteLine("[3] Exibir expecificações da TV. \n");
      Console.WriteLine("[9] Fechar programa. \n");
      Console.Write("\nR: ");

      int opcao;
      
      if (int.TryParse(Console.ReadLine(), out opcao)){
        if (opcao == 1){
          Console.Clear();
          minhaTelevisao.desligar();
          Console.WriteLine("\nFim do programa!");
          Environment.Exit(0);
        }
        else if(opcao == 2){
          Console.Clear();
          minhaTelevisao.mudarCanal();
          menu(minhaTelevisao);
        }
        else if(opcao == 3){
          Console.Clear();
          exibirTelevisao(minhaTelevisao);
          menu(minhaTelevisao);
        }
        else if(opcao == 9){
          Console.Clear();
          Console.WriteLine("\nFim do programa!");
          Environment.Exit(0);
        }
      }
    }
  }

  class Program  {

    // Método principal
    
    public static void Main () {

      Televisao minhaTelevisao = new Televisao();

      Console.WriteLine("\n--- MENU - TELEVISÃO ---\n");
      Console.WriteLine("\nBem vindo! Vamos configurar a sua televisão.\n");

      Console.WriteLine("Qual a marca da sua televisão? ");
      Console.Write("\nR: ");
      minhaTelevisao.marca = Console.ReadLine();
      Console.Clear();

      Console.WriteLine("Qual o tamanho da sua televisão? ");
      Console.Write("\nR: ");
      int.TryParse(Console.ReadLine(), out minhaTelevisao.tamanho);
      Console.Clear();

      Console.WriteLine("Qual o tipo de televisão? ");
      Console.Write("\nR: ");
      minhaTelevisao.tipo = Console.ReadLine();
      Console.Clear();

      
      
      Console.WriteLine("\nO que você deseja fazer? \n");
      Console.WriteLine("\n[1] Ligar TV \n");
      Console.WriteLine("[2] Fechar programa. \n");
      Console.Write("\nR: ");
      
      int opcao;

      if (int.TryParse(Console.ReadLine(), out opcao)){
        if (opcao == 1){
          Console.Clear();
          minhaTelevisao.ligar();
          minhaTelevisao.menu(minhaTelevisao);
        }
        else if (opcao == 2){
          Console.Clear();
          Console.WriteLine("\nFim do programa!");
          Environment.Exit(0);
        }
        else{
          Console.Clear();
          Console.WriteLine("Opção inválida.");
        }
      }
    }
  }
}

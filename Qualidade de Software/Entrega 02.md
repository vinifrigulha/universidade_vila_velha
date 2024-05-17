# 1 - Requisitos Funcionais (RF):

## RF01: Fazer Pedido

### Cenário de Teste 01: Selecioner Itens do Menu

* CT 01: [Botões de adicionar item] [Quantidade alterada com sucesso]
* CT 02: [Botões de adicionar item] [Subtotal não alterado]
* CT 02: [Botão fechar pedido] [Não funciona mesmo preenchendo todos os campos exigidos]

**OBS**: Aparentemente o horário de testagem influencia no funcionamento do sistema, tendo em vista que a hamburgueria só funciona de noite. Entretanto isso não fica tão evidente para o usuário do site. Deveria haver um retorno de mensagem para o usuário informando que não é possível realizar pedidos durante o dia.

## RF02: Barra de Pesquisa

### Cenário de Teste 01: Pesquisar cardápio

* CT01: [Pesquisar os itens sugeridos na barra] [Itens filtrados com sucesso]
* CT02: [Pesquisar o nome dos pratos] [Itens filtrados com sucesso]
* CT03: [Pesquisar o nome das seções] [Não filtra ao pesquisar por Hamburgues, Porções, Franguinho, Bebidas, etc]
* CT04: [Pesquisar por palavras na descrição do lanche] [Filtra os itens corretamente, até mesmo pelo valor numérico das gramas da carne de hamburguer]

**OBS:** No geral a barra de pesquisa funciona adequadamente, caso o usuário siga as indicações da mesma. Entretanto ela poderia ser mais inteligente, caso o usuário queira filtrar por seções.

## RF03: Cadastrar Endereço

### Cenário de Teste 01: Cadastrar Endereço Vila Velha

* CT01: [Seleção Suspensa] [Cidade selecionada com sucesso]
* CT02: [Digitar endereço] [Aceita qualquer caractere]
* CT03: [Digitar números] [Aceita caractere do tipo float]
* CT04: [Botão cadastrar endereço] [Endereço cadastrado com sucesso]

**OBS:** Os mesmos testes foram realizados para se cadastrar outro endereço, pois o sistema de cadastro de endereço possui a maioria dos seus campos como uma lista suspensa, o que limita a entrada do usuário. Entretanto a hamburgueria faz entregas apenas na região 5 de Vila Velha, tornando a opção "Outros" para o cadastro do endereço, desnecessário.

## RNF01: Compatibilidade em Navegadores

### Cenário de Teste 01: Acessar o site

* CT01: [OperaGX]: [Portal acessado com sucesso]
* CT02: [Edge]: [Portal acessado com sucesso]
* CT03: [Chrome]: [Portal acessado com sucesso]

**OBS:** Funciona corretamente nos navegadores mais famosos, não foi feito testes em navegadores menos usuais.

# 3 - Componentes:

| Aluno                         | Professora                | Turma | Disciplina                     |
| ----------------------------- | ------------------------- | ----- | ------------------------------ |
| Isaque Ferreira de Paula Reis | Gabriela Martins de Jesus | CC5N  | Qualidade e Testes de Software |

# 4 - Link do GitHub

[Entrega 2 - Teste de Software](https://github.com/Fisaq/universidade_vila_velha/edit/main/Qualidade%20de%20Software/Entrega%2002.md)

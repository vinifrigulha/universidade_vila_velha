# 1 - Requisitos Funcionais (RF):

## RF001: Adicionar itens ao Carrinho de Compras

### Cenário de Teste 01: Selecioner Itens do Menu e Adicionais

* CT 01: [Clicar no botão "+" para acrescentar adicionais] [Quantidade de itens alterada com sucesso]
* CT 02: [Clicar no botão "+" para acrescentar adicionais] [Valor subtotal não atualizado]
* CT 03: [Apertar sucessivas vezes o botão "+"] [Permite um máximo de 20 itens adicionais, impossibilitando mais acréscimos]
* CT 04: [Clicar no botão "Fechar pedido" fora do horário comercial] [Nada acontece ao clicar]
* CT 05: [Clicar no botão "Fechar pedido" dentro do horário comercial] [Pedido adicionado ao carrinho com sucesso]

**OBS**: Aparentemente o horário de testagem influencia no funcionamento do sistema, tendo em vista que a hamburgueria só funciona de noite. Entretanto isso não fica tão evidente para o usuário do site. Deveria haver um retorno de mensagem para o usuário informando que não é possível realizar pedidos durante o dia.

## RF002: Barra de Pesquisa

### Cenário de Teste 01: Pesquisar cardápio

* CT01: [Digitar o nome "carne"] [Filtrado os itens que contenham carne]
* CT02: [Digitar o nome "tomate"] [Filtrado os itens que contenham tomate]
* CT03: [Digitar "150"] [Filtrado os itens que contenham "150" em sua descrição]  
* CT04: [Digitar "Colossus"] [Item filtrado com sucesso]
* CT05: [Digitar "Porções"] [Nada filtrado]
* CT06: [Digitar "Hamburguer"] [Nada filtrado]
* CT07: [Digitar "Bebidas"] [Nada filtrado]

**OBS:** No geral a barra de pesquisa funciona adequadamente, caso o usuário siga as indicações presentes na mesmas, "filtrar itens por nome ou descrição". Entretanto a pesquisa poderia ser mais precisa, caso o usuário queira filtrar os lanches por seções ou algo do tipo.

## RF003: Cadastrar Endereço

### Cenário de Teste 01: Cadastrar Endereço Vila Velha

* CT01: [Selecionar cidade do menu suspenso] [Cidade selecionada com sucesso]
* CT02: [Digitar um texto com um endereçõ] [Caracteres aceitos]
* CT03: [Digitar 10.0 no campo "Número"] [Caracter aceito]
* CT03: [Digitar "a" no campo "Número"] [Não permite a entrada de um tipo caracter]
* CT04: [Clicar no botão "Cadastrar Endereço"] [Endereço cadastrado com sucesso]

**OBS:** Os mesmos testes foram realizados para se cadastrar outro endereço, pois o sistema de cadastro de endereço possui a maioria dos seus campos como uma lista suspensa, o que limita a entrada do usuário.

## RNF01: Compatibilidade em Navegadores

### Cenário de Teste 01: Acessar o site

* CT01: [Acessar o site pelo navegador OperaGX]: [Acessado com sucesso]
* CT02: [Acessar o site pelo navegador Edge]: [Acessado com sucesso]
* CT03: [Acessar o site pelo navegador Chrome]: [Acessado com sucesso]

## RNF02: Responsividade do site

### Cenário de Teste 01: Teste de Responsividade em aparelhos diferentes

* CT01: [Monitor 14 polegadas]: [Os elementos estão distribuídos adequadamente]
* CT02: [Monitor 21 polegadas]: [Os elementos estão distribuídos adequadamente]
* CT03: [Iphone SE]: [O site não tem uma boa responsividade, estando os elementos distribuídos de uma má forma]
* CT04: [Samsung Galaxy S20 Ultra]: [Verticalmente há uma boa distribuição dos elementos, mas não funciona bem na horizontal]
* CT05: [Iphone 14 Pro Max]: [Verticalmente há uma boa distribuição dos elementos, mas não funciona bem na horizontal]
* CT06: [Ipad Pro]: [Os elementos estão distribuídos adequadamente]
* CT07: [Poco X5 5G]: [Os elementos estão distribuídos adequadamente]

**OBS:** Os testes foram realizados utilizando o sistema de proporções do menu Inspencionar do Google Chrome, a não ser pelos testes em monitores e no aparelho Poco X5 5G.
A responsividade funciona bem em dispositivos mais largos, como o Ipad e em telas de desktop, porém não possui uma boa distribuição dos elementos em celulares menores horizontalmente.

# 3 - Componentes:

| Aluno                         | Professora                | Turma | Disciplina                     |
| ----------------------------- | ------------------------- | ----- | ------------------------------ |
| Isaque Ferreira de Paula Reis | Gabriela Martins de Jesus | CC5N  | Qualidade e Testes de Software |

# 4 - Link do GitHub

[Entrega 1 - Teste de Software](https://github.com/Fisaq/universidade_vila_velha/edit/main/Qualidade%20de%20Software/Entrega%2001.md)

[Entrega 2 - Teste de Software](https://github.com/Fisaq/universidade_vila_velha/edit/main/Qualidade%20de%20Software/Entrega%2002.md)

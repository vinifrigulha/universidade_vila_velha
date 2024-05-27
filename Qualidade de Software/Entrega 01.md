# Plano de Teste

## Marvel's Hamburgueria
<img src="https://s3.us-west-2.amazonaws.com/whatsmenu/production/marvelshamburgueria/tIMG_20220707_161334_059.jpg" width=150> 

## 1. Introdução

A Marvel's Hamburgueria, localizada na Região 5 de Vila Velha, oferece um serviço de delivery para seus clientes. Para facilitar e agilizar o processo de pedidos, a lanchonete utiliza uma plataforma online desenvolvida pela empresa WhatsMenu. Esta plataforma é especializada na criação de cardápios digitais, permitindo uma organização eficiente dos pedidos e proporcionando uma experiência de usuário mais rápida e prática.

Este documento tem como objetivo testar o funcionamento da plataforma de pedidos da Marvel's Hamburgueria, avaliando sua eficácia através de uma série de testes funcionais.

Com este documento será possível:

* Identificar os componentes de software que devem ser testados.
* Prover uma estimativa de esforços.
* Listar os resultados obtidos.

## 2. Requisitos de Teste

Esta seção aborda os requisitos funcionais que foram escolhidos como necessários para o bom funcionamento do sistema, sendo objetos de testes ao longo do projeto. São eles:

| Requisito | Descrição |
|-----------|-----------|
| REQ-1 | Fazer Pedido |
| REQ-2 | Barra de Pesquisa |
| REQ-3 | Cadastrar Endereço |

## 3. Testes

Nesta seção são apresentados os critérios de testes a serem realizados nos requisitos apresentados no tópico anterior.

### 3.1 Selecionar Itens do Menu para Realizar Pedido (REQ-1)

Foram realizados testes durante o dia e à noite, nos quais itens do menu foram adicionados para simular pedidos. Os testes realizados durante o dia não foram bem-sucedidos, uma vez que a Hamburgueria funciona apenas no período noturno. Entretanto, essa limitação não é claramente comunicada ao usuário, sendo indicada apenas por pequenos elementos presentes no sistema, o que pode gerar confusão.

Nos testes noturnos, foi observado que a adição de complementos aos pedidos atualiza o subtotal apenas no botão final "Fazer pedido". Esta falta de atualização em tempo real pode causar uma falta de transparência, dificultando a experiência do cliente ao não fornecer informações claras sobre o custo total do pedido à medida que ele é montado.

### 3.2 Analisar o funcionamento da barra de pesquisas (REQ-2)



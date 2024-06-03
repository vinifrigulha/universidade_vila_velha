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

<br/>
<table>
    <tr>
        <th>
            Objetivo:
        </th>
        <th colspan="4">
            Testar Funcionamento do sistema ao adicionar itens ao carrinho
        </th>
    </tr>
    <tr>
        <th>
            Método de Execução:
        </th>
        <th colspan="2">
            Manual (x) 
        </th>
        <th colspan="2">
            Automática ( ) 
        </th>
    </tr>
    <tr>
        <th>
            Técnica:
        </th>
        <th colspan="2">
            Teste Estrutural ( )
        </th>
        <th colspan="2">
            Teste Funcional (x)
        </th>
    </tr>
    <tr>
        <th>
            Nível de Teste:
        </th>
        <th>
            Integração ( )
        </th>
        <th>
            Sistema ( )
        </th>
        <th>
            Unidade (x)
        </th>
    </tr>
    <tr>
        <th>
            Responsável:
        </th>
        <th colspan="4">
            Isaque Ferreira
        </th>
    </tr>
</table>

### 3.2 Analisar o funcionamento da barra de pesquisas (REQ-2)

Durante o processo de testagem da barra de pesquisa, a mesma forneceu informações úteis em seu estado vazio, indicando que era possível buscar produtos por nome ou descrição. Seguindo essas sugestões, realizei testes e constatei que a pesquisa filtra os resultados perfeitamente, incluindo valores numéricos referentes ao peso da carne.

No entanto, ao pesquisar por itens não mencionados explicitamente na descrição do pedido, como "porções", "refrigerantes", "bebidas", "franguinhos" e "lanche", esses itens não eram filtrados, apesar de estarem presentes no cardápio. Esta limitação na funcionalidade da barra de pesquisa torna o processo de encontrar itens específicos mais lento e difícil para o usuário, que precisa saber exatamente o nome do prato para localizar o que deseja.

<br/>
<table>
    <tr>
        <th>
            Objetivo:
        </th>
        <th colspan="4">
            Testar Funcionamento da Barra de Pesquisas
        </th>
    </tr>
    <tr>
        <th>
            Método de Execução:
        </th>
        <th colspan="2">
            Manual (x) 
        </th>
        <th colspan="2">
            Automática ( ) 
        </th>
    </tr>
    <tr>
        <th>
            Técnica:
        </th>
        <th colspan="2">
            Teste Estrutural ( )
        </th>
        <th colspan="2">
            Teste Funcional (x)
        </th>
    </tr>
    <tr>
        <th>
            Nível de Teste:
        </th>
        <th>
            Integração ( )
        </th>
        <th>
            Sistema ( )
        </th>
        <th>
            Unidade (x)
        </th>
    </tr>
    <tr>
        <th>
            Responsável:
        </th>
        <th colspan="4">
            Isaque Ferreira
        </th>
    </tr>
</table>

### 3.3 Analisar a funcionalidade do Cadastro de Endereço

O mecanismo de cadastrar endereços do site é bem intolerante a falhas, sendo a maioria dos seus campos implementados como uma lista-suspensa, diminuindo a possibilidade do usuário entrar com algum dado incorreto ou indevido. O botão de cadastrar endereço funciona corretamente e fornece a oportunidade de cadastrar vários endereços. Entretanto a hamburgueria faz entregas apenas na região 5 de Vila Velha, tornando a opção "Outros" para o cadastro do endereço, desnecessário.

<br/>
<table>
    <tr>
        <th>
            Objetivo:
        </th>
        <th colspan="4">
            Testar Funcionalidade do Cadastro de Endereços de Entrega
        </th>
    </tr>
    <tr>
        <th>
            Método de Execução:
        </th>
        <th colspan="2">
            Manual (x) 
        </th>
        <th colspan="2">
            Automática ( ) 
        </th>
    </tr>
    <tr>
        <th>
            Técnica:
        </th>
        <th colspan="2">
            Teste Estrutural ( )
        </th>
        <th colspan="2">
            Teste Funcional (x)
        </th>
    </tr>
    <tr>
        <th>
            Nível de Teste:
        </th>
        <th>
            Integração ( )
        </th>
        <th>
            Sistema ( )
        </th>
        <th>
            Unidade (x)
        </th>
    </tr>
    <tr>
        <th>
            Responsável:
        </th>
        <th colspan="4">
            Isaque Ferreira
        </th>
    </tr>
</table>

## 4 - Recursos

Esta seção descreve os recursos de ambiente de teste (hardware e software) necessários para execução dos testes que serão descritos nas subseções que seguem.

### 4.1 - Hardware

<table>
    <tr>
        <th>
        Modelo do Notebook:
        </th>
        <th>
        Acer Nitro 5
        </th>
    </tr>
    <tr>
        <th>
        Processador:
        </th>
        <th>
        AMD Ryzen 7 5800H
        </th>
    </tr>
    <tr>
        <th>
        Memória RAM:
        </th>
        <th>
        8 GB 
        </th>
    </tr>
</table>

### 4.2 - Software

<table>
    <tr>
        <th colspan="3">
        Sistema Operacional:
        </th>
        <th colspan=3>
        Windows 11 Single Language - 64bits
        </th>
    </tr>
    <tr>
        <th colspan=3>
        Navegador(es):
        </th>
        <th>
        Google Chrome (x)
        </th>
        <th>
        Microsoft Edge (x)
        </th>
        <th>
        OperaGX (x)
        </th>
    </tr>
</table>

## 5 - Níveis de Criticidades de Defeito

| Nível de Criticidade | Descrição | Exemplo | Tempo de Resolução |
|----------------------|-----------|---------|--------------------|
|GRAV-1 (Crítico) | Defeitos que causam falhas catastróficas no sistema, tornando-o inutilizável. Requerem correção imediata. | Um bug que impede o sistema de iniciar ou processar transações fundamentais. | 2-4 horas
|GRAV-2 (Alto) | Defeitos que afetam funcionalidades principais, mas não causam a falha total do sistema. Eles devem ser corrigidos com alta prioridade. |  Um bug em um botão de envio de um formulário crítico, mas com uma solução alternativa disponível. | 1 dia
|GRAV-3 (Médio) | Defeitos que afetam funcionalidades secundárias ou causam inconveniências significativas. Correção é necessária, mas não urgente. | Uma mensagem de erro que não é exibida corretamente, mas não impede a continuidade do trabalho. | 3-5 dias
|GRAV-4 (Baixo) | Defeitos menores que causam pequenos inconvenientes ou afetam a estética do sistema. Podem ser corrigidos em ciclos de manutenção regulares. | Pequenos erros de formatação ou gráficos desalinhados. | 1 mês
|GRAV-5 (Trivial) |Defeitos cosméticos que não afetam a funcionalidade ou usabilidade do sistema. São tratados como melhorias e não têm urgência. | Erros tipográficos ou ajustes mínimos de layout. | 2-3 meses

## 6 - Componentes

| Aluno                         | Professora                | Turma | Disciplina                     |
| ----------------------------- | ------------------------- | ----- | ------------------------------ |
| Isaque Ferreira de Paula Reis | Gabriela Martins de Jesus | CC5N  | Qualidade e Testes de Software |

[Entrega 1 - Teste de Software](https://github.com/Fisaq/universidade_vila_velha/edit/main/Qualidade%20de%20Software/Entrega%2001.md)
[Entrega 2 - Teste de Software](https://github.com/Fisaq/universidade_vila_velha/edit/main/Qualidade%20de%20Software/Entrega%2002.md)

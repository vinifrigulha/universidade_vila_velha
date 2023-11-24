# Algoritmo de Fila em C

Um algoritmo de fila (queue) é uma estrutura de dados que segue a política "primeiro a entrar, primeiro a sair" (FIFO - First-In-First-Out). Isso significa que o primeiro elemento adicionado à fila será o primeiro a ser removido. As filas são amplamente utilizadas em ciência da computação para gerenciar tarefas, processos, aguardar recursos e muito mais. Basicamente, uma fila possui duas operações principais:

### Enfileiramento (enqueue):
Isso envolve adicionar um elemento à fila. O novo elemento é adicionado à parte de trás (ou final) da fila.

### Desenfileiramento (dequeue):
Isso envolve remover um elemento da fila. O elemento na frente (ou início) da fila é removido.

Além disso, as filas geralmente suportam as seguintes operações:

### Verificação se a fila está vazia:
Isso permite verificar se a fila não contém elementos.

### Verificação se a fila está cheia:
Em algumas implementações, é possível definir um tamanho máximo para a fila e verificar se ela atingiu esse limite.

### Obter o tamanho da fila:
Isso permite saber quantos elementos estão atualmente na fila.

## Aqui está um exemplo de como funciona uma fila em um cenário simplificado:

Suponha que você está simulando uma fila de pessoas em uma loja. Quando uma nova pessoa entra na loja, ela se coloca no final da fila. Quando o atendente chama alguém para ser atendido, a primeira pessoa da fila é a próxima a ser atendida (primeiro a entrar, primeiro a sair). À medida que as pessoas são atendidas e saem da fila, a fila diminui até que esteja vazia.

A implementação de uma fila pode ser feita usando uma matriz (como no exemplo em C acima) ou usando uma lista encadeada. A escolha da implementação depende das necessidades específicas do programa.

No contexto da programação, as filas são úteis para muitos cenários, como controle de tarefas em sistemas operacionais, impressão de documentos em impressoras, gerenciamento de pedidos em sistemas de comércio eletrônico, entre outros. Elas garantem que as operações sejam processadas na ordem correta em que foram recebidas, o que é fundamental para muitas aplicações.

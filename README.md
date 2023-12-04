# projeto_final
Instruções do projeto
Para o controle dos veículos que circulam em uma determinada cidade, a Secretaria dos Transportes criou o seguinte registro padrão:

 Proprietário:__________________________ Combustível:____________________

 Modelo: _____________________________ Cor: __________________________

Nº chassi: _________________________ Ano: __________ Placa: ____________

Em que:

• Combustível pode ser álcool, diesel ou gasolina;

• Placa possui os três primeiros valores alfabéticos e os quatro restantes valores numéricos ou seja 7 caracteres na placa.

Sabendo que não temos uma definição do número máximo de veículos da cidade e que é preciso armazenar todos os valores em uma lista encadeada simples, construa:

a. Uma função que liste todos os proprietários cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel. (1,0 ponto)

b. Uma função que liste todas as placas que comecem com a letra J e terminem com 0, 2, 4 ou 7 e seus respectivos proprietários. (1,0 ponto)

c. Uma função que liste o modelo e a cor dos veículos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par. (1,0 ponto)

d. Uma função que permita a troca de proprietário com o fornecimento do número do chassi apenas para carros com placas que não possuam nenhum dígito igual a zero. (1,0 ponto)

Explicação do codigo feito

Definição de Tipos e Estruturas:

Vou começar definindo um enum chamado "TipoCombustivel" para representar os tipos de combustíveis possíveis: Álcool, Diesel e Gasolina. 

Em seguida, criei uma estrutura chamada "Veiculo" para armazenar informações sobre um veículo, como proprietário, combustível, modelo, cor, número do chassi, ano e placa. Essa estrutura também inclui um ponteiro para o próximo veículo na lista. 

Função "validaCombustivel":

Essa função converte um caractere em um tipo de combustível usando um switch-case. Se o caractere não corresponder a nenhum dos tipos, o programa exibirá uma mensagem de erro e encerrará com falha. 

Função "criarVeiculo":

Aloco dinamicamente memória para um novo veículo. Copio os parâmetros passados para os campos da estrutura. Configuro o ponteiro para o próximo veículo como nulo. Retorna o ponteiro para o novo veículo. 

Função "validarPlaca": tem como objetivo verificar se a placa possui o tamanho correto, se os primeiros três caracteres são alfabéticos e se os últimos quatro são numéricos. Caso a validação falhe, são exibidas mensagens de erro. 

A função "cadastrarVeiculo" solicita ao usuário informações sobre o veículo, em seguida chama a função "validaCombustivel" para converter o caractere do combustível. Também chama a função "validarPlaca" para garantir que a placa seja válida. Por fim, chama a função "criarVeiculo" para criar um novo veículo e adicioná-lo à lista encadeada. 

A função "imprimirLista" verifica a lista encadeada e imprime os detalhes de cada veículo. 

As funções "funcaoA", "funcaoB", "funcaoC" e "funcaoD" implementam operações específicas de acordo com os requisitos definidos. É necessário utilizar uma lista encadeada para percorrer os veículos e realizar as operações desejadas. 

A função main:
Inicializa a lista de veículos como vazia e define um loop de menu para interagir com o usuário.
O usuário tem a opção de cadastrar veículos, imprimir uma lista ou realizar as funções especificadas nos requisitos.
O programa continua em execução até que o usuário escolha a opção 0 (sair).
No final do programa, libera a memória alocada para os veículos.
Este é um programa abrangente que utiliza conceitos de estruturas, listas encadeadas e operações específicas nessas estruturas. O menu na função principal proporciona uma interação amigável com o usuário para realizar várias operações relacionadas aos veículos.


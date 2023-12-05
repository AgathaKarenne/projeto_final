Instruções
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

O código consiste em um programa em C que gerencia uma lista ligada de automóveis, sendo que cada um é representado por uma estrutura chamada Veiculo. Cada veículo possui informações como proprietário, combustível, modelo, cor, número do chassi, ano e placa. Adicionalmente, existem quatro funções extras que realizam operações específicas na lista de automóveis.
A estrutura Veiculo inclui campos para armazenar as informações de um automóvel e um ponteiro para o próximo automóvel na lista.
2. Função validaCombustivel: recebe um caractere que representa o tipo de combustível e retorna o correspondente enum. Caso o caractere seja inválido, o programa é encerrado.
3. Função criarVeiculo: tem como objetivo criar um novo automóvel, alocando dinamicamente a memória necessária e preenchendo os campos com os parâmetros fornecidos.
4. Função validarPlaca: é responsável por garantir que a placa do automóvel atenda a certos critérios, como ter 7 caracteres, ter letras nos três primeiros caracteres e números nos quatro últimos.
5. Função cadastrarVeiculo: solicita ao usuário as informações, valida a placa e cria um novo veículo. Em seguida, adiciona esse veículo à lista encadeada.
6. Função imprimirLista: percorre-se uma lista encadeada e imprimem-se as informações de cada veículo.As funções de A a D são operações específicas na lista de veículos. Isso inclui listar os donos de carros movidos a diesel, listar as placas que atendem a critérios específicos, listar os modelos e núcleos dos veículos com características determinadas nas placas, e permitir a troca de proprietário com base no número do chassi.
7. Funções A, B, C e D:Essas funções executam operações específicas na lista de veículos com base nos critérios estabelecidos para cada uma.
8. Loop principal (menu):O programa principal possui um loop que apresenta um menu ao usuário, permitindo-lhe escolher entre diferentes opções, como cadastrar um veículo, imprimir uma lista ou executar uma das funções A, B, C ou D. O loop continua até que o usuário escolha a opção "0" para sair. No final do programa, a memória alocada dinamicamente para os veículos é liberada.

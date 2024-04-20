```markdown
# Sistema de Cadastro de Veículos

Este é um sistema de cadastro de veículos desenvolvido em C. Ele permite ao usuário cadastrar veículos com informações como proprietário, combustível, modelo, cor, número do chassi, ano e placa. Além disso, oferece funcionalidades extras para manipular os dados cadastrados.

## Funcionalidades Principais

1. **Cadastrar Veículo**: Permite ao usuário cadastrar um novo veículo, inserindo todas as informações necessárias.

2. **Imprimir Lista de Veículos**: Mostra na tela todos os veículos cadastrados, exibindo suas informações.

## Funcionalidades Extras

### a. Proprietários de Carros Diesel de 2010 ou Posterior
- Lista todos os proprietários cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel.

### b. Placas que Começam com 'J' e Terminam com 0, 2, 4 ou 7
- Lista todas as placas que começam com a letra 'J' e terminam com 0, 2, 4 ou 7, juntamente com seus respectivos proprietários.

### c. Modelos e Cores dos Veículos com Placas Específicas
- Lista o modelo e a cor dos veículos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par.

### d. Troca de Proprietário por Número de Chassi
- Permite a troca de proprietário de um veículo fornecendo apenas o número do chassi, mas somente para carros com placas que não possuam nenhum dígito igual a zero.

## Instruções de Uso

1. Ao iniciar o programa, você será apresentado com um menu de opções.
2. Escolha a opção desejada digitando o número correspondente e pressionando Enter.
3. Siga as instruções apresentadas na tela para cadastrar veículos, imprimir a lista de veículos ou acessar as funcionalidades extras.
4. Para sair do programa, escolha a opção '0' no menu principal.

## Como Compilar e Executar

Para compilar o programa, utilize o compilador C de sua escolha, por exemplo, o `gcc`. Execute o seguinte comando no terminal:

```
gcc -o cadastro_veiculos cadastro_veiculos.c
```

Para executar o programa compilado, use o seguinte comando:

```
./cadastro_veiculos
```

## Observações

- Certifique-se de fornecer informações válidas ao cadastrar um veículo, seguindo as orientações apresentadas na tela.
- As funcionalidades extras proporcionam análises específicas dos dados cadastrados, auxiliando na identificação de padrões ou características relevantes dos veículos.

```

Esse README oferece uma visão geral do sistema, instruções de uso, informações sobre as funcionalidades extras e orientações sobre como compilar e executar o programa. Espero que esteja útil! Se precisar de mais alguma coisa, estarei por aqui.

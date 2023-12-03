#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef enum
{
    ALCOOL,
    DIESEL,
    GASOLINA
} Combustivel;

typedef struct Veiculo
{
    char proprietario[50];
    Combustivel combustivel;
    char modelo[50];
    char cor[20];
    float nChassi;
    int ano;
    char placa[8]; // os três primeiros caracteres devem conter valores alfabéticos e os quatro últimos devem ter valores numéricos
    struct Veiculo *proximo;
} Veiculo;

Combustivel validaCombustivel(char combustivel)
{
    switch (combustivel)
    {
    case 'a':
        return ALCOOL;
    case 'd':
        return DIESEL;
    case 'g':
        return GASOLINA;
    default:
        printf("Combustivel invalido! Tente novamente\n");
        exit(EXIT_FAILURE);
    }
}

Veiculo *criarVeiculo(char proprietario[], Combustivel combustivel, char modelo[], char cor[], float nChassi, int ano, char placa[])
{
    Veiculo *novoVeiculo = (Veiculo *)malloc(sizeof(Veiculo));
    if (novoVeiculo == NULL)
    {
        perror("Erro ao alocar memória para o veículo");
        exit(EXIT_FAILURE);
    }

    // Copiar os campos para o novo veículo
    strcpy(novoVeiculo->proprietario, proprietario);
    novoVeiculo->combustivel = combustivel;
    strcpy(novoVeiculo->modelo, modelo);
    strcpy(novoVeiculo->cor, cor);
    novoVeiculo->nChassi = nChassi;
    novoVeiculo->ano = ano;
    strcpy(novoVeiculo->placa, placa);
    novoVeiculo->proximo = NULL;

    return novoVeiculo;
}

int validarPlaca(char placa[])
{
    if (strlen(placa) != 8)
    {
        printf("A placa nao possui 8 caracteres.\n");
        return 1;
    }

    for (int i = 0; i < 3; ++i)
    {
        if (!((placa[i] >= 'A' && placa[i] <= 'Z') || (placa[i] >= 'a' && placa[i] <= 'z')))
        {
            printf("Os tres primeiros caracteres nao sao alfabeticos.\n");
            return 1;
        }
    }

    for (int i = 4; i < 8; ++i)
    {
        if (!(placa[i] >= '0' && placa[i] <= '9'))
        {
            printf("Os quatro ultimos caracteres nao sao numericos.\n");
            return 1;
        }
    }
    printf("Placa valida!\n");
    return 0;
}

void cadastrarVeiculo(Veiculo **lista)
{
    char proprietario[50];
    Combustivel combustivel;
    char modelo[50];
    char cor[20];
    float nChassi;
    int ano;
    char placa[8];

    printf("Proprietário: ");
    scanf("%s", proprietario);
    printf("Combustível (a - Álcool, d - Diesel, g - Gasolina): ");
    scanf(" %c", &combustivel);
    combustivel = validaCombustivel(combustivel);
    printf("Modelo: ");
    scanf("%s", modelo);
    printf("Cor: ");
    scanf("%s", cor);
    printf("Número do Chassi: ");
    scanf("%f", &nChassi);
    printf("Ano: ");
    scanf("%d", &ano);
    printf("Placa: (somente 8 caracteres)");
    scanf("%s", placa);

    validarPlaca(placa);

    Veiculo *novoVeiculo = criarVeiculo(proprietario, combustivel, modelo, cor, nChassi, ano, placa);

    novoVeiculo->proximo = *lista;
    *lista = novoVeiculo;
}

void imprimirLista(Veiculo *lista)
{
    Veiculo *atual = lista;
    while (atual != NULL)
    {
        printf("Proprietário: %s\n", atual->proprietario);
        printf("Combustível: ");
        switch (atual->combustivel)
        {
        case ALCOOL:
            printf("Álcool\n");
            break;
        case DIESEL:
            printf("Diesel\n");
            break;
        case GASOLINA:
            printf("Gasolina\n");
            break;
        }
        printf("Modelo: %s\n", atual->modelo);
        printf("Cor: %s\n", atual->cor);
        printf("Número do Chassi: %.2f\n", atual->nChassi);
        printf("Ano: %d\n", atual->ano);
        printf("Placa: %s\n", atual->placa);
        printf("\n");

        atual = atual->proximo;
    }
}
// agora que criamos a lista encadeada simples fazemos as funcoes extras
// a. Uma função que liste todos os proprietários cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel. (1,0 ponto)
void funcaoA(Veiculo *lista)
{
    Veiculo *atual = lista;
    printf("Proprietarios cujos carros sao do ano de 2010 ou mais e que sejam movidos a diesel\n");

    while (atual != NULL)
    {
        if (atual->ano >= 2010 && atual->combustivel == DIESEL)
        {
            // Liste os proprietarios
            printf("Proprietário: %s\n", atual->proprietario);
            printf("Combustível: Diesel\n");
            printf("Modelo: %s\n", atual->modelo);
            printf("Cor: %s\n", atual->cor);
            printf("Número do Chassi: %.2f\n", atual->nChassi);
            printf("Ano: %d\n", atual->ano);
            printf("Placa: %s\n", atual->placa);
            printf("\n");
        }
        atual = atual->proximo;
    }
}
main()
{
    Veiculo *listaVeiculos = NULL;
    int opcao;

    do
    {
        printf("Escolha uma opcao\n");
        printf("1:Cadastrar veiculo\n");
        printf("2:Imprimir lista\n");
        printf("3:funcao A\n");
        printf("0:Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarVeiculo(&listaVeiculos);
            break;
        case 2:
            imprimirLista(listaVeiculos);
            break;
        case 3:
            funcaoA(listaVeiculos);
            break;
        default:
            break;
        }
    } while (opcao != 0);

    // Liberar a memória alocada ao final do programa
    while (listaVeiculos != NULL)
    {
        Veiculo *temp = listaVeiculos;
        listaVeiculos = listaVeiculos->proximo;
        free(temp);
    }
}

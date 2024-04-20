```markdown
# Sistema de Avaliação de Alunos

## Descrição

O Sistema de Avaliação de Alunos é uma aplicação simples em C desenvolvida para calcular a média e determinar a situação dos alunos com base em suas notas. Esta ferramenta é útil para professores ou instituições educacionais que desejam automatizar o processo de avaliação de alunos.

O sistema lê os dados dos alunos de um arquivo CSV de entrada, calcula a média das notas e determina se o aluno está aprovado ou reprovado. Os resultados são então escritos em um novo arquivo CSV de saída.

## Funcionalidades

- Leitura dos dados dos alunos a partir de um arquivo CSV.
- Cálculo da média das notas de cada aluno.
- Determinação da situação do aluno (aprovado ou reprovado) com base na média.
- Escrita dos resultados no formato CSV em um novo arquivo.

## Instalação

1. Certifique-se de ter o compilador GCC instalado em seu sistema.
2. Clone o repositório:

```bash
git clone https://github.com/seu_usuario/sistema-avaliacao-alunos.git
```

3. Navegue até o diretório do projeto:

```bash
cd sistema-avaliacao-alunos
```

4. Compile o código-fonte:

```bash
gcc main.c -o sistema_avaliacao
```

5. Certifique-se de que os arquivos `DadosEntrada.csv` e `SituacaoFinal.csv` estão presentes na pasta do projeto.

## Uso

Execute o programa compilado `sistema_avaliacao`. O programa lerá os dados dos alunos do arquivo `DadosEntrada.csv`, calculará as médias e determinará as situações dos alunos, e então escreverá os resultados no arquivo `SituacaoFinal.csv`.

```bash
./sistema_avaliacao
```

## Exemplo de Entrada

O arquivo de entrada `DadosEntrada.csv` deve seguir o seguinte formato:

```
Nome,Telefone,Curso,Nota1,Nota2
Maria,(99) 99999-9999,Engenharia,7.5,8.0
João,(99) 88888-8888,Medicina,6.0,5.5
```

## Contribuindo

Contribuições são bem-vindas! Se você tiver ideias para melhorar este projeto, sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este projeto é licenciado sob a [Licença MIT](LICENSE).

```

Esse README mais detalhado fornece uma visão geral do projeto, incluindo funcionalidades, exemplos de entrada, instruções de instalação e uso, além de incentivar a contribuição e indicar a licença. Certifique-se de substituir "seu_usuario" pelo seu nome de usuário real.

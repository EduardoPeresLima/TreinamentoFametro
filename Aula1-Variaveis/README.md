### Tipos primitivos de Variáveis
`int`: Número inteiro. Ex: `-123`, `500`, `0`, `892`
`char`: UM caractere. Sempre entre aspas simples. Ex: `'a'`, `'['`, `'$'`, `'7'`
`bool`: Afirmação, só pode ser verdadeiro ou falso. Ex: `false`, `true`
`double`: Número quebrado, o separador decimal é o PONTO. Ex: `2.349`, `-4123.978`

### Leitura e Escrita de dados
`cout`: Mostra uma informação na tela. Ex: 
- `cout << "Ola Mundo!" << endl;` mostra a informação "Ola Mundo!" na tela
- `cout << nome_de_variavel << endl;` mostra o valor armazenado na variável

É possível mostrar várias informações em sequência. Ex:
- `int idade = 50;` declara uma variável
- `cout << "Voce tem: " << idade << " anos!" << endl` resulta em `Voce tem 50 anos!`

`endl`: É uma quebra de linha, muito usado ao final do `cout`

`cin`: Lê uma informação do usuário e armazena em uma (ou mais) variável(is). Ex:
- `int idade, peso;` declara duas variáveis
- `cin >> idade >> peso` lê do usuário dois valores e armazena nas variáveis

## Extra
Essas informações não são essenciais pra quem está iniciando, mas será importante voltar aqui quando o estudante tiver mais experiência.
### Outro tipos primitivos
`float`: Número quebrado assim como `double`, mas geralmente usamos `double` por ser mais preciso.
`void`: Quando uma função não retorna nada, usamos tipo `void`
`long long`: Número inteiro, bem maior que o `int`
- Em algumas questões é importante perceber que em algum momento, certos valores podem ultrapassar o limite do `int`, sendo necessário usar o `long long`
- O `int` tem 32 bits de aramazenamento, então armazena qualquer valor no intervalo fechado:
    - `[-2^31, 2^31-1]`
    - `[−2.147.483.648, 2.147.483.647]` 
    - Aproximadamente `[-10^9, 10^9]`
    - Se tentar aramazenar um valor fora deste intervalo, vai gerar `overflow` e dar erro no programa
- O `long long` tem 64 bits de armazenamento, logo:
    - `[-2^63, 2^63-1]`
    - `[-9.223.372.036.854.775.808, 9.223.372.036.854.775.807]` 
    - Aproximadamente `[-10^18, 10^18]`

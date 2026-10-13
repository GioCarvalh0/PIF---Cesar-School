# Respostas Teóricas — Capítulo 3: Laços de Repetição

## Q01 — Diferenças fundamentais e tempo de avaliação de laços

### a)
O `while` verifica a condição antes de executar o bloco. Por isso, se a condição for falsa desde o início, o bloco executa zero vezes. O `do-while` executa o bloco primeiro e só depois verifica a condição; assim, o bloco executa pelo menos uma vez.

### b)
- `for`: é adequado quando a repetição tem uma inicialização, uma condição e uma atualização bem definidas, como percorrer um intervalo de números.
- `while`: é indicado quando a repetição depende de uma condição e não se sabe previamente quantas iterações serão necessárias, como ler dados até receber um valor sentinela.
- `do-while`: é apropriado quando o bloco precisa acontecer pelo menos uma vez, como exibir um menu ou solicitar uma entrada que deve ser validada.

### c)
`while (condicao);` normalmente é válido sintaticamente em C, mas pode representar um erro lógico. O ponto-e-vírgula forma o corpo vazio do laço. Se `condicao` for verdadeira e nunca se tornar falsa, o programa fica preso em um laço vazio, sem executar o comando seguinte. Se a condição puder mudar por efeitos colaterais ou por outra ação concorrente, o laço pode terminar quando ela se tornar falsa.

## Q02 — Escopo e tempo de vida de variáveis de bloco

### a)
A variável `soma` foi declarada dentro do bloco do `for`, entre as chaves. Seu escopo termina ao fechar esse bloco; portanto, o `printf` que está fora dele não pode acessar `soma`. O compilador normalmente informa que o identificador não foi declarado nesse escopo.

### b)
Mesmo colocando o `printf` dentro do laço, `int soma = 0;` reinicializaria `soma` para zero a cada iteração. Assim, em cada passagem, seria calculado apenas o quadrado do valor atual de `i`, e não a soma acumulada dos quadrados.

### c) Código corrigido

```c
#include <stdio.h>

int main(void) {
    int i;
    int soma = 0;

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    return 0;
}
```

A variável `soma` é declarada antes do laço, então fica visível dentro do `for` e depois dele, até o fim do bloco de `main`. O escopo determina onde um identificador pode ser usado. O tempo de vida é o período durante a execução em que o objeto existe; uma variável automática local existe enquanto o bloco em que foi declarada está ativo. Nesse exemplo, `soma` permanece viva durante todo o `main`.

## Q03 — Flexibilidade do laço `for` e omissão de expressões

### a)
A sequência é `36 18 9 4 2 1`. A divisão é inteira porque `a` é inteiro: `36 / 2 = 18`, `18 / 2 = 9`, `9 / 2 = 4`, `4 / 2 = 2`, `2 / 2 = 1` e depois `1 / 2 = 0`, encerrando o laço. O `printf` do trecho imprime cada valor seguido de tabulação.

### b)
O trecho lê caracteres até que o caractere lido seja `'X'`. Enquanto o caractere for diferente de `'X'`, imprime `ch + 1`, isto é, o caractere cujo código numérico é uma unidade maior, conforme a codificação usada. Por exemplo, para letras ASCII, `a + 1` corresponde a `b`. Os parênteses em `(ch = getch())` garantem que a atribuição seja feita primeiro e que o valor atribuído seja comparado com `'X'`. Sem os parênteses, a precedência dos operadores faria a expressão ser interpretada de outra maneira. Observação: `getch()` não faz parte da biblioteca padrão C; depende do ambiente, geralmente de `<conio.h>`.

### c)
É possível usar `break` dentro do corpo do laço para sair dele. Como o trecho original não tem um bloco de comandos, pode-se colocar as instruções entre chaves e testar uma condição de saída, por exemplo, ler uma opção do usuário e executar `break` quando ela indicar que deseja parar.

## Questão 04 — `break` versus `continue`

### a)
`break` encerra imediatamente o laço mais interno em que aparece. A execução continua na primeira instrução depois desse laço.

### b)
Em um laço `for`, `continue` pula o restante do corpo e segue para a expressão de incremento/atualização; depois disso, a condição de teste é avaliada novamente.

### c)
Em laços aninhados, `break` encerra somente o laço mais interno que contém a instrução. O laço externo continua, salvo se também houver lógica para encerrá-lo.

## Q05 — Operador vírgula e múltiplas variáveis de controle

### a)
O laço executa 5 iterações: `i` começa em 0 e `j` em 10; a cada iteração `i` aumenta e `j` diminui. As condições verdadeiras são `0 < 10`, `1 < 9`, `2 < 8`, `3 < 7` e `4 < 6`. Depois da atualização, `i = 5` e `j = 5`, então `i < j` é falso.

### b) Saída exata

```text
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

### c) Reescrita com `while`

```c
int i = 0, j = 10;

while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```

## Q06 — Laço sem corpo e incremento pós-fixado

### a)
O valor final impresso é `6`.

### b)
O operador pós-fixado `x++` usa o valor antigo de `x` na comparação e incrementa `x` em seguida:
1. Com `x = 0`, compara `0 < 5` (verdadeiro), depois `x` passa a 1.
2. Com `x = 1`, compara `1 < 5` (verdadeiro), depois `x` passa a 2.
3. Com `x = 2`, compara `2 < 5` (verdadeiro), depois `x` passa a 3.
4. Com `x = 3`, compara `3 < 5` (verdadeiro), depois `x` passa a 4.
5. Com `x = 4`, compara `4 < 5` (verdadeiro), depois `x` passa a 5.
6. Com `x = 5`, compara `5 < 5` (falso), mas o incremento ainda ocorre; `x` passa a 6 e o laço termina.

### c) Reescrita explícita

```c
int x = 0;

while (x < 5) {
    x++;
}
x++; /* reproduz o incremento ocorrido na última avaliação falsa */

printf("Valor final de x = %d\n", x);
```

Essa reescrita mantém o resultado final `6`: após cinco iterações com condição verdadeira, `x` vale 5; a última avaliação equivalente ao teste pós-fixado incrementa para 6 antes de encerrar.

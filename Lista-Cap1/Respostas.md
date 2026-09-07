# Questões escritas:

## Q04

Erro 1 [ #include <stdlib.h>; ]:
* A diretiva não precisa de ponto e virgula no final.

Erro 2 [ int Main{} ]:
* A função main deve ser escrita com 'm' minúsculo
* Para declarar os parâmetros o correto seria abrir parenteses, e não chaves.

Erro 3 [ Abertura da função ]:
* Para abrir o bloco de código da função o correto seria abrir chaves, e não parenteses.

Erro 4 [ printf( Existem %d semanas no ano.,52); ]:
* O texto antes da virgula, e dentro da abertura de parâmetros de printf() deveria estar dentro de aspas duplas para a função print funcionar.

Erro 5 [ cout << endl; ]:
* Esse comando não existe em C, ele é nativo do C++.

Código correto:
```
#include <stdio.h>
#include <stdlib.h>
int Main()
{
    printf("Existem %d semanas no ano.", 52);
    system("PAUSE");
    return 0;
}
```

## Q05 

Diretivas que faltam:
* #include <stdio.h>
* #include <stdlib.h>

Elementos
* C é fortemente tipado, logo a função main precisa ser inicializada, antes de tudo, com um 'int'.
* Para finalizar corretamente a função main é necessário um 'return 0;' ao fim do bloco de código. 

## Q06 

Diretivas que faltam:
* #include <stdio.h>
* #include <stdlib.h>

Erros de sintaxe:
* C é fortemente tipado, logo a função main precisa ser inicializada, antes de tudo, com um 'int'.
*  Para finalizar corretamente a função main é necessário um 'return 0;' ao fim do bloco de código. 
* Para atribuir valor a várias variáveis em uma única linha, as variáveis devem ser separadas por virgula. E a finalização da linha com ";".
* No printf() falta uma aspa dupla para fechar a menssagem. Deve ficar depois do \n.


## Q07 

### Letra a:
```

    Bom dia! Shirley.
```
### Letra b:
```
Você já tomou café?

```
### Letra c:
```


A solução não existe!
Não insista.
```
### Letra d:
```
Duas    linhas  de  saída
ou  uma?
```
### Letra e:
``` 
um
doi
três

```

## Q08 

* Inicialmente são incluídas as diretivas <stdio.h> e <stdlib.h>, que permitem utilizar as funções printf() e system().

* A função main() é definida e as chaves delimitam o bloco de comandos que será executado pelo programa.

* O printf() apresenta a mensagem indicada no código e, em seguida, o comando system() exibe as instruções para continuar a execução.

* Ao chegar no return 0;, o programa encerra sua execução normalmente.

 Oque será impresso:

```
    "Primeiro programa"Pressione qualquer tecla para continuar...
```

## Q09 

Oque o compilador vê:

* Primeiro printf() [com três %c]: 

    * O primeiro %c recebe o valor \n, que provoca uma quebra de linha.

    * O segundo %c recebe \t, responsável por inserir uma tabulação (TAB).

    * O terceiro %c recebe \", fazendo com que uma aspa dupla seja exibida na tela.

* Segundo printf() [com um %c]:

    * O %c espera receber um valor correspondente a um caractere, porém o \" foi colocado entre aspas duplas e, dessa forma, foi interpretado como uma string, e não como um caractere.

    * Como o tipo fornecido não corresponde ao esperado pelo especificador %c, ocorre um comportamento indefinido. Por isso, o resultado pode variar de acordo com o compilador e o ambiente utilizado.

Oque foi impresso:

* No caso da minha máquina, testei o código e o resultado apresentado foi o seguinte [pode variar devido ao segundo printf()]:

```
    "Primeiro programa"Pressione qualquer tecla para continuar. . .
```
## Q10 

Letra b: Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).
* A linguagem C é case sensitive. Isso significa que caracteres em caixa alta e caixa baixa são considerados diferentes.

## Q11 

```
'\r'     | Constante de caractere         |char
2130     | Constante inteira decimal      |int
-123     | Constante inteira decimal      |int
33.28    | Constante de ponto flutuante   |double
0XFA     | Constante inteira hexadecimal  |int
0101     | Constante inteira octal        |int
2.0E30   | Constante de ponto flutuante   |double
'\xDC'   | Constante de caractere         |char
'\"'     | Constante de caractere         |char
'\\'     | Constante de caractere         |char
'F'      | Constante de caractere         |char
O        | É um identificador             |
'\0'     | Constante de caractere         |char
"F"      | Constante string               |char[]
-4567.89 | Constante de ponto flutuante   |double
```

## Q12 

```
int a;           | Correto   | Declaração válida.
float b;         | Correto   | Declaração válida.
double float c;  | Incorreto | double e float são tipos distintos e não podem ser utilizados juntos dessa maneira.
unsigned char d; | Correto   | Declaração válida, declara um caractere sem sinal.
unsigned e;      | Correto   | Declaração válida. Quando não é passado o tipo do unsigned, o C entende que é unsigned int.
long float f;    | Incorreto | long não pode ser utilizado como modificador de float; pode ser utilizado com double.
long g;          | Correto   | Declaração válida.
long double h;   | Correto   | long double é um tipo válido de ponto flutuante.
``` 

## Q13 

Letra C

## Q14

Letra A

## Q15

Letra C

## Q16 

Letra C

## Q17

As alternativas A,B e C estão corretas.  O C é bem flexivél com espaçamentos, não alterando em nada quando for compilado.
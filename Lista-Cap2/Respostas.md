## Q01

* Letra A:
O valor exibido será 2.
O valor armazenado e: 2

* Letra B:
A variável valor_inteiro foi declarada como int. Ao receber o valor 2.97, ocorre uma conversão implícita de ponto
flutuante para inteiro. A parte decimal é descartada, resultando em 2. Esse comportamento é uma conversão
implícita de tipos com truncamento da parte decimal.

* Letra C:
Para manter a precisão, pode-se utilizar float ou double. Caso a intenção seja arredondar antes de converter para
inteiro, pode-se utilizar uma função de arredondamento da biblioteca matemática, como round().

float valor = 2.97;
double outroValor = 2.97;
/* int valorInteiro = (int)round(2.97); */



## Q02

* Letra A:
A biblioteca <conio.h> não faz parte do padrão ANSI C. Funções como getch() e getche() dependem de
implementações e ambientes específicos, reduzindo a portabilidade para sistemas como Linux, macOS e servidores.

* Letra B:
A biblioteca padrão <stdio.h> fornece principalmente getchar() para leitura de um caractere e putchar() para
exibição de um caractere. A função scanf() também permite leitura formatada.

* Letra C:

#include <stdio.h>
int main() {
int caractere;
do {
caractere = getchar();
} while (caractere == '\n');
printf("Caractere lido: %c\n", caractere);
return 0;
}


## Q03

Página 2
Para mostrar o mesmo inteiro em decimal, hexadecimal, octal e como caractere ASCII, utilizam-se os
especificadores %d, %x, %o e %c, respectivamente.

#include <stdio.h>
int main() {
int numero;
printf("Digite um numero inteiro: ");
scanf("%d", &numero);
printf("Decimal: %d | Hexadecimal: %x | Octal: %o | ASCII: %c\n",
numero, numero, numero, numero);
return 0;
}

* Ex: para 65, as representações são decimal 65, hexadecimal 41, octal 101 e caractere ASCII A 


## Q04

* Estado inicial: a = 1, b = 2, c = 3, d = 4

* Etapa Operação Estado após a operação
1 a += b + c → 1 + (2 + 3) a=6, b=2, c=3, d=4
2 c = d + 2 → 6; b *= c → 2×6 a=6, b=12, c=6, d=4
3 d %= a+a+a → 4%18 a=6, b=12, c=6, d=4
4 b-=a → 6; c-=b → 0; d-=c → 4 a=6, b=6, c=0, d=4
5 c+=7 → 7; b+=c → 13; a+=b → 19 a=19, b=13, c=7, d=4

* Resultado final: a = 19, b = 13, c = 7 e d = 4.


## Q05

* Considerando i = 1, j = 2, k = 3, n = 2, x = 3.3 e y = 4.4:

* Item Expressão Resultado

a i < j + 3 1 (verdadeiro)
b 2 * i - 7 <= j - 8 0 (falso)
c -x + y >= 2.0 * y 0 (falso)
d x == y 0 (falso)
e !(n - j) 1 (verdadeiro)
f !n - j -2
g i && j && k 1 (verdadeiro)
h i || j - 3 && k 1 (verdadeiro)
i i < j && 2 >= k 0 (falso)
j i == 2 || j == 4 || k == 5 0 (falso)

* Obs sobre f: em !n - j, o operador ! é aplicado primeiro a n. Como n = 2, temos !2 = 0; depois, 0 - 2 = -2.
Portanto, o valor da expressão completa é -2.


## Q06

* Letra A:

- No incremento prefixado (++n), a variável é incrementada antes de seu valor ser utilizado. No Trecho A, n começa
em 5, passa para 6 e x recebe 6.
Trecho A: n = 6, x = 6

- No incremento pós-fixado (m++), o valor atual é utilizado primeiro e o incremento ocorre depois. No Trecho B, y
recebe 5 e, depois, m passa para 6.
Trecho B: m = 6, y = 5

* Letra B:

printf("%d\t%d\t%d\n", n, n+1, n++);

- Nessa chamada, n é utilizado nos argumentos e também modificado por n++. A linguagem C não garante uma
ordem de avaliação dos argumentos da função que permita determinar com segurança quando cada uso ocorrerá.
Assim, a combinação de modificação e outros usos de n sem uma sequência garantida resulta em comportamento
indefinido.
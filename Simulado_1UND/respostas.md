## Q01

* Letra C

## Q02

* Código com as correções:

#include <stdio.h>
#include <stdlib.h>;
int Main()
{
int idade = 20;
printf( A idade do aluno eh: %d anos.. , idade);

cout << endl;
system("PAUSE");
return 0;
}

## Q03

* int a = 2, b = 4, c = 5, d = 10;

* a += b + c;
a = a + b + c;
a = 2 + 4 + 5
a = 11

* b *= c = d - 2;

c = d - 2;
c = 10 - 2
c = 8

b *= c;
b = b * c;
b = 4 × 8
b = 32

* d %= a + 3;
d = d % (a + 3);
a + 3 = 11 + 3 = 14
d = 10 % 14
d = 10


* a += b += c += 5;
c += 5;
c = 8 + 5
c = 13

b += c;
b = 32 + 13
b = 45

a += b;
a = 11 + 45
a = 56

## Q04

* RESPOSTAS:

Letra A: 1
Letra B: 1
Letra C: 1
Letra D: 1
Letra E: 1

* Letra A
i < j + 2
j + 2 = 3 + 2 = 5
2 < 5
 Resp: 1

 * Letra B
 2 * i - 5 <= j - 4
 2 × 2 - 5
= 4 - 5
= -1
3 - 4 = -1
-1 <= -1
Resp: 1

* Letra C
!k && (x + y >= 7.5)
k = 0
!0 = 1
x + y = 2.5 + 5.0 = 7.5
7.5 >= 7.5
1 && 1
Resp: 1

* Letra D

!(i == j) || (y / x == 2.0)
i == j
2 == 3
Falso: 0
!(i == j) = !0 = 1
1 || alguma_coisa
Resp: 1

* Letra E

i == 2 && j == 4 || k == 0
i == 2
2 == 2
j == 4
3 == 4
1 && 0
Falso: 0
k == 0
0 == 0
Verdadeiro: 1
0 || 1
Resp: 1

## Q05

* Letra A: 
A principal diferença é o momento da verificação da condição. No while, a condição é testada antes da execução, podendo ocorrer zero execuções. No do-while, a condição é testada depois da execução, garantindo pelo menos uma execução.

* Letra B: 
O for é uma escolha mais elegante quando a repetição possui inicialização, condição e atualização bem definidas, principalmente quando sabemos a quantidade aproximada ou exata de iterações.

## Q06

* Letra A:  
O compilador emitirá erro porque soma foi declarada dentro do bloco do for, portanto seu escopo é restrito a esse bloco. Ela não pode ser acessada pelo printf que está fora do for.

* Letra B: 
Quando i = 5, o comando continue interrompe apenas a execução daquela iteração e faz o laço passar diretamente para o próximo valor de i. Por isso, o valor 5 não é somado.
Quando i = 8, o comando break encerra completamente o laço. Portanto, as iterações i = 9 e i = 10 não são executadas.
Assim, os valores utilizados no cálculo de soma são 1, 2, 3, 4, 6 e 7, resultando em uma soma final de 115.

* Letra C:

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 10; i++) {
        if (i == 5)
            continue;

        if (i == 8)
            break;

        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");

    return 0;
}


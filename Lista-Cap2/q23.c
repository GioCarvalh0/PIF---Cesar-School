#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    int duracao;
    int totalSegundos;
    int horaFinal, minutoFinal, segundoFinal;

    printf("Digite a hora de inicio: ");
    scanf("%d", &horas);

    printf("Digite os minutos de inicio: ");
    scanf("%d", &minutos);

    printf("Digite os segundos de inicio: ");
    scanf("%d", &segundos);

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    totalSegundos = horas * 3600 + minutos * 60 + segundos;
    totalSegundos += duracao;

    totalSegundos %= 86400;

    horaFinal = totalSegundos / 3600;
    totalSegundos %= 3600;

    minutoFinal = totalSegundos / 60;
    segundoFinal = totalSegundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n",
           horaFinal, minutoFinal, segundoFinal);

    return 0;
}
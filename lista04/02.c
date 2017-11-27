#include <stdio.h>

typedef struct tempo {
    int minutos;
    int segundos;
    int decimos;
} tempo;

int converter_tempo(tempo t){
    int tempofinal;

    tempofinal = (t.minutos)*6000 + (t.segundos)*100 + (t.decimos);

    return tempofinal;
}

void medir_tempo(tempo a, tempo b){
    int aux, tempoa, tempob;
    tempo diferenca = { .minutos = 0, .segundos = 0, .decimos = 0 };

    tempoa = converter_tempo(a);
    tempob = converter_tempo(b);
    aux = tempob - tempoa;

    if(aux < 0){
        aux = -aux;
    }
    while(aux >= 6000){
        aux -= 6000;
        diferenca.minutos += 1;
    }
    while(aux >= 100){
        aux -= 100;
        diferenca.segundos += 1;
    }
    diferenca.decimos = aux;

    if(tempob < tempoa){
        printf("-%dm %ds %d", (diferenca.minutos), (diferenca.segundos), (diferenca.decimos));
    }
    else{
        printf("%dm %ds %d", (diferenca.minutos), (diferenca.segundos), (diferenca.decimos));
    }
}

int main()
{
    tempo a, b, c;

    scanf("%dm %ds %d", &(a.minutos), &(a.segundos), &(a.decimos));
    scanf("%dm %ds %d", &(b.minutos), &(b.segundos), &(b.decimos));
    medir_tempo(a, b);
}

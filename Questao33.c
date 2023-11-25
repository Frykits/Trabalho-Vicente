#include <stdio.h>
#include <string.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int compararDatas(const void *a, const void *b) {
    struct Data *data1 = (struct Data *)a;
    struct Data *data2 = (struct Data *)b;

    if (data1->ano != data2->ano) {
        return data1->ano - data2->ano;
    }
    if (data1->mes != data2->mes) {
        return data1->mes - data2->mes;
    }
    return data1->dia - data2->dia;
}

int main() {
    struct Data datas[64];
    int contDatas = 0;

    printf("Digite as datas no formato DD/MM/AAAA (0/0/0 para encerrar e mostrar as datas ordenadas):\n");

    while (contDatas < 64) {
        char dataStr[11];
        printf("Data %d: ", contDatas + 1);
        scanf("%s", dataStr);

        if (strcmp(dataStr, "0/0/0") == 0) {
            break;
        }

        if (sscanf(dataStr, "%d/%d/%d", &datas[contDatas].dia, &datas[contDatas].mes, &datas[contDatas].ano) != 3) {
            printf("Formato de data inválido. Use o formato DD/MM/AAAA.\n");
            continue;
        }

        contDatas++;
    }

    if (contDatas == 0) {
        printf("Nenhuma data foi inserida.\n");
    } else {
        qsort(datas, contDatas, sizeof(struct Data), compararDatas);
        printf("Datas em ordem cronológica:\n");
        for (int i = 0; i < contDatas; i++) {
            printf("%02d/%02d/%04d\n", datas[i].dia, datas[i].mes, datas[i].ano);
        }
    }

    return 0;
}

#include <iostream>
#include <string.h>


using namespace std;

struct nota{
    float prova;
    float peso;
    float notafinal;
};



int main()
{
    struct nota *Notas;
    int tamanho = 0;
    float notafinal = 0.0;
    int media = 0;

    printf("Digite quantas provas voce vai fazer: ");
    scanf("%d", &tamanho);

    printf("Digite a media da sua escola: ");
    scanf("%d", &media);

    Notas = (struct nota *)malloc(tamanho * sizeof(struct nota));

    int n = 0;

    system("cls");

    for(n = 0; n < tamanho; n++)
    {
        printf("Digite o peso da %d prova: ", n+1);
        scanf("%f", &Notas[n].peso);
    }

    system("cls");;

    for(n = 0; n < tamanho; n++)
    {
        printf("Digite nota %d: ", n+1);
        scanf("%f", &Notas[n].prova);
        notafinal += (Notas[n].prova * (Notas[n].peso/10));
    }


    system("cls");

    printf("Sua nota final e: %.2f\n", notafinal);
    if(notafinal < 6) printf("Falta %.2f para sua media %d\n", (notafinal - media)*-1, media);
    printf("Voce esta: ");
    if(notafinal > 6) printf("Aprovado\n");
    else printf("Reprovado\n");

    system("pause");
    return 0;
}

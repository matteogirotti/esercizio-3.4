#include <iostream>

int main() {
    char nome;
    char sesso;
    printf("dati in input il nome ed il sesso visualizza scritte differenti :\n nome ");
    scanf("%c", &nome);
    printf("sesso (maschio o femmina) : ");
    scanf("%c",&sesso);
    if(sesso ==' maschio ')
        printf("Egregio signor %c\n", nome);
    else
        printf("Genttilissima signora %c\n", nome);
}
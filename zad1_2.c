#include <stdio.h>

// Zmienna globalna – istnieje przez cały czas działania programu
int licznik = 0;

void funkcja_lokalna() {
    // Zmienna lokalna – tworzona na nowo przy każdym wywołaniu funkcji
    int licznik = 5;

    printf("W funkcji: licznik(lokalna) = %d\n", licznik);
}

void funkcja_globalna() {
    
    int licznik = licznik +1;

    printf("W funkcji: licznik(globalna) = %d\n", licznik);
}

int main() {
    printf("W main (globalna): licznik(globalny) = %d\n", licznik_fukcji);
    funkcja();
    printf("Po powrocie do main: licznik(globalny) = %d\n", licznik);

    printf("Po zwiększeniu w maqin: liczniki(globalny) = %d/n", licznik);
    return 0;
}
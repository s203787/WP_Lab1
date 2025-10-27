#include <stdio.h>
#include <stdbool.h>

int main() {
   int a;
   int b;
   int wynik;
   char op;

   printf("Podaj pierwszą liczbę:");
   scanf("%d", &a);
   printf("wczytano pierwszą liczbę:%d/n", a);

   printf("Podaj drugą liczbę:");
   scanf("%d", &b);
   printf("wczytano drugą liczbę :%d/n", b);
   
   printf("Podaj operacje (+,-,*,/, %%):");
   scanf(" %c", &op);

   if ( op == '+') {
    wynik= a+b;
    printf("Wynik: %d + %d =%d/n", a,b,wynik);
   }
   else if ( op == '-') {
    printf("Wynik: %d - %d = %d/n", a,b,wynik);
   }

   else if ( op == '*') {
    printf("Wynik: %d * %d = %d/n", a,b,wynik);
   }

   else if ( op == '/') {
    if (b == 0) {
        printf ("blad: nie możsna dzielic przez zero\n");
    }
    else {
        wynik = a/b;
        printf ( "Wynik: %d/ %d = %d\n", a,b,wynik);
    }
   }

   else if ( op == '%'){
    
        wynik = a % b;
        printf( "Wynik: %d ", wynik);
    }
   
else {
    printf ("Blad: nie znany znak, dozwolne +,-,/,*,%%\n");
}

    return 0;

}

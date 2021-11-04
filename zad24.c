 // Program ce zadani string napisat unazad.

#include <stdio.h>
#include <string.h>
void reverse_string(char*, int, int);

int main()
{
    //Ovaj string moze sadrzavat i do 150 znakova.
    char string[150];
    printf("Unesi neki string:");
    scanf("%s", &string);
 
    //Pozivamo funkciju
    reverse_string(string, 0, strlen(string)-1);
    printf("\nString zapisan unazad: %s",string);
 
    return 0;
}
 
void reverse_string(char *x, int pocetak, int kraj)
{
    char ch;
    if (pocetak >= kraj)
       return;
 	
    ch = *(x+pocetak);
    *(x+pocetak) = *(x+kraj);
    *(x+kraj) = ch;
 
    //Funkcija zove samu sebe: Rekurzija.
    reverse_string(x, ++pocetak, --kraj);
}

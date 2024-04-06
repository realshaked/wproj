#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

char fabio[5] = "fabio";
char inp;
printf("digite fabio: ");
scanf("%s", &inp);
printf("voce escreveu %s\n", &inp);
printf("fabio e %s \n", fabio);
int res = strcmp(&inp, fabio);
if (res == 0)
{
printf("parabens, voce e alfabetizado");
}
else
printf("voce e burro");

return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
float kilo;
float boy;
float vki;

printf("Kilonuzu giriniz: ");
scanf("%f",&kilo);

printf("Boyunuzu giriniz (cm cinsinden): ");
scanf("%f",&boy);

vki = kilo/pow(boy/100,2);


printf("Vucut kitle indeksiniz %.2f\n",vki);
printf("Durumunuz: ");


if(vki<=18.5){
printf("Zayýf ");
printf("%.2f kilogram almaniz gerekiyor",18.5*pow(boy/100,2-kilo));
}

else if(vki<=24.9){
printf("Normal "); }

else if(vki<=29.9){
printf("Fazla kilolu ");
printf("%.2f kilogram vermeniz gerekiyor",kilo-24.9*pow(boy/100,2));
}
else if(vki<=39.9){
printf("Obez ");
printf("%.2f kilogram vermeniz gerekiyor",kilo-24.9*pow(boy/100,2));
}
else {
printf("Asiri obez ");
printf("%.2f kilogram vermeniz gerekiyor",kilo-24.9*pow(boy/100,2));
}
    return 0;
}

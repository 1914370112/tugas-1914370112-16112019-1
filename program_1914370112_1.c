#include <stdio.h>

int main()
{
printf("==============================================================================\n");
printf("============================MENGHITUNG NILAI FAKTORIAL========================\n");
printf("============================Nama  :Deazain Putri Irawan=======================\n");
printf("                            NPM   : 1914370112\n");
printf("==============================================================================\n");
    int hasil=1,bil;
    printf("Masukkan bilangan faktorial: ");
    scanf("%d",&bil);
    int a;
    for(a=1; a<=bil; a++)
    {
    hasil=a*hasil;
    }
    printf("Faktorial dari %d! = 5 x 4 x 3 x 2 x 1 = %d",bil,hasil);



}

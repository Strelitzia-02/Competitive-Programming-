#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a>=0 && a<=25.0000){
        printf("Intervalo [0,25]\n",a);

    }
    else if(a>=25.00001 && a<=50.0000000){
        printf("Intervalo (25,50]\n",a);

    }
    else if(a>=50.00000001 && a<=75.0000000){
        printf("Intervalo (50,75]\n",a);

    }
    else if(a>=75.00000001 && a<=100.0000000){
        printf("Intervalo (75,100]\n",a);
    }
    else
        printf("Fora de intervalo\n",a);

    return 0;
}

#include<stdio.h>
int main(){

double peso;
   printf("digite o seu peso: ");
   scanf("%lf", &peso);

if(peso < 60.0){
    printf(" menor que 60kg");
}else{
    printf("maior que 60kg");
}



    return 0;
}
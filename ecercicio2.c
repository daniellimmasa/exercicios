#include<stdio.h>
int main(){

float salario, salarioMinimo;
   
   printf("digite o seu salario:    ");
   scanf("%f", &salario);
   
   printf("digite o salario minimo atual:    ");
   scanf("%f", &salarioMinimo);


if(salario >= salarioMinimo){
   printf("o seu salario e igual ou maior que o salario minimo");

}else{
   printf("o seu salario e menor que o salario minimo");

}



return 0;
    
}
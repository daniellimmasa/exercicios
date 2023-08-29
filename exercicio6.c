#include<stdio.h>
int main(){

float notas;
   
   printf("digite sua nota: ");
   scanf("%f", &notas);


if(notas >= 7.0){
   printf("aprovado");

}else if( notas <4.0){
  printf("reprovado");

}else{
    printf("recuperacao");


}










return 0;
    
}
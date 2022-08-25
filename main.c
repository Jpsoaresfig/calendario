#include <stdio.h>
#include <stdlib.h>

int main()
{
   int mes;


   printf("digite um valor correspondente ao mes 1-12");
   scanf("%d", &mes);

   switch(mes)
   {
     case 1 :
        printf(" o mes e janeiro e tem 31 dias");
     break;
     case 2 :
        printf("o mes e fevereiro e tem 28 dias");
     break;
      case 3 :
        printf("o mes e marco e tem 31 dias");
     break;
      case 4 :
        printf("o mes e abril e tem 30 dias");
     break;
      case 5 :
        printf("o mes e maio e tem 31 dias");
     break;
      case 6 :
        printf("o mes e junho e tem 30 dias");
     break;
      case 7 :
        printf("o mes e julho e tem 31 dias");
     break;
      case 8 :
        printf("o mes e agosto e tem 31 dias");
     break;
      case 9 :
        printf("o mes e setembro e tem 30 dias");
     break;
      case 10 :
        printf("o mes e outubro e tem 31 dias");
     break;
      case 11 :
        printf("o mes e novembro e tem 30 dias");
     break;
      case 12 :
        printf("o mes e dezembro e tem 31 dias");
     break;
      default :
        printf("valor invalido");


   }










    return 0;
}

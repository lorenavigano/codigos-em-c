#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    int idade;
      printf ("Digite sua idade: ");
    scanf ("%d", &idade);

    if(idade>=1 && idade<=12){
        printf ("Voce eh uma crianca");
    }

     else if(idade>=13 && idade<=17){
        printf ("Voce eh um adolecente");
    }
     else if (idade>=18 && idade<=59){
        printf ("Voce eh um adulto");
    }
    else if (idade>=60 && idade<=100){
        printf ("Voce eh um idoso");
    }

    return 0;
    }

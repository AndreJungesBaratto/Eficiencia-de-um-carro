#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    float km, l;
    printf("Informe a quantidade de quilometros andados e aquantidade de litros consumida:\n");
     scanf("%f, %f", &km,&l);
         float consumo;
         consumo = km/l;
      printf("Seu consumo medio foi de %f km/l\n", consumo);
       if(consumo<8){
          printf("Venda essa porcaria execravel caindo aos pedacos!");
       }
        else if(consumo<14){
          if(consumo<=12){
              printf("Economico, brabo!");
          }
           else{
              printf("Brabissimo, muito economico!");
           }
        }
        else{
              printf("Brabissimo, muitissimo economico");
        }
    getch();
    return 0;
}

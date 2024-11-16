#include <cs50.h>
#include <stdio.h>

int main(void)
{
   // PEGAR A ALTURA DA PIRAMIDE UM VALOR INTEIRO POSITIVO
   //ENTRE 1 E 8
   int h;
   do
   {
        h = get_int("Height: ");
   } while(h < 1 || h > 8);

   for (int i = 0; i < h; i++)
   {
        int qtd_spaces = (h - i) -1;
        for (int s = 0; s < qtd_spaces; s++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

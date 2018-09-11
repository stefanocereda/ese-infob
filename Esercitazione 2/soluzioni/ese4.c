/* Abbiamo risolto l'esercizio a mano, ma proviamo a vedere come "aiutarci" con un while */
#include <stdio.h>

typedef enum {false, true} exp;
int main()
{
    int x, y;
    char z;
    exp e1=0,e2=0,e3=0,e4=0;

    x = -10;
    while (x <= 10){
        y = -10;
        while (y <= 10){
            z = 'a';
            while (z <= 'z'){

                // ESPRESSIONE 1
                if ((y<7 && x>8) && (z>'a' || z<'z' ))
                    e1 = 1;

                // ESPRESSIONE 2
                if ((-y==y) && (y >= 0))
                    e2 = 1;
                
                // ESPRESSIONE 3
                if ((y>=10 || x<7) && (z=='c'))
                {
                    e3 = 1;

                    // ESPRESSIONE 4
                    if ((y>=10 || x<7) && (z<'c'))
                        e4 = 1;
                }

                z++;
            }
            y++;
        }
        x++;
    }

    if (e1)
        printf("Espressione 1 può essere vera\n");
    if (e2)
        printf("Espressione 2 può essere vera\n");
    if (e3)
        printf("Espressione 3 può essere vera\n");
    if (e4)
        printf("Espressione 4 può essere vera\n");

}

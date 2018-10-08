#include <stdio.h>
#include <math.h>


void main(){
    float a,b,c;
    float delta, x1, x2;
    float re, im;

    printf("Inserire a b e c: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a==0){
        if (b==0){
            printf("Non è un'equazione valida.\n");
        }
        else{
            printf("Eq.ne di primo grado\n");
            x1 = -c/b;
            printf("La soluzione vale %f\n", x1);
        }
    }
    else{
        delta = b*b - 4*a*c;
        if (delta > 0){
            x1 = (-b - sqrt(delta)) / (2*a);
            x2 = (-b + sqrt(delta)) / (2*a);
            printf("Le soluzioni sono x1=%f e x2=%f\n", x1, x2);
        }
        else if(delta == 0){
            printf("La soluzione vale x1=x2=%f\n", -b / (2*a));
        }
        else{
            re = -b / (2*a);
            im = sqrt(-delta) / (2*a);
            printf("Soluzione sono x1=%f - %f i\n e x2=%f + %f i\n", re, im, re, im);
        }
    }
}
          


/* Scrivere un programma che, ricevuti tre numeri reali a,b,c, calcoli
 * e visualizzi le eventuali radici dell'equazione di secondo grado ax^2 + bx + c = 0 */
#include<stdio.h>
#include<math.h>

int main(){
    /* Dichiaro le variabili per i tre coefficienti */
    float a,b,c;
    /* Il discriminante e le soluzioni */
    float delta, x1, x2;
    /* Per le soluzioni complesse, potremmo anche riciclare x1 ed x2 */
    float re, im;

    printf("\nInserisci a,b e c: ");
    scanf("%f%f%f", &a, &b, &c);

    if(a==0){
        if(b==0){
            printf("Non e' una equazione valida\n");
        }else{
            printf("Equazione di primo grado\n");
            x1 = -c/b;
            printf("Soluzione: x=%lf\n", x1);
        }
    }else{
        delta=b*b-4*a*c;
        if(delta>0){
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            printf("Soluzioni: x1=%lf x2=%lf\n",
                    x1,x2);
        }else if(delta==0){
            printf("Soluzione: x1,2=%lf\n",
                    -b/(2*a));
        }else{
            re = -b/(2*a);
            im = sqrt(-delta)/(2*a);
            printf("Soluzioni: x1=%lf-i%lf x2=%lf+i%lf\n",
                    re,im,re,im);
        }
    }
}


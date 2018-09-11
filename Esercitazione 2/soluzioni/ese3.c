/* Scrivere un programma che, ricevuti tre numeri reali \emph{a,b,c}, calcoli
 * e visualizzi le eventuali radici dell'equazione di secondo grado $a x^2 + b x +c = 0$*/
#include<stdio.h>
#include<math.h>

int main(){
    /* Dichiaro le variabili per i tre coefficienti */
    float a,b,c;
    /* Il discriminante e le soluzioni */
    float delta, x1, x2;

    printf("\nInserisci a,b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if(a==0){
        if(b!=0){
            printf("Equazione di primo grado");
            x1=-c/b;
            printf("Soluzione: x=%lf\n",
                    x1);
        }else{
            printf("Non e' una equazione valida");
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
            double re = -b/(2*a);
            double im = sqrt(-delta)/(2*a);
            printf("Soluzioni: x1=%lf-i%lf x2=%lf+i%lf\n",
                    re,im,re,im);
        }
    }
}


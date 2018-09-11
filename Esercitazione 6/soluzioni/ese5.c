#include <stdio.h>

#define N 6
typedef int Array[N];

int main(){
    Array v;
    //i prima posizione libera
    int i=0, val, j=0, k; 
    
    for(i=0;i<N;i++){
        printf("Inserisci valore: ");
        scanf("%d", &val);
        
        while(j<i && v[j]<=val){
            j++;
        }
        /* Al termine di questo while j punta alla posizione in cui devo inserire val.
         * Questa posizione può essere:
         *  1) La prima posizione libera nell'array (tutti gli elementi dell'array sono minori di val oppure l'array è vuoto)
         *  2) La posizione del primo elemento maggiore di val 
         * */
        
        
        /* Se il while è uscito per la seconda condizione, trasliamo a destra tutti gli elementi maggiori di val partendo dall'ultimo */
        for(k=i;k>j;k--){
            v[k]=v[k-1];
        }
        
        /* Finalmente inserisco val nella sua casella */
        v[j]=val;j=0;
    }
    
    for(j=0;j<i;j++)
        printf("%d ", v[j]);
    printf("\n");
    
    return 0;
}


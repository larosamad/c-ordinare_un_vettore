/* Scrivere un programma in C, in grado di: 
1. acquisire in ingresso dall'utente una sequenza di 10 numeri 
2. memorizzarla in un vettore, 
3. ordinare gli elementi del vettore in ordine crescente, 
4. stampa a video il risultato

Per esempio nel caso la sequenza in ingresso fosse 3 5 4 7 5 8 6 9 0
il programma stampa a video 0 3 4 5...*/


#include <stdio.h>
const int N = 10;

int main (void){
    int vettore[N];
    int i, y, temp;

    for (i=0; i<N; i++){
        printf("Inserisci un numero ");
        scanf("%d", &vettore[i]);
    }
    
    for(i=0; i<N; i++){
        for (y=0; y<N; y++){
            if (vettore[y]>vettore[y+1]){ 
            temp=vettore[y]; 
            vettore[y]=vettore[y+1]; 
            vettore[y+1]=temp; 
            }
        }
    }

    printf("I numeri in ordine sono: ");
    for (i=0; i<N; i++){
        printf("%d ", vettore[i]);
    }

return 0;
}

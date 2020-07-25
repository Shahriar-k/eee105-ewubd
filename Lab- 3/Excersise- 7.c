/* Suppose we have two tasks A and B, A takes Ah hours, Am minutes, and As
seconds. On the other hand B takes Bh hours, Bm minutes, and Bs seconds. Write if-else
statements to print out which task takes more time?
*/


#include <stdio.h>
int main(){

    int Ah, Am, As, Bh, Bm, Bs, SumA, SumB;
    printf("Please Enter ah = ");
    scanf("%d", &Ah);
    printf("Please Enter am = ");
    scanf("%d", &Am);
    printf("Please Enter as = ");
    scanf("%d", &As);
    printf("Please Enter bh = ");
    scanf("%d", &Bh);
    printf("Please Enter bm = ");
    scanf("%d", &Bm);
    printf("Please Enter bs = ");
    scanf("%d", &Bs);

    SumA = (Ah*3600)+(Am*60)+As;
    SumB = (Bh*3600)+(Bm*60)+Bs;

    if(SumA > SumB){
        printf("A takes more time.");
    }
    else if(SumA == SumB){
        printf("A and B takes same time.");
    }
    else{
        printf("B takes more time.");
    }
    return 0;
    }

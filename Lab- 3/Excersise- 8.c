#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b){
        if(a>c)
        printf("Max = %d\n",a);
        else
        printf("Max = %d\n",c);
    }
    else{
        if(b>c)
        printf("Max = %d\n",b);
        else
        printf("Max = %d\n",c);
    }
    if(a<b){
            if(a<c)
            printf("Min = %d\n",a);
            else
            printf("Min = %d\n",c);
    }
    else{
        if(b<c)
            printf("Min = %d\n",b);
        else
            printf("Min = %d\n",c);
    }
    printf("Median = %d",a>b?(c>a?a:(b>c?b:c)):(c>b?b:(a>c?a:c)));
    return 0;
}
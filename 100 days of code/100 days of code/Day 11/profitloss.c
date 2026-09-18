#include<stdio.h>
int main()
{
    int cp;
    printf("Cost price \n");
    scanf("%d",&cp);
    int sp;
    printf("Selling price \n");
    scanf("%d",&sp);
    if(sp>cp)
    {
        float p=((sp-cp)*100)/cp;
        printf("Profit %.2f%%",p);
    }
    else if(cp>sp)
    {
        float l=((cp-sp)*100)/cp;
        printf("Loss %.2f%%",l);
    }
    else {
        printf("No profit and no loss");
    }
    return 0;
}
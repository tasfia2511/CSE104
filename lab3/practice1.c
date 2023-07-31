#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1,j=5,k=i*j;i<11; i++,k=k+5)
    {
        printf("%d*%d=%d\n",i,j,k);
    }
}

//2
#include<stdio.h>
int main()
{
    int n,m,f,s,i,j;
    scanf("%d",&n);

    s=0;
    for (i=0; n>=1 ; i++)
    {

        m=n%10;
        f=1;
        for (j=1;j<=m ;j++)
        {
            f = f*j;
        }
         s = s+f ;
        n = n/10;
    }
    printf("%d",s);
    return 0;
}

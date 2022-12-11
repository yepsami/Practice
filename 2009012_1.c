//2009012_1
#include<stdio.h>
int main()
{
    double sum,n,s1,s2,s3,s4,s5,sc,ss;
    scanf ("%lf",&n);
    int i;

    if (n < 50)
        {
            s1 = n * 0.50;
            ss = s1*0.2;
            printf ("%lf",s1+ss);
        }
        else
        {
            s2 = 50*0.5;
            n= n-50;
            if (n<100)
            {
                s3 = n*0.75;
            }
            else
            {
                s3 = 100*0.75;
            }
            n=n-100;

            if (n<100)
            {

                s4 = n*1.2;
            }
            else
            {
                s4 = 100*1.2;
            }

            n= n-100;
            s5 = n*1.5;
            sum = s2+s3+s4+s5;
            sc = sum*0.2;
            printf("%lf",sum+sc);
        }
    return 0;
}

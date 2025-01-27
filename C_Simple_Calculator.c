#include<stdio.h>
int main()
{
    long long int A,B,sub,multi,sum;
    scanf("%lld %lld",&A,&B);
    sum=A+B;
    multi=A*B;
    sub=A-B;
    printf("%lld + %lld = %lld\n",A,B,sum);
    printf("%lld * %lld = %lld\n",A,B,multi);
    printf("%lld - %lld = %lld\n",A,B,sub);
    return 0;
}

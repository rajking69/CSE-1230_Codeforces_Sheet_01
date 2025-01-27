#include<stdio.h>
int main()
{
    long long int A,B,C,D,X;
    scanf("%lld %lld",&A,&B);
    C=A%10;
    D=B%10;
    X=(C+D);
    printf("%lld\n",X);
    return 0;
}

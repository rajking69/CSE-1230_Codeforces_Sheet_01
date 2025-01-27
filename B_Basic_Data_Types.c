#include<stdio.h>
int main()
{
    int A;long long int B;char Ch;float f;double D;
    scanf("%d %lld %c %f %lf",&A,&B,&Ch,&f,&D);
    printf("%d\n",A);
    printf("%lld\n",B);
    printf("%c\n",Ch);
    printf("%.2f\n",f);
    printf("%.1lf\n",D);
return 0;
}
#include <stdio.h>
int main()
{
    int c;
    printf("Welcome\n");
    printf("code    ride    prize per adult\n");
    printf("1    assi to dashashwamedh    100\n");
    printf("2    sunrise ride    150\n");
    printf("3    evening arti ride    200\n");
    printf("4    full ghat tour    350\n");
    printf("0    close counter    -");
    printf("enter any code");
    scanf("%d",&c);
    if(c==1)
    {
        printf("price=100");
    }
    else if(c==2)
    {
        printf("price=150");
    }
    else if(c==3)
    {
        printf("price=200");
    }
    else if(c==4)
    {
        printf("price=350");
    }
    int adult,children,price;
    printf("number of adult and children");
    scanf("%d",&adult);
    scanf("%d",&children);
    scanf("%d",&price);
    if(c<=4)
    {
        int adultfare= adult*price;
        int childfare= children*price/2;
        printf("%d",adultfare);
        printf("%d",childfare);
     }
    else
    {
        printf("invalid ride code");
    }
    if(c==0)
    {
        printf("total summary")
    }
return 0;
}
#include<stdio.h>
int main()
{
    char ch;
    double x,y,sum;
    printf("Enter the operator +,-,/,*");
    scanf("%c",&ch);
    printf("Enter the two values you want to compute the results");
    scanf("%lf%lf",&x,&y);
    switch(ch)
    {
case'+':
    printf("The sum of these two values is %0.1lf",x+y);
    break;
case'-':
    printf("The subtract of these two values is %lf \n",x-y);
default:
    printf("error YOu input wrong operator");

}
return 0;
}

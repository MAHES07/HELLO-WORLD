#include<stdio.h>
int main()
{int a,b,swap;
printf("enter 2 numbers :\n");
scanf("%d %d",&a,&b);
swap=a;
a=b;
b=swap;
printf("after swapping \n");
printf("a=%d and b=%d",a,b);
return 0;
}

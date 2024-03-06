//recursive method
#include <stdio.h>
int fib(int a,int b,int c)
{
    if(c>0)
    {
        int sum=a+b;
        printf("%d\t",sum);
        a=b;
        b=sum;
        fib(a,b,c-1);
    }
}
int main()
{
    int a=0;
    int b=1;
    printf("%d\t%d\t",a,b);
    int c=40;
    fib(a,b,c);
    return 0;
}
//iterative method
#include <stdio.h>
int main(){
    int a=0, b=1, c=42, sum=0;
    printf("%d\t%d\t", a, b);
    for(int i=0; i<=c; i++){
        sum = a+b;
        printf("%d\t", sum);
        a=b;
        b=sum;
    }
    return 0;
}
#include <stdio.h>

int main()
{
    char a;
    float b;
    while (1){
        printf("Enter 1 for kilometre to mile, 2 for inches to feet, 3 for centimetres to inches, 4 for pound to kgs, 5 for inches to metres. Enter q to quit.\n");
        scanf(" %c", &a);
        switch (a){
        case '1':
                printf("Enter the value:\n");
                scanf("%f", &b);
                printf("Value in kilometers is %.2f and miles is %.2f\n", b, b*1.6);
                break;
        case '2': 
                printf("Enter the value:\n");
                scanf("%f", &b);
                printf("Value in inches is %.2f and feet is %.2f\n", b, b/12);
                break;
        case '3': 
                printf("Enter the value:\n");
                scanf("%f", &b);
                printf("Value in centimeters is %.2f and inch is %.2f\n", b, b*0.393701);
                break;
        case '4': 
                printf("Enter the value:\n");
                scanf("%f", &b);
                printf("Value in pounds is %.2f and kilograms is %.2f\n", b, b/2.20462);
                break;
        case '5': 
                printf("Enter the value:\n");
                scanf("%f", &b);
                printf("Value in inches is %.2f and metres is %.2f\n", b, b*0.0254);
                break;
        case 'q': 
                printf("Quitting...");
                goto end;
                break;
        }
    }
    end:
    return 0;
}
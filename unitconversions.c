#include <stdio.h>

void km_to_miles(float km){
    printf("Value in kilometers is %f and miles is %f", km, km*1.6);
}
void inch_to_feet(float inch){
        printf("Value in inches is %f and feet is %f", inch, inch/12);
}
void cm_to_inch(float cm){
        printf("Value in centimeters is %f and inch is %f", cm, cm*0.393701);
}
void p_to_kg(float p){
        printf("Value in pounds is %f and kilograms is %f", p, p/2.20462);
}
void inch_to_m(float inch){
        printf("Value in inches is %f and metres is %f", inch, inch*0.0254);
}

int main()
{
    int a;
    float b;
    printf("Enter 1 for kilometre to mile, 2 for inches to feet, 3 for centimetres to inches, 4 for pound to kgs, 5 for inches to metres\n");
    scanf("%d", &a);
    printf("Enter the value:\n");
    scanf("%f", &b);
    switch (a)
    {
    case 1: km_to_miles(b);
            break;
    case 2: inch_to_feet(b);
            break;
    case 3: cm_to_inch(b);
            break;
    case 4: p_to_kg(b);
            break;
    case 5: inch_to_m(b);
            break;
    default:
        printf("Give proper input\n");
        break;
    }
    return 0;
}
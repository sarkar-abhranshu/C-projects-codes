#include <stdio.h>
int main(){
    int n, a;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    printf("Enter 1 for triangular star pattern or 2 for reversed triangular star pattern: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        for (int i=1; i<=n; i++){
            for (int j=1; j<=i; j++){
                printf("*");
            }
            printf("\n");
        }
        break;
    case 2:
        for (int k=n; k>=1; k--){
            for (int l=1; l<=k; l++){
                printf("*");
            }
            printf("\n");
        }
        break; 
    default:
        printf("Kam se kam number to de de bsdk");
        break;
    }
}
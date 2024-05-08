#include<stdio.h>
int main(){

    int n=0;
    printf("Please enter number of rows: ");
    scanf("%d", &n);

    
    int a=1;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; i+j<=n; j++){ //spaces
            printf("  ");
        }

        for (int j = 1; j<=(2*i -1); j++){ 
            printf("%d ", a);
            a++;
        }
       printf("\n");
    }
}
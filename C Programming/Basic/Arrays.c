#include<stdio.h>
/*int main() {
    float price[3]; //array of size 3
    printf("Enter Price of First Item : ");
    scanf("%f", &price[0]);
     printf("Enter Price of Second Item : ");
    scanf("%f", &price[1]);
     printf("Enter Price of Third Item : ");
    scanf("%f", &price[2]);

    printf("Final price of items respectively are : %f,%f,%f", price[0] + 0.18*price[0], price[1] + 0.18*price[1], price[2] + 0.18*price[2]);




    return 0;
}*/

/*int main(){
    int age = 22;
    int _age=29;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("%u, %u difference is : %u\n", ptr, _ptr, ptr-_ptr);





    return 0;
}*/

/*int main(){

    int a=4,x =0;
    x = ++a + a++ + --a;
    printf("x=%d\n",x);
    printf("%d",a);
    return 0;
}*/

// triplets

/*int main(){
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int triplets=0;
int x = 16;
for(int i=0;i<=9;i++){
for(int j=1;j<=9;j++){
    for (int k=2 ;k<=9; k++){
        if((arr[i]+arr[j]+arr[k])==x){
            triplets++;
            printf("(%d,%d,%d)", arr[i],arr[j],arr[k]);
    } 
}
}
}
printf("\ntotal number of triplet is: %d ",triplets);
return 0;
     }  */ 

     int main(){
     int n;
     printf("Enter the Numbers of the Rows/columns :\n");
     scanf("%d",&n);
     int arr[n][n];
     printf("Enter the elements\n");
     for(int i=0;i<n;i++) {
        for(int j=0; j<n ; j++)
        scanf("%d", &arr[i][j]);
     }
     //printing array
     printf("The matrix is:\n");
     for(int i=0;i<n;i++) {
        for(int j=0; j<n ; j++)
        printf("%d \t", arr[i][j]);
        printf("\n");
     }
     int temp;
     for(int i=0;i<n;i++) {
    for(int j=i; j<n ; j++){
        temp=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;


    }
    }
    //printing array
     printf("The matrix is:\n");
     for(int i=0;i<n;i++) {
        for(int j=0; j<n ; j++)
        printf("%d \t", arr[i][j]);
        printf("\n");
     }



        return 0;
     }
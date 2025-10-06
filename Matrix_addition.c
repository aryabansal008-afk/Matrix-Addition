#include<stdio.h>
int main(){
    int r1,c1;
    printf("For first matrix:\n");
    printf("Enter the number of rows:");
    scanf("%d", &r1);
    printf("Enter the number of columns:");
    scanf("%d", &c1);

    int arr[r1][c1];
                printf("Enter the desired elements for first matrix");
   for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d" , &arr[i][j]);
        }
    } 
   
    printf("\n");

int r2=r1,c2=c1;
    printf("For second matrix:\n");
    printf("Enter the number of rows:");
    scanf("%d", &r2);
    printf("Enter the number of columns:");
    scanf("%d", &c2);

    int brr[r2][c2];
                printf("Enter the desired elements for second matrix");
   for(int k=0;k<r2;k++){
        for(int l=0;l<c2;l++){
            scanf("%d" , &brr[k][l]);
        }
    } 

 printf("The first matrix is :\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d" ,arr[i][j]);
        }
printf("\n");
    }

printf("The second matrix is :\n");
    for(int k=0;k<r2;k++){
        for(int l=0;l<c2;l++){
            printf("%d " ,brr[k][l]);
        }
printf("\n");
    }
int a=r2,b=c2;
int res[a][b];
for(int p = 0;p<a;p++){
    for(int q=0;q<b;q++){
res[p][q]= arr[p][q] + brr[p][q];
    }
}
printf("The sum of matrices is:\n");
for(int p = 0;p<a;p++){
    for(int q=0;q<b;q++){
        printf("%d ", res[p][q]);}
        printf("\n");}
    return 0;
}
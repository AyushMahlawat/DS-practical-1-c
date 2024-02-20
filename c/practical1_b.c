#include<stdio.h>

int main()
{
int i , j , pos , n , x;
int a , arr[i][j] ;
printf("Write down the rank of matrix:\n ");
scanf("%d%d",&a,&a);
 
printf("Write down the elements of matrix:\n");
for(int i = 0 ; i<a ; i++){
    for(int j = 0 ; j < a ; j++){
        printf("Write down the value for arr[%d][%d] : ",i,j);
        scanf("%d", &arr[i][j]);
    }
}
printf("Enter the position where element is to be inserted: ");
    scanf("%d", &pos);
 
   
    n=n+1;
    for(i = n-1; i >= pos; i--)
        arr[i]=arr[i-1];
 
    arr[pos-1]=x; 
 
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

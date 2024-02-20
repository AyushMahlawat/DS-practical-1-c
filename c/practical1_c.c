#include<stdio.h>

int main()
{
int i , j, search,c ;
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
printf("Enter the index of the element to be deleted: ");
    scanf("%d", &index);
    if (index >= n+1)  
    {  
        printf (" \n Deletion is not possible in the array.");  
    }  
    else  
    {  
        for (i = index; i < n - 1; i++)
            arr[i] = arr[i + 1];
            printf("The array after deleting the element is: ");
        for (i = 0; i < n - 1; i++)
            printf("%d ", arr[i]);
        return 0;
    }
}
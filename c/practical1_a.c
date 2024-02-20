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
 printf("Enter a number to search\n");
  scanf("%d", &search);

  for (c = 0; c < a; c++)
  {
    if (arr[c] == search)   
    {
      printf("%d is present at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == a)
    printf("%d isn't present in the array.\n", search);

  return 0;


}



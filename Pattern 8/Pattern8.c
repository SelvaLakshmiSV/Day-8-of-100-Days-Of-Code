#include<stdio.h>
int main()
{
  for(int row=1;row<=5;row++,printf("\n"))
  {
    for(int col=1;col<=row;col++)
    {
      printf("%d ",col);
          
    }
  }  
  return 0;
}

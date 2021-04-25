#include<stdio.h>
int main()
{
  for(int row=1;row<=5;row++,printf("\n"))
  {
    for(int col=1;col<=row;col++)
    {
      printf("%c ",row+64);
          
    }
  }  
  return 0;
}

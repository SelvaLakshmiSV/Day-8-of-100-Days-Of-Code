```
A
A B
A B C
A B C D
A B C D E

#include<stdio.h>
int main()
{
  for(int row=1;row<=5;row++,printf("\n"))
  {
    for(int col=1;col<=row;col++)
    {
      printf("%c ",col+64);
          
    }
  }  
  return 0;
}
```

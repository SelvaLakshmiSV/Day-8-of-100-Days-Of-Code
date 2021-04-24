```
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E

#include<stdio.h>
int main()
{
  for(int row=1;row<=5;row++,printf("\n"))
  {
    for(int col=1;col<=5;col++)
    {
      printf("%c ",row+64);
          
    }
  }  
  return 0;
}
```

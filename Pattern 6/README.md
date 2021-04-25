```
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

#include<stdio.h>
int main()
{
  for(int row=1;row<=5;row++,printf("\n"))
  {
    for(int col=5;col>=1;col--)
    {
      printf("%d ",col);
          
    }
  }  
  return 0;
}
```

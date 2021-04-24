#Pattern - 2
```
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
```
``` 
#include<stdio.h>
int main()
{
  for(int row = 1;row <= 5;row++,printf("\n"))
  {
    for(int col = 1;col <= 5;col++)
    {
      printf("%d",row);
    }
  }
  return 0;
}
```

#include <stdio.h>
void main()
{
  int n, s=0, x=0,cnt=0, m, z=0, p , a, b=0;  char  c;
  while(c!='q')
  {
      scanf("%d%c", &n, &c);
      if(n>0)
      {
          cnt++; s+=n; z+=1;
        if(cnt>x){x=cnt; m=s; b+=1; a=z-b;}
      }
      else if(n<0){z+=1; cnt=0; s=0;}
  }
  printf("Length of LPS: %d\n\n", x);
  printf("Sum of LPS: %d\n", m);
  printf("Starting position of LPS: %d (Assuming the position starts from 0\n)", a);

}



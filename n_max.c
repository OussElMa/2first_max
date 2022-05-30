#include <stdio.h>

int main() 
{
 int nb[8]={8,4,24,321,43,24421,643,252};
 int i, max1, max2;
 i = 0;
 max1=0;
 max2=0;
 while(nb[i])
 {
   if(max1<nb[i])
   {
     max2 = max1;
     max1 = nb[i];
     i++;
   }
     else if(max2 < nb[i] && max1 > nb[i])
      {
        max2=nb[i];
        i++;
      }
      else
        i++;
 }
  return 0; 
}
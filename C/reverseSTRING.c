#include <stdio.h>
int main()
{
   char s[100], r[100];
   int begin, end, count = 0;
   printf("Input a string : ");
   gets(s);
   while (s[count] != '\0')
   {
      count++;
   }
   end = count - 1;
   for (begin = 0; begin < count; begin++) 
   {
      r[begin] = s[end];
      end--;
   }
   r[begin] = '\0';
   printf("reversed string is : %s", r);
   return 0;
}
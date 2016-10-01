#include<stdio.h>

size_t my_strlen(const char* s)
{
   const char* p=s;
   
   while(*p) 
       ++p;

   return (p-s);
}

int main()
{
   int i;
   char* s[]= {
           "Git tutorials",
           "Tutorials Point"'
           "add a new string"
          };

   for (int i=0;i<2;i++)
   {
       printf("string length of %s =%d\n", s[i], my_strlen(s[i]));
   }

   return 0;

}

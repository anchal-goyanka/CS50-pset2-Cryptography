#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(int argc , string argv[])
{
if (argc != 2)
return 1;
for (int i = 0; i < strlen(argv[1]);i++)
{
if (!(isalpha(argv[1][i])))
return 1;
}
int k[strlen(argv[1])];
   for(int j = 0; j < strlen(argv[1]);j++)
   { 
   (k[j]) = ((argv[1])[j]);
   }
    printf("enter the message to be encrypted\n");
   string p = GetString();
   char c[strlen(p)];
   int n = strlen(argv[1]);
  for(int i = 0; i < strlen(p);i++)
  {
  
    if (isalpha(p[i]))
    {
    if (isupper(p[i]))
    {
    c[i] = ((p[i]-2*'A') + k[(i%n)])%26 + 'A';
    }
    else if (islower(p[i]))
    { 
   c[i] = ((p[i]-2*'a') + k[(i%n)])%26 + 'a';
    }
    }
    else 
    {
    c[i] = p[i];
    }

    printf("%c",c[i]);
   
    }
    printf("\n");
   }
   





   
  

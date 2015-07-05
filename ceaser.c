#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>


int main(int argc , string argv[])
{
if (argc != 2)
return 1;

   int key = atoi(argv[1]);
   
  

   
   printf("enter the message to be encrypted\n");
   string msg = GetString();
   int n = strlen(msg);
   char encryp_msg[n];
  
   
   
for(int i = 0 ; i < strlen(msg);i++)
    {
    if (isalpha(msg[i]))
    {
    if (isupper(msg[i]))
    {
    encryp_msg[i] = ((msg[i]-'A') + key)%26 + 'A';
    }
    else if (islower(msg[i]))
    {
    encryp_msg[i] = ((msg[i]-'a') + key)%26 + 'a';
    }
    }
    else 
    {
    encryp_msg[i] = msg[i];
    }
    }
    for (int i = 0;i < strlen(msg);i++)
    {
    printf("%c",encryp_msg[i]);
   
    }
    printf("\n");
   }
   








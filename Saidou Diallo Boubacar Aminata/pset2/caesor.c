#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
  if(argc==2)
  {
      string p;

      int k = atoi(argv[1]);
      A=string plaintext = get_string("plaintext: ");

      printf("cyphertext: ");
      for(int i=0;i<strlen ("plaintext");i++)
      if(isalpha(p[i]))

      if(islower(p[i]))
      {
          printf("%c",(((A[i]-97)+k)%26)+97);

      }
      if(isupper(A[i]))
      {
          printf("%c",((((A[i])-65)+k)%26)+65);
      }
  else
  {
      printf("%c",A[i]);

  }
  {
      printf("\n");
  }
return 0;
  }

}


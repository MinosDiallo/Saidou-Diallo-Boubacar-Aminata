#define _XOPEN_SOURCE
#include<unistd.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main (int argc,string argv[])
{
    if (argc != 2)
    {
        printf("usage:crack <hash>\n");
        return 1;

    }
    int minos = 53;
    string hash = argv [1];
    char salt[3];
    memcpy(salt,hash,2);
    salt[2] = '\0';

    char mimi[6] = "\0\0\0\0\0\0";

    for (int alpha = 0; alpha < minos; alpha++)
    {
        for (int gamma =0; gamma < minos; gamma++)
        {
            for (int bêta = 0; bêta < minos; bêta++)
            {
                for (int delta = 0; delta < minos; delta++)
                {
                    for (int epsilon =0; epsilon < minos; epsilon++)
                    {
                        mimi[0] = mimi[alpha];
                        mimi[1] = mimi[gamma];
                        mimi[2] = mimi[bêta];
                        mimi[3] = mimi[delta];
                        mimi[4] = mimi[epsilon];

                        if (strcmp(crypt(mimi,salt),hash) ==0)
                        {
                            printf("%s\n" ,mimi);
                            return 0;
                        }
                    }
                }
            }
        }
    }

    printf("the password could not be cracked!");
    return 2;
}

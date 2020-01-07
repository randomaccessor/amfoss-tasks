#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
int main(int argc, string argv[])
{
    int key = atoi(argv[1]);

    if( argc != 2)
    {
        printf("./caesar k\n");
    }

    if(arg < 0)
    {
        printf("./caesar k\n");
    }
    else
    {
        string str = get_string("plaintext: ");
        for(int i=0, n=strlen(plaintext);i<=n;i++)
        {
        if(isupper(str[i]))
        {
            printf("%c", ((((str[i]-97)+key)%26) + 97);
        }
        else if(islower(str[i]))
        {
            printf("%c", ((((str[i]-65)+key)%26) + 65);
        }
        else
        {
            printf("%c" str[i]);
        }
    printf("\n");
    return 0;

        }
    printf("./caesar k\n");
    }
}

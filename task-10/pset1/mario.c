#include <stdio.h>
int main()
{
    int Height;
    do
    {
        printf("\nHeight: ");
        //Height = getchar();
        scanf("%d", &Height);
        }
    while( Height < 0 || Height > 23);
    for(int i=0;i<Height;i++)
    {
        for(int j=Height-i;j>1;j--)
        {
            printf(" ");
        }
        for(int k=0;k<i+2;k++)
        {
            printf("#");
        }
        printf("\n");

}
}

#include <stdio.h>
int main(void)
{
    float Change_owed;
    do
    {
        printf("\nChange owed in dollars: ");
        scanf("%f", &Change_owed);
    }
    while(Change_owed<0);
    Change_owed = (Change_owed*100);

    int Coin_count = 0;
    while(Change_owed >= 25)
    {
        Change_owed = Change_owed-25;
        Coin_count++;
    }
    while(Change_owed >= 10)
    {
        Change_owed = Change_owed-10;
        Coin_count++;
    }
    while(Change_owed >5)
    {
        Change_owed = Change_owed-5;
        Coin_count++;
    }
    while(Change_owed >= 1)
    {
        Change_owed = Change_owed-1;
        Coin_count++;
    }
    printf( "%i\n", Coin_count);
}

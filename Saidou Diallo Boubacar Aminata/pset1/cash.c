#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n;
    int one = 500;
    int two = 250;
    int three = 200;
    int four = 100;
    int five = 50;
    int six = 10;
    int seven = 5;
    int eight = 1;
    
    do
    {
       n = get_int("change expected: ");
    }
    while(n<0);

    int counter=0;

    while(n>=one)
    {
        n = n-one;
        counter++;
    }
    printf("%i\n",one);

    while(n>=two)
    {
        n = n-two;
        counter++;
    }
    printf("%i\n",two);

    while(n>=three)
    {
        n = n-three;
        counter++;
    }
    printf("%i\n",three);

    while(n>=four)
    {
        n = n-four;
        counter++;
    }
    printf("%i\n",four);

    while(n>=five)
    {
        n = n-five;
        counter++;
    }
    printf("%i\n",five);

    while(n>=six)
    {
        n = n-six;
        counter++;
    }
    printf("%i\n",six);

    while(n>=seven)
    {
        n = n-seven;
        counter++;
    }
    printf("%i\n",seven);
    
    while (n>= eight)
    {
        n = n-eight;
        counter++;
    }
    printf("%i\n",eight);
    
    printf("the number of coins %i",counter);
}
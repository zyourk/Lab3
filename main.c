#include <stdio.h>
//Programmer: Zack Yourkavitch
//Class: ENGR 120
//Date completed: 21 February 2023
int main() {
    //Problem 1: Estimate Pi with the Leibniz formula
    int n = 100000000; //number of times loop will run
    double pi = 0; //pi variable
    for(int i = 1; i < n; i += 4)
    {
        pi += (1.0 / i);
        pi -= (1.0 / (i + 2));
    }
    pi *= 4;
    printf("%0.10f", pi);
    printf("\n");
    //Problem 2: Use for loops to print sequences of numbers
    for(int x = 1; x <= 13; x += 2)
    {
        printf("%d, ", x);
    }
    printf("\n");
    for(int z = 2; z <= 17; z += 3)
    {
        printf("%d, ", z);
    }
    //Problem 3: Use while loops to print sequences of numbers
    printf("\n");
    int s = 30;
    while(s >= -30)
    {
        printf("%d ", s);
        s -= 10;
    }
    printf("\n");
    int h = 15;
    while(h <= 55)
    {
        printf("%d ", h);
        h += 8;
    }
}

#include<stdio.h>
#include<stdlib.h>
int main() {
    int n, random;
    printf("Enter number of random numbers\n");
    scanf("%d", &n);
         printf("%d random numbers between 0 to 1000\n", n);
    while(n--){
        random = rand()%1000 + 1;
        printf("%d\n", random);
    }
        getch();
    return 0;
}

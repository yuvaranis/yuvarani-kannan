    #include <stdio.h>
    #include <string.h>
    #define MAXFORTHIS 100
    void prefix((char x1[]; char x2[])
    {
            char x3[MAXFORTHIS];
            int a = 0;
            int b = 0;
            int c = 0;
            a = strlen(x1);
            b = strlen(x2);
            if (a < b)
                    c = a;
            else
                    c = b;
            for(int i = 0; i < c; ++i)
            {
                    while(x1[i] == x2[i])
                            x3[i] = x1;
                    if (x[i] != x2[i])
                            break;
            }
            printf("%s",x3);
    }
    int main(void)
    {
            char x1[MAXFORTHIS];
            char x2[MAXFORTHIS];
            for(int i = 0; i < 5; i++)
            {
                    printf("Enter two words: ");
                    scanf(x1,x2,MAXFORTHIS,stdin);
                    x1[strlen(x1)-1] = '\0';
                    x2[strlen(x2)-1] = '\0';
                    printf("The longest common prefix of %s and %s is ", x1,x2);
                    prefix(x1,x2);
            }
            return 0;
    }

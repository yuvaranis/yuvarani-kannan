#include <stdio.h>
#include <ctype.h>
#include "fileopen.c"
int main()
{
    FILE *fp;
    char fname[50];
    int nchar, nword, nline;
    int ch, in_word;
    fp = fileopen(fname, "rt", "Enter input file name:");
    nchar = nword = nline = 0;
    in_word = 0;
    while ((ch= getc(fp)) != EOF) {
             nchar++;
         if (ch == '\n')
           nline++;·
           if (in_word == 0) {
             if (!isspace(ch)) {
                 in_word = 1;
                 nword++;
              }
          }
        else if (isspace(ch))
                 in_word = 0;

     }

       printf("Characters: %d Words: %d Lines: %d\n'',nchar, nword, nline);

               fclose(fp);

                 return 0;

}

# include <stdio.h>
# include <conio.h>
void main()
{
  char ch ;
  clrscr() ;
  printf("ASCII chart for characters : \n\n") ;
  for(ch = 65 ; ch <= 122 ; ch++)
  {
    if(ch > 90 && ch < 97)
      continue ;
    printf("%c \t %3d \t", ch, ch) ;
  }
  getch() ;
}


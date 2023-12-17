#include <stdio.h>
#include <string.h>
#include <ctype.h>

short int check(char a)
{
  a = tolower(a);
  if ((a == 'a')||(a == 'e')||(a == 'i')||(a == 'o')||(a == 'u'))
    return 2;
  if ((a == ' ')||(a == '\n')||(a == '\t')||(a == ','))
    return 0;
  if ((a == '0')|| (a == '1')||(a == '2')||(a == '3')||(a == '4')||(a == '5')||(a == '6')||(a == '7')||(a == '8')||(a == '9'))
    return -1;
  else
    return 1;
}

int main()
{
  int k = 0;
  int ans = 0;
  int count = 0;
  char c;
  scanf("%c", &c);
  if (c == '\0')
    {
      printf("-");
      return 0;
    }
  while (c != 10)
    {
      if (check(c) == 1){
        if (k == 0)
          ans = 1;
        k = 26;
      }
      if (check(c) == 2){
        k = 13;
      }
      if (check(c) == 0){
        if (k == 26 && ans == 1)
          count = 1;
        k = 0;
        ans = 0;
      }
      scanf("%c", &c);
    }
  if (count == 1)
    printf("Yep\n");
  else
    printf("Nope\n");
  return 0;
}

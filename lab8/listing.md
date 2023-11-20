```
dariazh@DESKTOP-C26U56G:~/MAI/labworking/lab8$ emacs hello.c
dariazh@DESKTOP-C26U56G:~/MAI/labworking/lab8$ gcc hello.c
/usr/bin/ld: /usr/lib/gcc/x86_64-linux-gnu/11/../../../x86_64-linux-gnu/Scrt1.o: in function `_start':
(.text+0x1b): undefined reference to `main'
collect2: error: ld returned 1 exit status
dariazh@DESKTOP-C26U56G:~/MAI/labworking/lab8$ fg
emacs hello.c

[1]+  Stopped                 emacs hello.c
dariazh@DESKTOP-C26U56G:~/MAI/labworking/lab8$ nano hello.c
dariazh@DESKTOP-C26U56G:~/MAI/labworking/lab8$ cc hello.c
dariazh@DESKTOP-C26U56G:~/MAI/labworking/lab8$ ./a.out
Hello, Worlddariazh@DESKTOP-C26U56G:~/MAI/labworking/lab8$
dariazh@DESKTOP-C26U56G:~/MAI/labworking/lab8$ cat hello.c
#include <stdio.h>

int main(void) {
  printf("Hello, World");
  return 0;
}

```

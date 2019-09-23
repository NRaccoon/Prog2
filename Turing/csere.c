#include <stdio.h>

int main() {
int a = 8;
int b = 1;

a = a + b;
b = a - b;
a = a - b;

printf("A csere utáni 'a' változó %d\n", a);
printf("A csere utáni 'b' változó %d\n", b);
return 0;
}


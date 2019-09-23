#include <stdio.h>

int main(){
int a = 1;
int b = 0;
while(a != 0){
a<<=1;
b++;
}
printf("%d bites a szó.\n", b);
return 0;
}

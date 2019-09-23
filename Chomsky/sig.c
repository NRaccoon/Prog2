#include <stdio.h>
#include <signal.h>

void jelkezelo(int sig) {
  printf("Elkapva! %d\n", sig);
}

int main() {

while(1) {
 if(signal(SIGINT, jelkezelo)==SIG_IGN)
   signal(SIGINT, SIG_IGN);
}


return 0;
}

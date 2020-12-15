#includ <stdio.h>
#include <unistd.h>
int main() {
    int i;
    for(i=0; i<20; i++){
      printf("Hello Jenkins \n");
      slepp(3);
    }
   return 0;
}

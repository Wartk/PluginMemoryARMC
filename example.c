//created by Wartk 

#include <stdio.h>

void writeMemory(void *base, void *offset, int value)
{
 __asm("str r2, [r0, r1]"); //Architecture ARM
}

int main(void){
   int x[4] = { 0 };

   writeMemory((void*)x, 0x8, 100);

   printf("%i", x[2]);
}

//created by Wartk 

#include <stdio.h>

int readMemory(void* base, void* offset){
    __asm("ldr r3, [r0, r1]");
}

void writeMemory(void *base, void *offset, int value)
{
 __asm("str r2, [r0, r1]");
}

int main(void){
   int x[4] = { 0 };

   writeMemory((void*)x, 0x8, 100);

   printf("%i", readMemory((void*)x, 0x8));
}

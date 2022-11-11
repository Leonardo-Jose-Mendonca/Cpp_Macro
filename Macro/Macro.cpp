#include <iostream>
#define MAIN int main(){
#define CLOSE_MAIN }
#ifdef _PRINTER_BIT
#define PRINT_BITS(byte) "%d%d%d%d%d%d%d%d",\
		((byte >> 7) & 0x01), ((byte >> 6) & 0x01), ((byte >> 5) & 0x01), ((byte >> 4) & 0x01), \
		((byte >> 3) & 0x01), ((byte >> 2) & 0x01), ((byte >> 1) & 0x01), ((byte >> 0) & 0x01)
#else
#define PRINT_BITS(byte) "%d", byte
#endif

MAIN
int x = 170;				// decimal value
printf(PRINT_BITS(x));		// print the bits of the variable 'x' if the _PRINTER_BIT is defined
CLOSE_MAIN

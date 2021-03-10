#include <stdio.h>
#include "put_numbers.h"


int main(void){
int i=-2147483648;
putdec(214); newline();
putdec(-74); newline();
putdec(1); newline();
putdec(-1); newline();
putdec(0); newline();
// putdec(2147483647); newline();
// putdec(-2147483648); newline();
// putdec(-(-2147483648)); newline();
puthex(0); newline();
puthex(10); newline();
// puthex(16); newline();
// puthex(2147483647); newline();
// puthex(-2147483648); newline();
// puthex(0xCAFEBABE); newline();
// puthex(-1); newline();
putbin(0); newline();
putbin(1); newline();
putbin(-1); newline();
putbin(2147483647); newline();
putbin(-2147483648); newline();
return 0;
}
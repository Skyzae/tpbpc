ex15 :

gcc -c put_numbers.c 

On ne peut rien exectuter => fichier objet


ex17 :

#include "put_numbers.h"


ex19:

gcc numbers-test.o put_numbers.o -o numbers-test


ex22: 

Ayant des erreurs avec notre fonction reprise, nous nous sommes permis d'oter le "$(CFLAG)" 
afin de continuer le tp.


ex 25:

=================================================================
==2853==ERROR: AddressSanitizer: stack-buffer-overflow on address 0x7ffcde338fd8 at pc 0x561206ba5616 bp 0x7ffcde338f60 sp 0x7ffcde338f50
READ of size 4 at 0x7ffcde338fd8 thread T0
    #0 0x561206ba5615 in main /home/skuz/Bureau/tpbpc/tpbpc-main/ex24/prog.c:14

=> ex24/prog.c:14



    #1 0x7fd69402c0b2 in __libc_start_main (/lib/x86_64-linux-gnu/libc.so.6+0x270b2)
    #2 0x561206ba518d in _start (/home/skuz/Bureau/tpbpc/tpbpc-main/ex24/prog+0x118d)

Address 0x7ffcde338fd8 is located in stack of thread T0 at offset 88 in frame
    #0 0x561206ba52a8 in main /home/skuz/Bureau/tpbpc/tpbpc-main/ex24/prog.c:9

  This frame has 1 object(s):
    [48, 88) 'tab' (line 10) <== Memory access at offset 88 overflows this variable
HINT: this may be a false positive if your program uses some custom stack unwind mechanism, swapcontext or vfork
      (longjmp and C++ exceptions *are* supported)
SUMMARY: AddressSanitizer: stack-buffer-overflow /home/skuz/Bureau/tpbpc/tpbpc-main/ex24/prog.c:14 in main
Shadow bytes around the buggy address:
  0x10001bc5f1a0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x10001bc5f1b0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x10001bc5f1c0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x10001bc5f1d0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x10001bc5f1e0: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
=>0x10001bc5f1f0: f1 f1 f1 f1 f1 f1 00 00 00 00 00[f3]f3 f3 f3 f3
  0x10001bc5f200: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x10001bc5f210: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x10001bc5f220: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x10001bc5f230: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x10001bc5f240: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
Shadow byte legend (one shadow byte represents 8 application bytes):
  Addressable:           00
  Partially addressable: 01 02 03 04 05 06 07 
  Heap left redzone:       fa
  Freed heap region:       fd
  Stack left redzone:      f1
  Stack mid redzone:       f2
  Stack right redzone:     f3
  Stack after return:      f5
  Stack use after scope:   f8
  Global redzone:          f9
  Global init order:       f6
  Poisoned by user:        f7
  Container overflow:      fc
  Array cookie:            ac
  Intra object redzone:    bb
  ASan internal:           fe
  Left alloca redzone:     ca
  Right alloca redzone:    cb
  Shadow gap:              cc
==2853==ABORTING



ex26:


Program received signal SIGABRT, Aborted.
__GI_raise (sig=sig@entry=6) at ../sysdeps/unix/sysv/linux/raise.c:50
50	../sysdeps/unix/sysv/linux/raise.c: Aucun fichier ou dossier de ce type.
(gdb) back
#0  __GI_raise (sig=sig@entry=6) at ../sysdeps/unix/sysv/linux/raise.c:50
#1  0x00007ffff73b3859 in __GI_abort () at abort.c:79
#2  0x00007ffff76ab6a2 in ?? () from /usr/lib/x86_64-linux-gnu/libasan.so.5
#3  0x00007ffff76b624c in ?? () from /usr/lib/x86_64-linux-gnu/libasan.so.5
#4  0x00007ffff76978ec in ?? () from /usr/lib/x86_64-linux-gnu/libasan.so.5
#5  0x00007ffff7697363 in ?? () from /usr/lib/x86_64-linux-gnu/libasan.so.5
#6  0x00007ffff769808b in __asan_report_load4 () from /usr/lib/x86_64-linux-gnu/libasan.so.5
#7  0x0000555555555616 in main () at prog.c:14
(gdb) frame 7
#7  0x0000555555555616 in main () at prog.c:14
14	sum = sum + tab[i] ;
(gdb) print i
$2 = 10

i n'est pas un index valide de tab

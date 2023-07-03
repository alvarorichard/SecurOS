.section .init
.globl _init
.type _init, @function
_init:
       pushl %ebp
       movl %esp, %ebp
.section .fini
.globl _fini
.type _fini, @function
_fini:
      pushl %ebp
      movl %esp, %ebp

   
    

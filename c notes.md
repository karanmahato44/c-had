##### extern support class are used to link project files >> see the sample program
# global var comes under extern storage class / global var initialized with zero0

# global var (for eg. say int, will be initilized with zero0) same as static

use counter, loop variable as register var ???? not guranteed, reg might not be available or compiler doesn't allow or sth , hw implementation? pointer don't work with reg ofc

{
    // this is a block, can be used independently without a fn or sth
    // statements;
}

enum duplicate values in same scope(diff enums ) not allowed
memory leak - improper use of heap mem, dynamiccaly allocating mem but not freeing/releasing, so the previous allocations/values there are "garbage" for us, c/cpp don't have garbage collection, c# does, auto garbage collectors free(    ) those

free() release the mem back to free heap area but it is not responsible to delte/wipe the content/data, creating a dangling pointer? unexpected behavior while trying t dereference after free ???? do ptr = NULL afrerwards ????


malloc calloc realloc ... return NULL on failure

realloc - increase or decrease // resize previously dynamically allocated memory
# DON'T FORGET TO TYPECAST IN DMA AND FREE (AND NULL ify) the pointers
in calloc all blocks will be initialized by zero, in malloc all garbage

size_t means nothing but unsigned int
calloc contiguous(not contineous) allocation
python upto 13

watch again ff pointer arithmetics

dma always with pointers

stack and heap always grow in opposite direction, stack bottom to top, stack top to bottom for eg.

memory - is for > code/text/instruction, global/static var(initialized and uninitialized parts), stack(all local var, fns), heap

dma is done from heap only

# FILE HANDLING DON'T FORGET TO FCLOSE(fp)

fgetc(fp) / fputc(fp) - moves fp one step forward, after, like postincrement++

watch of traversy media - git and github crash course, filezilla, md, ssh crash course



file handling needs file pointer - so that's basically a use of pointers

FILE type * ptr

w mode wipe and write 



of mosh - python

from eddy wo - 1/0 - division is how many times can you subtract x from a number

word - Alt + Ctrl + Z 	Switch between the last four places that you have edited 

that free autism is called worldlink mobility
regex - pronounce "re J ex" as in registration ex TF
just call it reG ex

hl = host lang

strut object is also an internal pointer????

struct PADDING is done for perforamace (ie less cpu cycles or save cpu cycles) with the cost of memory

struct packing is reverse, save memory with cost of cpu cycles with ppd - #pragma pack(1) - 1 is alignment, no padding

# write struct elements or in general declare variables in increasing order of no of bytes required - from strut padding

1 word or word size - for 32 bit machine 4 bytes
1 word or word size - for 64 bit machine 8 bytes

typedef is for alias - EX. typedef int niceint

struct and union only differ in how mem is allocated - union total is of the max, in union things overwrite since the max allocation is the max of type

# .(dot) operator or member(access) operator
# -> (arrow operator) - member(access) operator using pointers
# arrow operator is same as (*ptr).membername

##### static variable have lifetime throughout the program (meaning it will be vanished only when the main fn is terminated but not the other fns which gets vanished after returning) AND the static variable will be initialized only ONCE, they can have both local and global scope, they retain their val, only initilized once even for multiple fn calls, second initilization statement(s) will simply be ignored, INITILIAZED BY 0(FOR INT), NULL FOR CHAR/STR... BY DEFAULT, 
# static int val; is same as, static int val=0; // both zero not garbage like auto ####;VIMP ***ONLY INITILIZED ONCE***


# if a fn is called again and again and it has a static variable in it, that is initialized once, it won't be initialized again and it will RETAIN IT'S PREVIOUS VALUE

# https://stackoverflow.com/questions/37225244/error-assignment-to-expression-with-array-type-error-when-i-assign-a-struct-f

# tl;dr - use strcpy
# strcpy(obj.name,"string");  strcpy(destination, source) VIMP


omit - fail to include or leave out

primitive/fundamental, userdefined, derived ---- types

structure is userdefined data type or just type (using primitive types ofc)

struct name == struct tag

# IMP - we CAN NOT initialize individual struct members CZ declaring only an struct doesn't allocate memory, it's just a template

# recursion if fast ????
recursion - termination codition == base condition


Constants refer to fixed values that the program may not alter during its execution. These fixed values are also called literals.


callback function - passing function(address of fn) to a function

format specifier %p - for pointer or pointer type

# VIMPPP # "static" variables have global scope // and more imporatantly

# jenny c - youtu.be/l0qlS5C08L0?list=PLdo5W4Nhv31a8UcMN9-35ghv8qyFWD9_S&t=271


passing array as an argument to fn - by default array will be passed by call by reference method

# imp - string literals can not be modified, they are also known as string constants, they have been allocated a read only memory. so we can't alter them.

comma operator - a,b - evaluate first operand and DISCARD the value , evaluate second opearnd and RETURN that, BASICALLY, NEGLECT FIRST ONES & ACCEPT THE LAST ONE

# IMP - return marks the end of the fn statementes, any statement below return won't be executed, and ctrl goes back to the fn call

arguments - actual parameters

parameter - parameter / formal parameters

## return  doesn't PRINT ## keep in mind

# ALWAYS INITIALIZE VARILABLES TO BE USED FOR SOME OPERATION OUTPUT STORAGE #

**return statement**

calling fn(who calls it or inside what it is called, main for ex.) and called fn(the fn that is called)
omit - leave out or exclude

# return type - what "type"*(data type) of value is the funtion returning/giving output after processing the function body

( x modulo 1 ) always == 0 zero because THINK

function declaration == function prototype EX. **void fn(void)**

functions  are also called modules, so c supports modular programming


# indirection operator *


allocate = badnu, or badera bhag pareko/parnu

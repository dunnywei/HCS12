https://www.youtube.com/watch?v=wOZbpEHq_sI&list=PL-k1KoUHjKI2u4ZfzewZy_UZ8MZrg1FDq
 ->Intel, ARM as little endian
 ->Freescale,PoerPC=Big endian
-Registers
  -Accumulator: 
  -  D (16 bits) (0:53)
   /    \
  A       B
15 to 8|7 to 0  bits  (0:53)
  - X (15 to 0) index register
  - Y (15 to 0) index register
  -SP (15 to 0) stack pointer
    -ponits to the top of the stack (2:07)
  -PC (15 to 0)
    -points to the next intruction to be executed (2:24)
 -Flag register (Like CPSR in ARM uP)
  -SXHINZVC
    -N for negative flag (2:53)
    -X for zero flag(3:19)
    -O for overflow flag (3:20)-like sth out of its range (3:29)
      -It returns more it can calculate (3:32) (??) double check it
      -problem/trouble
    -C adding two numbers and still have a carry flag (3:50)
 ->memory is in hex (4:53)
->Instruction
   -Operand-addressing information 
   -Opcode-the operation that will
   -3 types of opcode
      -1)data transfer (memory and I/O)
        -memory to register 
        -register to I/O (6:31)
      -2)data manipulation
         -arithmatic (AND/OR)
      -3)control flow
        -order of instruction read, branch (6:51)
   -Order->opcode operand (5:65)
->1st instruction
  -LDAA for loading from memory to registe A (7:25)
  -LDAB for laoding from memory to register B(7:49)
  -LDD for loading from memory to register D(7:56)
  -STAB as a store function for moving what is inside B into the memory (8:03)
  -STAA as a store function for moving what is inside A into the memory (8:21)
->eg
LOAA #7 so a=0x7 in hex decimal (9:25)
   -4 bit
->eg
LDAB #$7 so a=7d be aware that with $7 means that there is no conversion from decmail to hex (10:12)
->eg
LDAA $07 so we will look at memory location at 0x0007 (10:39)
   

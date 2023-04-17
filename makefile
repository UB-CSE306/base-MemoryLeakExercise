CC = gcc
CFLAGS = -g -O0 -Wall -std=c11
VGFLAGS = --track-origins=yes --tool=memcheck --leak-check=yes --suppressions=suppressions

mainA: Node.c List.c mainA.c
	$(CC) $(CFLAGS) -o mainA Node.c List.c mainA.c -lm 

mainB: Node.c List.c mainB.c
	$(CC) $(CFLAGS) -o mainB Node.c List.c mainB.c -lm

mainC: Node.c List.c mainC.c
	$(CC) $(CFLAGS) -o mainC Node.c List.c mainC.c -lm

mainD: Node.c List.c mainD.c
	$(CC) $(CFLAGS) -o mainD Node.c List.c mainD.c -lm

mainE: Node.c List.c mainE.c
	$(CC) $(CFLAGS) -o mainE Node.c List.c mainE.c -lm

.PHONY: runA runB runC runD clean

runA: mainA
	valgrind $(VGFLAGS) ./mainA

runB: mainB
	valgrind $(VGFLAGS) ./mainB

runC: mainC
	valgrind $(VGFLAGS) ./mainC

runD: mainD
	valgrind $(VGFLAGS) ./mainD

runE: mainE
	valgrind $(VGFLAGS) ./mainE

runF: mainF
	valgrind $(VGFLAGS) ./mainF

clean:
	@rm -f *~ main? 

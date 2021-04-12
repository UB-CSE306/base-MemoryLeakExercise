CC = gcc
CFLAGS = -g -O0 -Wall -std=c11
VGFLAGS = --track-origins=yes --tool=memcheck --leak-check=yes --suppressions=suppressions

mainA: Node.c List.c mainA.c
	$(CC) $(CFLAGS) -lm -o mainA Node.c List.c mainA.c

mainB: Node.c List.c mainB.c
	$(CC) $(CFLAGS) -lm -o mainB Node.c List.c mainB.c

mainC: Node.c List.c mainC.c
	$(CC) $(CFLAGS) -lm -o mainC Node.c List.c mainC.c

mainD: Node.c List.c mainD.c
	$(CC) $(CFLAGS) -lm -o mainD Node.c List.c mainD.c

mainE: Node.c List.c mainE.c
	$(CC) $(CFLAGS) -lm -o mainE Node.c List.c mainE.c

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

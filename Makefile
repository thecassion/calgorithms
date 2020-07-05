VERSION = 0.0.1
CC= gcc
sort.o : sort.c
	${CC} -c -Wall sort.c
prog : sort.o
	${CC} -o prog sort.o
clean:
	rm -f prog *.o
VERSION = 0.0.1
CC= gcc
main.o : main.c
	${CC} -c -Wall main.c
sort.o: sort.c
	${CC} -c -Wall sort.c
prog : main.o sort.o
	${CC} -o prog main.o sort.o
clean:
	rm -f prog *.o
all : clean prog
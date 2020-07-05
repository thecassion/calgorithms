VERSION = 0.0.1
CC= gcc
main.o : main.c
	${CC} -c -Wall main.c
bubble_sort.o: bubble_sort.c
	${CC} -c -Wall bubble_sort.c
prog : main.o bubble_sort.o
	${CC} -o prog main.o bubble_sort.o
clean:
	rm -f prog *.o
all : clean prog
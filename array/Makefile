.PHONY: all clean
CC=gcc

src = array.o
target = a.out
all:${target}

${target}:${src}
	$(CC) -o $@ $^
clean:
	rm a.out *.o *.gch

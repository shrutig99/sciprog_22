CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

all: mat_mul

mat_mul: main.o mat_mul.o
	$(CC) -o $@ $^ $(LDFLAGS)
##$(CC) -o mat_mul main.o mat_mul.o $(LDFLAGS) 

mat_mul.o: mat_mul.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) mat_mul.c

main.o: main.c
	$(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) main.c

clean:
	rm *.o

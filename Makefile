CC     = gcc
CFLAGS = -Wall -Wextra

all: bubblesort heapsort

bubblesort: bubblesort.c
	$(CC) $(CFLAGS) -o bubblesort bubblesort.c

heapsort: heapsort.c
	$(CC) $(CFLAGS) -o heapsort heapsort.c

clean:
	rm -f bubblesort heapsort

bubble:
	./bubblesort

heap:
	./heapsort
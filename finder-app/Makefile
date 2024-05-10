CC=gcc
CFLAGS=-g
override CROSS_COMPILE=aarch64-none-linux-gnu-

default:writer
writer:
ifeq ( $(CROSS_COMPILE), aarch64-none-linux-gnu-)
	aarch64-none-linux-gnu-gcc writer.c
endif
ifndef $(CROSS_COMPILE)
	$(CC) $(CFLAGS) -o writer writer.c
endif

clean:
	rm -f writer *.o


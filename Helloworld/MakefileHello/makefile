EXECUTABLE=Hello.exe
 
CC=gcc
LDFLAGS=-lgdi32
 
src = $(wildcard *.c)
obj = $(src:.c=.o)
 
all: myprog
 
myprog: $(obj)
	$(CC) -o $(EXECUTABLE) $^ $(LDFLAGS)
 
.PHONY: clean
clean:
	rm -f $(obj) $(EXECUTABLE)

rebuild: clean myprog
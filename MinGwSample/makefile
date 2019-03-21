EXECUTABLE=Hello.exe
 
CC="D:\MinGW\bin\gcc.exe"
LDFLAGS=-lgdi32
 
src = $(wildcard *.c)
obj = $(src:.c=.o)
 
all: myprog
 
myprog: $(obj)
	$(CC) -o $(EXECUTABLE) $^ $(LDFLAGS)
 
.PHONY: clean
clean:
	del $(obj) $(EXECUTABLE)
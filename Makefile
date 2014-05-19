CFLAGS = -I ./include
LIB    = ./lib/fmod/libfmodex64.so ./libggfonts.so
LFLAGS = $(LIB) -lrt -lX11 -lGLU -lGL -pthread -lm #-lXrandr

all: crashland

crashland: crashland.c platforms.c ppm.c fmod.c log.c move.c
	gcc $(CFLAGS) crashland.c platforms.c ppm.c log.c fmod.c move.c -Wall -Wextra $(LFLAGS) -o crashland

clean:
	rm -f crashland
	rm -f *.o


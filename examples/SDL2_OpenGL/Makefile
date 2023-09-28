CC=gcc
CFLAGS=-Wall -std=c99 -pedantic -O3 -g -I ../../ `pkg-config sdl2 --cflags`
LFLAGS=`pkg-config sdl2 --libs` -lm

ifeq ($(OS),Windows_NT)
	LFLAGS+=-lopengl32
else
	UNAME_S := $(shell uname -s)
	ifeq ($(UNAME_S),Darwin)
		LFLAGS+=-framework OpenGL
	else
		LFLAGS+=-lGL
	endif
endif

SRCS := main.c renderer.c ../../microui.c
OBJS := $(SRCS:.c=.o)
DEPS := $(OBJS:.o=.d)
BIN  := example.bin

%.o: %.c
	@echo "CC -" $<
	@$(CC) $(CFLAGS) -c $< -o $@

$(BIN): $(OBJS)
	@echo "LD -" $<
	@$(CC) $(OBJS) $(LFLAGS) -o $@

all: $(BIN)

run: $(BIN)
	@./$(BIN)

.PHONY: clean

clean:
	@$(RM) -v $(OBJS) $(BIN)


CC := gcc
CFLAGS := -std=c99 -Wall -Wextra
OBJS := main.o flappy.o cmd.o functions.o memory.o pipe.o
EXE := flappy_game

all: $(EXE)

$(EXE): $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(EXE)

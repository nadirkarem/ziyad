# Makefile pour créer libsalutations.a

CC := gcc
CFLAGS := -Wall -g -std=c11 #Pour spécifier la norme C11 (pour les fonctions de la librairie) => Meilleure portabilité

SRCS := $(wildcard *.c)
OBJS := $(patsubst %.c, %.o, $(SRCS))
LIBDIR := lib
LIBRARY := libsalutations.a
SRCDIR := src
EXE := salut

.PHONY: all clean

all: $(EXE)

$(EXE): $(OBJS) $(LIBRARY)
	$(CC) $(CFLAGS) -o $@ ../$(SRCDIR)/salut.c $^ -lsalutations -I../$(SRCDIR) -L.
	
$(LIBRARY): $(OBJS) ../$(SRCDIR)/heure.o
	ar rcs $@ $(filter %.o, $^)
	ranlib $@

lib/%.o: lib/%.c
	$(CC) $(CFLAGS) -c $< -o $@

../src/%.o: ../src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

../$(SRCDIR)/heure.o: ../$(SRCDIR)/heure.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o
	rm -f *.a
	rm -f $(EXE)
	rm -f ../$(SRCDIR)/*.o

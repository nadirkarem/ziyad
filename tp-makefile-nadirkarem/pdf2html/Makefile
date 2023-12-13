# Makefile for pdf2html

# Compiler
CC := gcc
# Options de compilation communes
CFLAGS := -O3 -Wall -funroll-loops
# Options pour l'édition des liens
LDFLAGS := -s
# Bibliothèque PNG
LIBPNG := -lpng

# Règles

all : pbm2png pbm2eps9 install

pbm2png: pbm2png.c
	$(CC) $(CFLAGS) -o $@ $< $(LIBPNG)

pbm2eps9: pbm2eps9.o printer.o
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

pbm2eps9.o: pbm2eps9.c
printer.o: printer.c

install: pbm2png pbm2eps9
	
	mkdir -p ../TP_solo
	mkdir -p ../TP_solo/bin/
	cp pbm2png pbm2eps9 ../TP_solo/bin/

# Nettoyage
clean:
	rm -f pbm2png pbm2eps9 *.o

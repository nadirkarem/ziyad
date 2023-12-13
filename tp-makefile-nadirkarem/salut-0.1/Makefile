# Makefile principal pour le projet salut-0.1

# Emplacement du répertoire d'installation des binaires
BINDIR := ./

.PHONY: all clean 

all:
	@echo "Compilation du projet..."
	@$(MAKE) -C lib
	@echo "Compilation terminée."

clean:
	@echo "Nettoyage du projet..."
	@$(MAKE) -C lib clean
	@rm -f $(BINDIR)/salut

install: all
	@echo "Installation de l'exécutable dans $(BINDIR)..."
	@mkdir -p $(BINDIR)
	@cp lib/salut $(BINDIR)

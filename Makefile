# Nom de l'exécutable
EXEC = programme

# Dossiers
INCLUDE_DIR = include
SRC_DIR = src
MAIN_DIR = .

# Fichiers
SRCS = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(MAIN_DIR)/*.c)
HEADERS = $(wildcard $(INCLUDE_DIR)/*.h)

# Commandes
CC = gcc
CFLAGS = -I$(INCLUDE_DIR) -Wall -Wextra -std=c99

# Cibles
all: $(EXEC)

$(EXEC): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRCS)

run: $(EXEC)
	./$(EXEC)

clean:
	rm -f $(EXEC)

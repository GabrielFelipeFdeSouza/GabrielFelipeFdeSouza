# Verifica o sistema operacional:
ifdef OS
  OS := $(strip $(OS))
else
  OS := $(strip $(shell uname))
endif

ifeq ($(OS),Windows_NT)
	INCLUDE = -I./include/ -L./libwin
	EXTRA_FLAGS = -Wall -Werror -Wextra -std=c99 -Wno-missing-braces -lraylib -lm -lopengl32 -lgdi32 -lwinmm -lws2_32
	BIN = ./mentes-brilhantes.exe
else
	INCLUDE = -I./include/ -L./lib
	EXTRA_FLAGS = -Wall -Werror -Wextra -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
	BIN = ./mentes-brilhantes
endif

# Encontrar todos os arquivos .c recursivamente em subpastas:
SRC = $(shell find . -name "*.c")

all:
	gcc $(SRC) -g $(EXTRA_FLAGS) $(INCLUDE) -o $(BIN)

run:
	$(BIN)

clean:
	$(RM) $(BIN)

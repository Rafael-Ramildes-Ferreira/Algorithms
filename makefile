CC = g++
FLAGS = -lbenchmark -lpthread

OPTIONS ?= DEMO

OBJ_DIR = obj
BIN_DIR = bin

.PHONY: all

all: $(MAKECMDGOALS)

$(OBJ_DIR)/utils.o: $(OBJ_DIR)
	$(CC) -c utils.c $(FLAGS) -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(BIN_DIR):
	mkdir $(BIN_DIR)

$(MAKECMDGOALS): $(OBJ_DIR)/utils.o $(OBJ_DIR) $(BIN_DIR)
	@echo "Building target: $@"
	$(CC) -c $@.c $(FLAGS) -D$(OPTIONS) -o $(OBJ_DIR)/$@.o
	$(CC) $(OBJ_DIR)/$@.o $(OBJ_DIR)/utils.o  $(FLAGS) -D$(OPTIONS) -o $(BIN_DIR)/$@

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)
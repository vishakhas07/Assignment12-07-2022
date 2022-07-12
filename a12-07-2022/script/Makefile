
CC = g++
CPPFLAGS = -c -Wall
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/

all: app

app:$(OBJ)employee.o
	$(CC) -o app $(OBJ)employee.o 
	mv app $(BIN) 

$(OBJ)employee.o: $(SRC)employee.cpp
	$(CC) $(CPPFLAGS) $(SRC)employee.cpp -I $(INCLUDE)
	mv employee.o $(OBJ)

clean:
	rm -f a.out app *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)app


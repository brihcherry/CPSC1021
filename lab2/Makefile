# store variables
CC = g++
CFLAGS = -I. -Wall -c
EXEC = hospitalCharges
OBJECTS = hospitalCharges.o validateUserInput.o calcTotalCharges.o

all: $(EXEC).out

run: $(EXEC)
	./$(EXEC).out

$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC)

.c.o:
	$(CC) $(CFLAGS) -c $<

# list dependencies for object files
validateUserInput.o: validateUserInput.cpp validateUserInput.h
calcTotalCharges.o: calcTotalCharges.cpp calcTotalCharges.h

tidy:
	rm *.o

clean:
	rm *.o $(EXEC).out



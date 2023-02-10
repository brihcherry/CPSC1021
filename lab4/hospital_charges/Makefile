

# store variables
CC = g++
CFLAGS = -I. -Wall -c
EXEC = hospitalCharges
OBJECTS = hospitalCharges.o Patient.o

all: $(EXEC).out

run: $(EXEC)
	./$(EXEC).out

$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC)

.c.o:
	$(CC) $(CFLAGS) -c $<

# list dependencies for object files
Patient.o: Patient.cpp Patient.h

tidy:
	rm *.o

clean:
	rm *.o $(EXEC).out


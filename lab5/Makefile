
# store variables
CC = g++
CFLAGS = -I. -Wall -c
EXEC = main
SOURCES.cpp = main.cpp Truck.cpp Car.cpp Motorcycle.cpp Scooter.cpp Student.cpp Visitor.cpp Employee.cpp Construction.cpp globals.cpp Invoice.cpp
OBJECTS = $(SOURCES.cpp:.cpp=.o)

all: $(EXEC).out

$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC)

.c.o:
	$(CC) $(CFLAGS) -c $<

tidy:
	rm *.o $(EXEC)

run: $(EXEC)
	./$(EXEC).out

clean:
	rm *.o $(EXEC).out


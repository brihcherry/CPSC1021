# store variables
CC = g++
CFLAGS = -I. -Wall -c
EXEC = main
OBJECTS = areaCalc.o Circle.o Rectangle.o Square.o Trapezoid.o

all: $(EXEC).out

run: $(EXEC)
	./$(EXEC).out

$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC)

.c.o:
	$(CC) $(CFLAGS) -c $<

# list dependencies for object files
Circle.o: Circle.cpp Circle.h
Square.o: Square.cpp Square.h
Trapezoid.o: Trapezoid.cpp Trapezoid.h
Rectangle.o: Rectangle.cpp Rectangle.h

tidy:
	rm *.o $(EXEC)

clean:
	rm *.o $(EXEC).out $(EXEC)

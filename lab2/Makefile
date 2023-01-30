CC = g++
CFLAGS = -I. -Wall -c
PROGRAM = hospitalCharges
OBJA = calcTotalCharges
OBJB = validateUserInput

all: $(PROGRAM).out

run: $(PROGRAM)
	./$(PROGRAM).out

$(PROGRAM): $(PROGRAM).o $(OBJA).o $(OBJB).o
	$(CC) $(PROGRAM).o $(OBJA).o $(OBJB).o -o $(PROGRAM)

$(PROGRAM).o: $(PROGRAM).cpp
	$(CC) $(CFLAGS) $(PROGRAM).cpp

$(OBJA).o: $(OBJA).cpp
	$(CC) $(CFLAGS) $(OBJA).cpp

$(OBJB).o: $(OBJB).cpp
	$(CC) $(CFLAGS) $(OBJB).cpp

fix:
	rm *.o $(OBJA).o $(OBJB).o $(PROGRAM).o

clean:
	rm *.o $(PROGRAM).out



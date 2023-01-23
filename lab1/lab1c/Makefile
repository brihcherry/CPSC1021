
CC = g++
CFLAGS = -I.
DEPS = compoundCalc.h
OBJ = retirementCalc.o compoundCalc.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

retirementCalc: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
# Lucas Clark Burnette
# CSIS 252
# Assingment 4

EXE = prog4

CC = g++

OBJECTS = main.o newclass.o 

LFLAGS =

CFLAGS =

$(EXE): 	$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp newclass.h
		$(CC) $(CFLAGS) -c main.cpp

newclass.o:	newclass.cpp newclass.h
			$(CC) -c $(CFLAGS) newclass.cpp


clean: 
		rm -rf $(EXE) $(OBJECTS) *~

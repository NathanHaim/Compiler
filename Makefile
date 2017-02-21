SOURCES=main.cpp lexer.cpp symbole.cpp expr.cpp plus.cpp mult.cpp number.cpp fermepar.cpp ouvrepar.cpp
ENTETES=lexer.h symbole.h expr.h plus.h mult.h number.h fermepar.h ouvrepar.h

CC = g++
CFLAGS = -Wall
EXEC_NAME = compiler
INCLUDES =
LIBS =
OBJ_FILES = main.o lexer.o symbole.o expr.o plus.o mult.o number.o fermepar.o ouvrepar.o
INSTALL_DIR =


$(EXEC_NAME) : $(OBJ_FILES)
	$(CC) -g -o $(EXEC_NAME) $(OBJ_FILES) $(LIBS)

%.o: %.cpp
	$(CC) -g $(CFLAGS) $(INCLUDES) -o $@ -c $<

%.o: %.cc
	$(CC)  -g $(CFLAGS) $(INCLUDES) -o $@ -c $<

%.o: %.c
	gcc  -g $(CFLAGS) $(INCLUDES) -o $@ -c $<

clean :
	rm -f $(EXEC_NAME) $(OBJ_FILES)

install :
	cp $(EXEC_NAME) $(INSTALL_DIR)
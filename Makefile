SOURCES=main.cpp lexer.cpp
ENTETES=lexer.h

CC = g++
CFLAGS = -Wall
EXEC_NAME = compiler
INCLUDES =
LIBS =
OBJ_FILES = main.o lexer.o
INSTALL_DIR =


$(EXEC_NAME) : $(OBJ_FILES)
	$(CC) -o $(EXEC_NAME) $(OBJ_FILES) $(LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

%.o: %.cc
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

%.o: %.c
	gcc $(CFLAGS) $(INCLUDES) -o $@ -c $<

clean :
	rm -f $(EXEC_NAME) $(OBJ_FILES)

install :
	cp $(EXEC_NAME) $(INSTALL_DIR)
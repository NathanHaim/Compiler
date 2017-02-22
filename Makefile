SOURCES=main.cpp automate.cpp etat.cpp e0.cpp e1.cpp
ENTETES=automate.h etat.h e0.h e1.h

CC = g++
CFLAGS = -Wall
EXEC_NAME = compiler
INCLUDES =
LIBS =
OBJ_FILES = main.o automate.o etat.o e0.o e1.o
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
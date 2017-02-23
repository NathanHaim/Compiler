SOURCES=main.cpp symbole.cpp automate.cpp etat.cpp e0.cpp e1.cpp e2.cpp e3.cpp e4.cpp e5.cpp e6.cpp e7.cpp e8.cpp e9.cpp e10.cpp expr.cpp exprmult.cpp exprplus.cpp number.cpp lexer.cpp mult.cpp plus.cpp ouvrepar.cpp fermepar.cpp end.cpp
ENTETES=symbole.h automate.h etat.h e0.h e1.h e2.h e3.h e4.h e5.h e6.h e7.h e8.h e9.h e10.h expr.h exprmult.h exprplus.h number.h lexer.h mult.h plus.h ouvrepar.h fermepar.h end.h
CC = g++
CFLAGS = -Wall
EXEC_NAME = compiler
INCLUDES =
LIBS =
OBJ_FILES = main.o symbole.o automate.o etat.o e0.o e1.o e2.o e3.o e4.o e5.o e6.o e7.o e8.o e9.o e10.o expr.o exprmult.o exprplus.o number.o lexer.o mult.o plus.o ouvrepar.o fermepar.o end.o
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

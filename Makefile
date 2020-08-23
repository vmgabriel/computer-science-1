PROGRAM = Prog
INSTALL = opt/$(PROGRAM)
CARP = ./src

GUI =$(CARP)/cli/*
LIB = $(CARP)/lib/*
SQL =

SRC = $(CARP)/inicio.cpp

PKGS =

ESPECIAL =

VALACOPTS =

BUILT_ROOT = 1

all:
	g++ -Wall -o $(PROGRAM) $(GUI) $(LIB) $(SRC)

clean:
	@rm -v -fr *~ *.c *.h *.o $(PROGRAM)

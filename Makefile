G++ = g++
FILES = ./src/main.cpp 
DEL = rm
EXE = algths

all:
	$(G++) $(FILES) -o $(EXE)
del:
	$(DEL) $(EXE)
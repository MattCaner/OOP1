CXX=g++
CXXFLAGS+=-Wall $(GXX_FLAGS)
CXXFLAGS+=-g -std=c++11

DEP_FLAGS=-MMD

EXECNAME=lab7.out

DEP_FLAGS+=-MP

CXXFLAGS+=$(DEP_FLAGS)

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)


all: $(EXECNAME)

$(EXECNAME): $(OBJ)
	$(CXX) $(LFLAGS) $? -o $@

.PHONY: clean run compare memcheck

clean:
	rm -f $(EXECNAME) $(OBJ) $(DEP)

run: $(EXECNAME)
	./$(EXECNAME)

compare: $(EXECNAME)
	./$(EXECNAME) > comparator
	cmp correct comparator

memcheck: $(EXECNAME)
	valgrind ./$(EXECNAME)


-include $(DEP)


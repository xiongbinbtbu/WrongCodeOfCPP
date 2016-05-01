CXX = g++
CC = gcc
CMD = -O3 -g 
CFLAGS = $(CMD) -Wall -fno-strict-aliasing -fPIC -Wfloat-equal -Wshadow
SRC_CPP   := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

useStackAsClassMember : $(SRC_CPP)
	$(CXX) $(CFLAGS) -o $@ $^

.cpp.o:
	$(CXX) $(CFLAGS) $(INCLUDES) -c $? -o $@

.cc.o:
	$(CXX) $(CFLAGS) $(INCLUDES) -c $? -o $@

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $? -o $@

debug:
	make CMD="-g -DDEBUG -DOPEN_CORE"

gprof:
	make CMD="-g -pg -static-libgcc"

clean:
	rm -f *.o lib*.a useStackAsClassMember

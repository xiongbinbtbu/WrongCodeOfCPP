CXX = g++
CC = gcc
CMD = -O3 -g 
CFLAGS = $(CMD) -Wall -fno-strict-aliasing -fPIC -Wfloat-equal -Wshadow
THIRD_PARTY = ../3rdParty
INCLUDES = -I$(THIRD_PARTY)/boost/include
LIBS = $(THIRD_PARTY)/boost/lib/libboost_system.a
SRC_CPP   := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

unexpectedOverfloat : $(SRC_CPP)
	$(CXX) $(CFLAGS) -o $@ $^ $(LIBS)

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
	rm -f *.o lib*.a unexpectedOverfloat

CXX 	 = g++
CXXFLAGS = -g -O2
LDFLAGS  = -g
SRCS	 = main.cpp
OBJS	 = main.o

all: makebindir main

main: $(OBJS)
	$(CXX) $(LDFLAGS) -o ./bin/fact $(OBJS)

$(OBJS):
	$(CXX) $(CXXFLAGS) -c $(SRCS)

makebindir:
	mkdir -p ./bin
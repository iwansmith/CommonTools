CPPFLAGS=-shared -O1 -std=c++17 -g -Wall -Wshadow -fPIC


ROOTCFLAGS = $(shell root-config --cflags)
ROOTLIBS   = $(shell root-config --libs)
EXTRA_ROOTLIBS = -lRooFit -lRooStats -lRooFitCore -lHistFactory -lTreePlayer


Files = $(patsubst %.cpp,%,$(wildcard *.cpp)) 


all: $(Files)

$(Files): 
	g++ -shared $<  $(CPPFLAGS) $(ROOTLIBS) $(ROOTCFLAGS) $(EXTRA_ROOTLIBS) $@.cpp -o $@.so 
	
clean:
	rm $(Files)




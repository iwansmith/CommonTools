CPPFLAGS=-shared -O1 -std=c++17 -g -Wall -Wshadow -fPIC


Files = $(patsubst %.cpp,%,$(wildcard *.cpp)) 


all: $(Files)

$(Files): 
	g++ -shared $<  $(CPPFLAGS)  $@.cpp -o $@.so 
	
clean:
	rm $(Files)




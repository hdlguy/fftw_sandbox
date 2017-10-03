#
C = gcc 
CXX = g++ 
CXXFLAGS = -Wall -Wno-sign-compare -O3 
LDFLAGS = -lm -fopenmp -lfftw3 
OBJECTS = main.o
 
 
all: main 
 	 
main: $(OBJECTS) 
	$(CXX) $(OBJECTS) $(LDFLAGS) -o $@  
 
 
clean: 
	rm -rf *.o main 


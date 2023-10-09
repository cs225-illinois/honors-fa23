CPP=clang++
CPPFLAGS=-fopenmp -std=c++17 -lomp

openmp : openmp.cpp
	$(CPP) $(CPPFLAGS) openmp.cpp -o ompexample

clean : 
	rm -rf *.o openmp
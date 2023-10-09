CPP=clang++
CPPFLAGS=-fopenmp -std=c++17 -lomp

openmp : openmp.cpp
	$(CPP) $(CPPFLAGS) openmp.cpp -o ompexample

pi : pi.cpp
	$(CPP) $(CPPFLAGS) pi.cpp -o pi

clean : 
	rm -rf *.o ompexample pi
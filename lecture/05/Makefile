CPP=clang++
CPPFLAGS=-fopenmp -std=c++17
LD=clang++
LDFLAGS=-fopenmp -std=c++17 -lomp

openmp : openmp.cpp
	$(CPP) $(LDFLAGS) openmp.cpp -o ompexample

pi : pi.cpp
	$(CPP) $(LDFLAGS) pi.cpp -o pi

la_test: la_test.o la.o
	$(LD) $(LDFLAGS) la_test.o la.o -o la_test

la.o : la.cpp la.h
	$(CPP) $(CPPFLAGS) -c la.cpp -o la.o

la_test.o : la_test.cpp la.h
	$(CPP) $(CPPFLAGS) -c la_test.cpp -o la_test.o

clean : 
	rm -rf *.o ompexample pi la_test a.out
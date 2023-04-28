CXXFLAGS=-O3 -std=c++11 -Wc++11-extensions
main: v1.1.o
	g++ $(CXXFLAGS) -o prog myfunc.cpp v1.1.cpp
v1.1.o: v1.1.cpp
	g++ -c $(CXXFLAGS) v1.1.cpp
func:
	g++ -g myfunc.cpp
clean: 
	rm *.o prog
del:
	- rm *\(v1\).txt
	- rm *\(v2\).txt
	- rm *\(l1\).txt
	- rm *\(l2\).txt
	- rm *\(d1\).txt
	- rm *\(d2\).txt
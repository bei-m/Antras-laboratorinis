CXXFLAGS=-O3 -std=c++11 -Wc++11-extensions
main: v1.5.o
	g++ $(CXXFLAGS) -o prog myfunc.cpp v1.5.cpp
v1.5.o: v1.5.cpp
	g++ -c $(CXXFLAGS) v1.5.cpp
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
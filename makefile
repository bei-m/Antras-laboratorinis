CXXFLAGS = -O3 -std=c++11 -Wc++11-extensions
TEST_CXXFLAGS = -std=c++11 -Wall -Wextra -Wno-sign-compare -I/path/to/catch2

prog: v2.0.o
	g++ $(CXXFLAGS) -o prog myfunc.cpp v2.0.cpp
v2.0.o: v2.0.cpp
	g++ -c $(CXXFLAGS) v2.0.cpp
func:
	g++ -g myfunc.cpp
clean: 
	- rm *.o prog
	- rm *.o test
test:
	g++ $(TEST_CXXFLAGS)  -o test testmyfunc.cpp catch_main.cpp myfunc.cpp -I/path/to/catch2
both: prog test
del:
	- rm *\(v1\).txt
	- rm *\(v2\).txt
	- rm *\(l1\).txt
	- rm *\(l2\).txt
	- rm *\(d1\).txt
	- rm *\(d2\).txt
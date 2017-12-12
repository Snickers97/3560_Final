build: count.cc
	g++ -g -o count count.cc

doc: count.cc
	doxygen count.cc

check: count.cc count
	cppcheck count.cc
	valgrind --leak-check=full count

clean:
	rm -f count -r html -r latex

count: count.cc
	g++ -g -o count count.cc

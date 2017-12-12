build: count.cc
	g++ -o count count.cc

doc: count.cc
	doxygen count.cc

clean:
	rm -f count

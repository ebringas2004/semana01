all: hello-cpp-world hello-c-world hola

%: %.cc
	g++-5 -std=c++14 $< -o $@

%: %.c
	gcc $< -o $@


CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: test

clean:
	rm test

maze: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

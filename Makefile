CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: tes

clean:
	rm test

maze: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

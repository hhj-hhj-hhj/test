CXX = clang++
CXXFLAGS = -Wall -Wextra -std=c++2b -g -O0

TARGET = main
SRC = *.cpp

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SRC) Makefile
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

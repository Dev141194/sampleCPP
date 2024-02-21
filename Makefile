CXX=g++
SRC_DIR=src
INC_DIR=include
CPPFLAGS=-I$(INC_DIR)
CXXFLAGS=-std=c++11 -pthread -lssl -lcrypto
TARGET=web_server

SRCS=$(wildcard $(SRC_DIR)/*.cpp)
OBJS=$(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(SRC_DIR)/*.o $(TARGET)

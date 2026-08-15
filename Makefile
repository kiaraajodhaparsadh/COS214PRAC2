CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic

TARGET = wayfarer

SOURCES = main.cpp \
          RouteStrategy.cpp \
          Trip.cpp \
          Place.cpp 
         

OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

run: $(TARGET)
	./$(TARGET)

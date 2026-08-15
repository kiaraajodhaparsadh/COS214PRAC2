CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic

TARGET = wayfarer

DIRS = . \
       State \
       Strategy \
       Composite_Decorator \
       AbstractFactory/Factories/Abstract \
       AbstractFactory/Factories/Concrete \
       AbstractFactory/Products/Abstract \
       AbstractFactory/Products/Concrete

# find every .cpp in those folders
SOURCES = $(foreach dir,$(DIRS),$(wildcard $(dir)/*.cpp))
OBJECTS = $(SOURCES:.cpp=.o)

# handles same-tree includes, but this covers anything using a bare filename)
INCLUDES = $(foreach dir,$(DIRS),-I$(dir))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

run: $(TARGET)
	./$(TARGET)
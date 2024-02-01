CXX = g++
CXXFLAGS = -std=c++11 -Wall
SFMLFLAGS = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

# Define the executable file
EXEC = myGame
SRC = Continent.cpp Country.cpp ContinentMap.cpp soundmanager.cpp menu.cpp game.cpp WorldMap.cpp SFMLtools.cpp main.cpp

all: $(EXEC)

%.o: %.cpp
	$(CXX) -c $< -o $@

%.o: %.h
	$(CXX) -c $< -o $@

$(EXEC): Continent.o Country.o ContinentMap.o soundmanager.o menu.o game.o WorldMap.o SFMLtools.o main.o
	$(CXX) $(CXXFLAGS) $(SRC) -o $(EXEC) $(SFMLFLAGS)

clean:
	@echo "** Removing object files and executable..."
	rm -f $(EXEC) *.o

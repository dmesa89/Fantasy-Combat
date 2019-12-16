

output: Main.o  GamePlay.o Character.o Vampire.o Barbarian.o Medusa.o InputValidation.o Bluemen.o HarryPotter.o Die.o
	g++ -std=c++11 Main.o GamePlay.o Character.o Vampire.o Barbarian.o Medusa.o InputValidation.o Bluemen.o HarryPotter.o Die.o -o output

Main.o: Main.cpp
	g++ -std=c++11 -c Main.cpp

GamePlay.o: GamePlay.cpp
	g++ -std=c++11 -c GamePlay.cpp

Character.o: Character.cpp
	g++ -std=c++11 -c Character.cpp

Vampire.o: Vampire.cpp
	g++ -std=c++11 -c Vampire.cpp

Barbarian.o: Barbarian.cpp
	g++ -std=c++11 -c Barbarian.cpp

Medusa.o: Medusa.cpp
	g++ -std=c++11 -c Medusa.cpp

InputValidation.o: InputValidation.cpp
	g++ -std=c++11 -c InputValidation.cpp

Bluemen.o: Bluemen.cpp
	g++ -std=c++11 -c Bluemen.cpp

HarryPotter.o: HarryPotter.cpp
	g++ -std=c++11 -c HarryPotter.cpp

Die.o: Die.cpp
	g++ -std=c++11 -c Die.cpp

clean:
	rm *.o output
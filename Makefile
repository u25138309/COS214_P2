wayfarer: main.o AbstractNPC.o AbstractObstacle.o AbstractTerrain.o WorldFactory.o DesertFactory.o DesertNPC.o DesertObstacle.o DesertTerrain.o SwampFactory.o SwampNPC.o SwampObstacle.o SwampTerrain.o VolcanoFactory.o VolcanoNPC.o VolcanoObstacle.o VolcanoTerrain.o
	g++ -std=c++11 main.o AbstractNPC.o AbstractObstacle.o AbstractTerrain.o WorldFactory.o DesertFactory.o DesertNPC.o DesertObstacle.o DesertTerrain.o SwampFactory.o SwampNPC.o SwampObstacle.o SwampTerrain.o VolcanoFactory.o VolcanoNPC.o VolcanoObstacle.o VolcanoTerrain.o -o wayfarer

main.o: main.cpp
	g++ -c -std=c++11 main.cpp

AbstractNPC.o: AbstractNPC.cpp
	g++ -c -std=c++11 AbstractNPC.cpp

AbstractObstacle.o: AbstractObstacle.cpp
	g++ -c -std=c++11 AbstractObstacle.cpp

AbstractTerrain.o: AbstractTerrain.cpp
	g++ -c -std=c++11 AbstractTerrain.cpp

WorldFactory.o: WorldFactory.cpp
	g++ -c -std=c++11 WorldFactory.cpp

DesertFactory.o: DesertFactory.cpp
	g++ -c -std=c++11 DesertFactory.cpp

DesertNPC.o: DesertNPC.cpp
	g++ -c -std=c++11 DesertNPC.cpp

DesertObstacle.o: DesertObstacle.cpp
	g++ -c -std=c++11 DesertObstacle.cpp

DesertTerrain.o: DesertTerrain.cpp
	g++ -c -std=c++11 DesertTerrain.cpp

SwampFactory.o: SwampFactory.cpp
	g++ -c -std=c++11 SwampFactory.cpp

SwampNPC.o: SwampNPC.cpp
	g++ -c -std=c++11 SwampNPC.cpp

SwampObstacle.o: SwampObstacle.cpp
	g++ -c -std=c++11 SwampObstacle.cpp

SwampTerrain.o: SwampTerrain.cpp
	g++ -c -std=c++11 SwampTerrain.cpp

VolcanoFactory.o: VolcanoFactory.cpp
	g++ -c -std=c++11 VolcanoFactory.cpp

VolcanoNPC.o: VolcanoNPC.cpp
	g++ -c -std=c++11 VolcanoNPC.cpp

VolcanoObstacle.o: VolcanoObstacle.cpp
	g++ -c -std=c++11 VolcanoObstacle.cpp

VolcanoTerrain.o: VolcanoTerrain.cpp
	g++ -c -std=c++11 VolcanoTerrain.cpp

run:
	./wayfarer

clean:
	rm -f *.o wayfarer wayfarer.exe
CXX = g++
CXXFLAGS = -std=c++11

TARGET = wayfarer

OBJECTS = main.o \
          AbstractNPC.o \
          AbstractObstacle.o \
          AbstractTerrain.o \
          WorldFactory.o \
          DesertFactory.o \
          DesertNPC.o \
          DesertObstacle.o \
          DesertTerrain.o \
          SwampFactory.o \
          SwampNPC.o \
          SwampObstacle.o \
          SwampTerrain.o \
          VolcanoFactory.o \
          VolcanoNPC.o \
          VolcanoObstacle.o \
          VolcanoTerrain.o \
          TravelMode.o \
          Traveler.o \
          WalkingMode.o \
          DrivingMode.o \
          FlyingMode.o \
          SwimmingMode.o \
          TeleportationMode.o \
          RouteStrategy.o \
          Trip.o \
          ShortestRouteStrategy.o \
          FastestRouteStrategy.o \
          ScenicRouteStrategy.o \
          MapComponent.o \
          Region.o \
          Location.o \
          Decorator.o \
          WeatherDecorator.o \
          TollDecorator.o \
          TerrainDecorator.o \
          RadiationDecorator.o

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o $(TARGET) $(TARGET).exe
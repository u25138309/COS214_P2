cmake_minimum_required(VERSION 4.3)
project(COS214_P2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(COS214_P2
        Traveler.cpp
        Traveler.h
        TravelMode.cpp
        TravelMode.h
        WalkingMode.cpp
        WalkingMode.h
        DrivingMode.cpp
        DrivingMode.h
        FlyingMode.cpp
        FlyingMode.h
        SwimmingMode.cpp
        SwimmingMode.h
        TeleportationMode.cpp
        TeleportationMode.h
        Trip.cpp
        Trip.h
        RouteStrategy.cpp
        RouteStrategy.h
        ShortestRouteStrategy.cpp
        ShortestRouteStrategy.h
        FastestRouteStrategy.cpp
        FastestRouteStrategy.h
        ScenicRouteStrategy.cpp
        ScenicRouteStrategy.h)

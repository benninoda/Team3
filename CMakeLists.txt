cmake_minimum_required(VERSION 3.17)
project(Team3)

set(CMAKE_CXX_STANDARD 14)

include_directories(source-code)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(SOURCES
        source-code/main.cpp
        source-code/game/Game.cpp source-code/game/Game.h
        source-code/drawing/Point.h
        source-code/graph/Graph.h source-code/graph/Graph.cpp
        source-code/graph/Node.cpp source-code/graph/Node.h
        source-code/graph/Edge.cpp source-code/graph/Edge.h
        source-code/builder/JSONReader.cpp source-code/builder/JSONReader.h
        source-code/drawing/RotationCalculator.cpp source-code/drawing/RotationCalculator.h
        source-code/drawing/Renderer.cpp source-code/drawing/Renderer.h
        source-code/game/Configuration.cpp source-code/game/Configuration.h
        source-code/layout/Layout.h source-code/layout/Layout.cpp
        )

add_executable(Team3 ${SOURCES})

target_link_libraries(Team3 ${CONAN_LIBS})
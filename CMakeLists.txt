cmake_minimum_required(VERSION 3.14)

project(Escultor3D-PII LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(Escultor3D-PII
  main.cpp
  figurageometrica.h
  sculptor.h sculptor.cpp
  putvoxel.h putvoxel.cpp
  putbox.h putbox.cpp
  putsphere.h putsphere.cpp
  putellipsoid.h putellipsoid.cpp
  cutvoxel.h cutvoxel.cpp
  cutbox.h cutbox.cpp
  cutsphere.h cutsphere.cpp
  cutellipsoid.h cutellipsoid.cpp
  interpretador.h interpretador.cpp
)
target_link_libraries(Escultor3D-PII Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS Escultor3D-PII
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

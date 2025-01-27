
cmake_minimum_required(VERSION 3.16)

project(patientsQueue)

set(CMAKE_AUTOUIC ON)


find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

# Build the executable
add_executable(patientsQueue)

target_include_directories(patientsQueue PRIVATE include/)

target_sources(patientsQueue PRIVATE main.cpp mainwindow.cpp Patient.cpp)

set_target_properties(patientsQueue PROPERTIES AUTOMOC ON)

target_link_libraries(patientsQueue PRIVATE Qt6::Core)
target_link_libraries(patientsQueue PRIVATE Qt6::Widgets)

install(TARGETS patientsQueue RUNTIME DESTINATION bin)

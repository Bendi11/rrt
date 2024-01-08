cmake_minimum_required(VERSION 3.28)

project(
    rutherford-race-tracker
    LANGUAGES CXX
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_STANDARD 23)

set(SRC
    "src/main.cpp"
)

add_executable(${CMAKE_PROJECT_NAME} ${SRC})

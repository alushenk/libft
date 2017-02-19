cmake_minimum_required(VERSION 3.5)
project(ft)

#set(CMAKE_C_FLAGS "-Wall -Wextra -Werror")

file(GLOB SOURCE_FILES *.c)
set(CMAKE_BUILD_TYPE Release)

add_library(ft SHARED ${SOURCE_FILES})

# Install library
install(TARGETS ft DESTINATION ft)

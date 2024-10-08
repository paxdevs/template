cmake_minimum_required(VERSION 3.12)

set(CMAKE_C_COMPILER arm-linux-gnueabi-gcc)
set(CMAKE_CXX_COMPILER arm-linux-gnueabi-g++)

project(paxtemplate)

# Add the libpax library as a dependency
include(FetchContent)
FetchContent_Declare(
    libpax
    GIT_REPOSITORY https://github.com/paxdevs/libpax.git
    GIT_TAG main
)
FetchContent_MakeAvailable(libpax)

# Create the shared library target
add_library(paxtemplate SHARED main.cpp)

# Set the optimization level
target_compile_options(paxtemplate PRIVATE -O3 -Wall -Wextra -flto)

# Set the link options
target_link_options(paxtemplate PRIVATE -static-libstdc++ -static-libgcc)

# Link against the libpax library
target_link_libraries(paxtemplate PRIVATE libpax)

# Set the include directories for the libpax library
target_include_directories(paxtemplate PRIVATE ${libpax_SOURCE_DIR}/include)

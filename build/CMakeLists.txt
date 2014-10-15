cmake_minimum_required (VERSION 2.6) 
project (GREETER)

set(GREETER_ROOT "..")

# We want the built binaries to go in the bin folder
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

message(${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

set(SRC_DIR ../src)

# Gather the source files in the root of the src folder
file(GLOB root_files ${SRC_DIR}/*.cpp)

# Gather the source files in common
file(GLOB_RECURSE common_files ${SRC_DIR}/common/*.cpp)

# Gather the source files in greeter (some platform specfic)
file(GLOB greeter_files_main ${SRC_DIR}/greeter/*.cpp)
if( WIN32 )
    file(GLOB_RECURSE greeter_files_win32 ${SRC_DIR}/greeter/win32/*.cpp)
elseif( UNIX )
    file(GLOB_RECURSE greeter_files_unix ${SRC_DIR}/greeter/unix/*.cpp)
endif()

set(greeter_files ${greeter_files_main} ${greeter_files_win32} ${greeter_files_unix})

# Now put all of our gathered source files together in a list for the compiler
set(src_files ${root_files} ${common_files} ${greeter_files})

# Build the binary
add_executable(GREETER ${src_files})

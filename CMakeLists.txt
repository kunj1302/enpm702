cmake_minimum_required(VERSION 3.16.0)
project(lecture5 VERSION 0.1.0)


# Compilation flags
add_compile_options(-Wall)

# Add executable
add_executable(lecture5 lecture5/src/lecture5.cpp)


add_custom_command(TARGET lecture5 POST_BUILD
    COMMAND ./lecture5 | c++filt -t
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Resolve name mangling"
    VERBATIM
)

add_custom_target(demangle ALL
    COMMAND ./lecture5 | c++filt -t
    DEPENDS lecture5
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

add_custom_command(TARGET lecture5 POST_BUILD
    COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture5
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Running Valgrind after building lecture5"
    VERBATIM
)


add_custom_target(run_valgrind ALL
    COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture5
    DEPENDS lecture5
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)


# Set C++ standard to C++17
set_property(TARGET lecture5 PROPERTY CXX_STANDARD 17)


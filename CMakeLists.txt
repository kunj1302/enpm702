<<<<<<< HEAD
cmake_minimum_required(VERSION 3.16.0)
project(lecture4 VERSION 0.1.0)
=======
cmake_minimum_required(VERSION 3.20.0)
project(lecture8 VERSION 0.1.0)
>>>>>>> upstream/main


# Compilation flags
add_compile_options(-Wall)

include_directories(lecture8/include)
# Add executable
<<<<<<< HEAD
add_executable(lecture8 lecture8/src/main.cpp lecture8/src/engine.cpp lecture8/src/date.cpp lecture8/src/driver.cpp lecture8/src/vehicle.cpp)
=======
add_executable(lecture8 
    lecture8/src/main.cpp lecture8/src/date.cpp lecture8/src/engine.cpp
    lecture8/src/driver.cpp
    lecture8/src/vehicle.cpp)
>>>>>>> upstream/main

# add_custom_command(TARGET lecture8 POST_BUILD
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture8
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
#     COMMENT "Running Valgrind after building lecture8"
#     VERBATIM
# )


# add_custom_target(run_valgrind ALL
#     COMMAND valgrind --show-error-list=yes --leak-check=full --show-leak-kinds=all --track-origins=yes ./lecture8
#     DEPENDS lecture8
#     WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
# )


# Set C++ standard to C++17
set_property(TARGET lecture8 PROPERTY CXX_STANDARD 17)


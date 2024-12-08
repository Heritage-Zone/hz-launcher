cmake_minimum_required(VERSION 3.5)
project(HZLauncher)

set(CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe")

#link glfw folders and lib file
add_library(glfw STATIC IMPORTED)
set_target_properties(glfw PROPERTIES IMPORTED_LOCATION ${PROJECT_SOURCE_DIR}/libs/glfw/lib-mingw-w64/libglfw3.a)
target_include_directories(glfw INTERFACE ${PROJECT_SOURCE_DIR}/libs/glfw/include)

#add executable file
add_executable(${PROJECT_NAME} "src/main.cpp")
target_include_directories(${PROJECT_NAME} PRIVATE include)

#link glfw to executable file
target_link_libraries(HZLauncher PRIVATE glfw)

#link OpenGL to executable file
find_package(OpenGL REQUIRED)
target_link_libraries(HZLauncher PRIVATE OpenGL::GL)
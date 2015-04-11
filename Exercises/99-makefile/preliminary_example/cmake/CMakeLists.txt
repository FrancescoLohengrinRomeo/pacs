cmake_minimum_required (VERSION 3.0)
project (hellomake)

include_directories("${PROJECT_SOURCE_DIR}/include")
add_subdirectory(src)

set(EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/bin")
add_executable(hellomake src/hellomake.cpp)
target_link_libraries(hellomake hellofunc)

install(TARGETS hellomake DESTINATION ${PROJECT_BINARY_DIR}/../INSTALL/bin)
install(FILES "${PROJECT_BINARY_DIR}/../include/hellomake.h" DESTINATION ${PROJECT_BINARY_DIR}/../INSTALL/include)
install(FILES "${PROJECT_BINARY_DIR}/../include/hellomake.h" DESTINATION ${PROJECT_BINARY_DIR}/../INSTALL/lib)


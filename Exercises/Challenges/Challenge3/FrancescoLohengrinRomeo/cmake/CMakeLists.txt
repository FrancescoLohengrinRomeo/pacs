cmake_minimum_required (VERSION 3.0)
project (integer-list)

include (CTest)
set (CTEST_PROJECT_NAME "integer-list")

include_directories ("${PROJECT_SOURCE_DIR}/include")

set (EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/../bin")

add_executable (integer-list src/integer-list.cpp)

install (TARGETS integer-list DESTINATION ${PROJECT_BINARY_DIR}/../INSTALL/bin)
install (FILES "${PROJECT_BINARY_DIR}/../include/integer-list.h" DESTINATION ${PROJECT_BINARY_DIR}/../INSTALL/include)

add_test (integerlistRuns ${PROJECT_BINARY_DIR}/../bin/integer-list)

macro (do_test arg)
  add_test (integerlistTests${arg} ${PROJECT_BINARY_DIR}/../bin/integer-list ${arg})
endmacro (do_test)

do_test (1)
do_test (2)
do_test (3)
do_test (4)
do_test (5)
do_test (6)
do_test (7)
do_test (8)
do_test (9)
do_test (10)
do_test (1 2)

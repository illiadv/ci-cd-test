project(factorial)

add_library(factorial factorial.cpp)

find_package(GTest REQUIRED)
include_directories( ${GTEST_INCLUDE_DIRS} )
enable_testing()

find_package(Threads REQUIRED)

add_executable(factorialTest factorialTest.cpp)
target_link_libraries(factorialTest factorial ${GTEST_LIBRARIES} Threads::Threads)

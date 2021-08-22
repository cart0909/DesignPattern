file(GLOB_RECURSE SOURCES "*.cpp")

add_executable(test_dp ${SOURCES})
target_link_libraries(test_dp DesignPattern gtest_main)
add_Test(test_dp test_dp)
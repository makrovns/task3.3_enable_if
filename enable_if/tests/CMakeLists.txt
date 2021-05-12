set(SOURCE_exe
fun_for_test.hpp
tests.cpp)

add_executable(${PRO}_tests ${SOURCE_exe})

target_link_libraries(${PRO}_tests PUBLIC ${PRO}_lib)

target_link_libraries(${PRO}_tests PUBLIC gtest_main)

target_include_directories(${PRO}_tests PUBLIC ${CMAKE_CURRENT_LIST_DIR})

set_property(TARGET ${PRO}_tests PROPERTY FOLDER "enable_if_tests")
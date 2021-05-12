set(SOURCE_lib 
enable_if.hpp
enable_if.cpp
)


add_library(${PRO}_lib STATIC ${SOURCE_lib})

target_include_directories(${PRO}_lib PUBLIC ${CMAKE_CURRENT_LIST_DIR})

source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCE_lib})

set_property(TARGET ${PRO}_lib PROPERTY FOLDER "enable_if_lib")

add_subdirectory(tests)
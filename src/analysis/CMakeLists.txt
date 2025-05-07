add_library(analysis
    src/analsys.cpp
)

target_include_directories(analysis PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
file(GLOB_RECURSE libsrc src/*.cpp src/*.h)

add_library(runtime ${libsrc})

target_include_directories(runtime
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(runtime PUBLIC core)
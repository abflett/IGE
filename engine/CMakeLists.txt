add_subdirectory(external)

file(GLOB_RECURSE libsrc src/*.cpp src/*.h)

add_library(engine ${libsrc})

target_include_directories(engine
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(engine PUBLIC external)
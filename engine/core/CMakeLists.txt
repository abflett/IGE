file(GLOB_RECURSE libsrc src/*.cpp src/*.h)

add_library(core STATIC ${libsrc})

target_include_directories(core
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include()
)

target_link_libraries(core PUBLIC SDL3::SDL3)
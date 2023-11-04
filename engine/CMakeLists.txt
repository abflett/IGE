add_subdirectory(external)

add_library(engine
    src/engine.cpp
)

target_include_directories(engine
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(engine PRIVATE external)
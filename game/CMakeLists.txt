add_executable(game
    src/main.cpp
)

target_include_directories(game
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(game
    PRIVATE engine
)
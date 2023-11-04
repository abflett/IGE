add_executable(editor
    src/main.cpp
)

target_include_directories(editor
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(editor
    PRIVATE engine
)
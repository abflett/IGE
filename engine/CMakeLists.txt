add_subdirectory(external)
add_subdirectory(core)
add_subdirectory(runtime)

add_library(engine INTERFACE)

target_link_libraries(engine INTERFACE runtime)
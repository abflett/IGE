set(SDL_TEST OFF)
set(BUILD_SHARED_LIBS OFF)

add_subdirectory(SDL)

add_library(external INTERFACE)

target_link_libraries(external INTERFACE SDL3::SDL3)

#target_include_directories(external INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
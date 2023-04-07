
# Boost
find_package(Boost REQUIRED COMPONENTS program_options)
include_directories(${Boost_INCLUDE_DIR})

file(GLOB _SRCS lian-1/*.cpp)
# lian-1
add_executable(lian-1 ${_SRCS})
target_link_libraries(lian-1 Boost::program_options)

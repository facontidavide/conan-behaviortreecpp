cmake_minimum_required(VERSION 3.15)
project(behaviortree.cpp CXX)




add_library(behaviortree.cpp src/behaviortree.cpp.cpp)
target_include_directories(behaviortree.cpp PUBLIC include)



set_target_properties(behaviortree.cpp PROPERTIES PUBLIC_HEADER "include/behaviortree.cpp.h")
install(TARGETS behaviortree.cpp)

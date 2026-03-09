find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

add_executable(your_app main.cpp)
target_link_libraries(your_app Qt6::Core Qt6::Gui Qt6::Widgets)
target_include_directories(your_app PRIVATE ${Qt6_INCLUDE_DIRS})
cmake_minimum_required(VERSION 3.19)
project(2-3QTConsoleApp LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(2-3QTConsoleApp
    main.cpp
)

target_link_libraries(2-3QTConsoleApp
    PRIVATE
        Qt::Core
)

install(TARGETS 2-3QTConsoleApp
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

cmake_minimum_required(VERSION 3.19)
project(3-3QTParentChildRelationship LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(3-3QTParentChildRelationship
    main.cpp house.cpp house.h
)

target_link_libraries(3-3QTParentChildRelationship
    PRIVATE
        Qt::Core
)

install(TARGETS 3-3QTParentChildRelationship
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

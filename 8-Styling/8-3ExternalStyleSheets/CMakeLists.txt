cmake_minimum_required(VERSION 3.19)
project(8-3ExternalStyleSheets LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

set(CMAKE_AUTORCC ON)

qt_standard_project_setup()

qt_add_executable(8-3ExternalStyleSheets
    WIN32 MACOSX_BUNDLE
    main.cpp
    widget.cpp
    widget.h
    widget.ui
    suredialog.h suredialog.cpp suredialog.ui
    resource.qrc
)

target_link_libraries(8-3ExternalStyleSheets
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS 8-3ExternalStyleSheets
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET 8-3ExternalStyleSheets
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})

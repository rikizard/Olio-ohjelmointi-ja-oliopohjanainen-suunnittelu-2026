cmake_minimum_required(VERSION 3.16)

project(ItalianCheff LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ItalianCheff main.cpp
    chef.h
    ItalianCheff.h
    cheff.cpp
    italiancheff.cpp)

include(GNUInstallDirs)
install(TARGETS ItalianCheff
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

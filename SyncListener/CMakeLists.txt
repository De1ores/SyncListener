cmake_minimum_required(VERSION 3.28)
project(SyncListener)

set(CMAKE_CXX_STANDARD 23)

include_directories(
                    D:\\3rdlib\\boost_1_80_0

                                            )
link_directories(D:\\3rdlib\\boost_1_80_0\\libs)

add_executable(SyncListener main.cpp
                                )

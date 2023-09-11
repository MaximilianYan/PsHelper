cmake_minimum_required(VERSION 3.0.0)
project(PsHelper)

include_directories(headers)

add_executable(${PROJECT_NAME}
                    sources/main.cpp
                    sources/Browser.cpp
                    sources/BrowserNode.cpp
                    sources/NodeSubtree.cpp
                    sources/NodeInt.cpp
                    sources/NodeStr.cpp
                    )

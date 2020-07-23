cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(testApp)

set(INCLUDE_DIR include)
set(SOURCES_DIR src)

set(SOURCES ${SOURCES_DIR}/employee_test.cpp
            ${SOURCES_DIR}/abstract_employee.cpp
            ${SOURCES_DIR}/employee.cpp
            ${SOURCES_DIR}/manager.cpp
            ${SOURCES_DIR}/fink.cpp
            ${SOURCES_DIR}/high_fink.cpp)

add_executable(testapp ${SOURCES})
target_include_directories(testapp PUBLIC ${INCLUDE_DIR})
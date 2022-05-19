cmake_minimum_required(VERSION 3.10.2 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 17)

project( PYMGOS
         LANGUAGES C CXX 
         VERSION   1.0.0
)

# Set root of project directory
get_filename_component(PROJECT_PATH_ROOT "../" ABSOLUTE)
message(${PROJECT_PATH_ROOT})
message(${CMAKE_PROJECT_NAME})
#  Enable verbose output from Makefile builds
set(CMAKE_VERBOSE_MAKEFILE true)

# Set root of main source code directories
set(CMAKE_ROOT "${PROJECT_PATH_ROOT}/CMake")
set(V_ROOT "${PROJECT_PATH_ROOT}/dev_vdrc/src/V")
    set(V_API_ROOT "${V_ROOT}/API_tier")
    set(V_Core_ROOT "${V_ROOT}/Core_tier")
    set(V_Geo_ROOT "${V_ROOT}/Geo_tier")
    set(VUFS_ROOT "${V_ROOT}/VUFS")
set(MGOS_ROOT "${PROJECT_PATH_ROOT}/dev_vdrc/src/MGOS")
set(Test_ROOT "${PROJECT_PATH_ROOT}/Test")
set(PyMGOS_ROOT "${PROJECT_PATH_ROOT}/src")
set(PyBind11_ROOT "${PROJECT_PATH_ROOT}/pybind11")
set(CMakeBuild_ROOT "{PROJECT_PATH_ROOT}/build")

set(LIB_OUT_DIR "${CMAKE_CURRENT_LIST_DIR}/lib")
set(RUNTIME_OUT_DIR "${CMAKE_CURRENT_LIST_DIR}/bin")
set(CMAKE_DEBUG_POSTFIX _d)
set(CMAKE_RELWITHDEBUGINFO_POSTFIX _rd)
# set(CMAKE_CXX_FLAGS "-std=c++11 -pthread -lstdc++fs") 

add_subdirectory(MGOS)
add_subdirectory(V/API_tier)
add_subdirectory(V/Core_tier)
add_subdirectory(V/Core_tier/Core_Pocket)
add_subdirectory(V/Geo_tier/Geo_GeoModel)
add_subdirectory(V/Geo_tier/Geo_Molecule)
add_subdirectory(V/Geo_tier/Geo_Voronoi3D)
add_subdirectory(V/VUFS)
add_subdirectory(Test)

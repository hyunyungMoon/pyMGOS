set(PROJECT_NAME TestMGOS)
set (TEST_MGOS_RUNTIME_OUT_DIR "${PROJECT_PATH_ROOT}/CMake/bin")

set(Sources
    "${Test_ROOT}/testMGOS.cpp"
)
source_group("Sources" FILES ${Sources})

set(ALL_FILES
    ${Sources}
)

add_executable(${PROJECT_NAME} ${ALL_FILES})
set_target_properties(
    ${PROJECT_NAME}
    PROPERTIES 
    # ARCHIVE_OUTPUT_DIRECTORY ${LIB_OUT_DIR}
    # LIBRARY_OUTPUT_DIRECTORY ${LIB_OUT_DIR}
    RUNTIME_OUTPUT_DIRECTORY ${RUNTIME_OUT_DIR}
    DEBUG_POSTFIX ${CMAKE_DEBUG_POSTFIX}
    RELWITHDEBINFO_POSTFIX ${CMAKE_RELWITHDEBUGINFO_POSTFIX}
    SUFFIX ".out"
)

################################################################################
# Include directories
################################################################################
target_include_directories(${PROJECT_NAME} PRIVATE
    "${MGOS_ROOT}/include"
    "${V_API_ROOT}/include"
)



add_dependencies(${PROJECT_NAME}
    VUFS
    # V_Geo_GeoModel
    V_Geo_Molecule
    V_Geo_Voronoi3D
    V_Core
    V_Core_Pocket
    V_API
    MGOS
)

target_link_libraries(${PROJECT_NAME}
    VUFS
    # V_Geo_GeoModel
    V_Geo_Molecule
    V_Geo_Voronoi3D
    V_Core
    V_Core_Pocket    
    V_API    
    MGOS
)
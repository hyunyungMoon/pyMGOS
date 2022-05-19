set(PROJECT_NAME PyMGOS)

################################################################################
# Source groups
################################################################################
set(SourcesPyMGOS
    "${PyMGOS_ROOT}/V/API_tier/pyPoint3d.cpp"
    "${PyMGOS_ROOT}/V/API_tier/pySphere3d.cpp"
    
    "${PyMGOS_ROOT}/init_PyMGOS.cpp"

    "${PyMGOS_ROOT}/MGOS/pyAtom.cpp"
    "${PyMGOS_ROOT}/MGOS/pyAtomPtr.cpp"
    "${PyMGOS_ROOT}/MGOS/pyAtomPtrSet.cpp"
    "${PyMGOS_ROOT}/MGOS/pyAtomTriplet.cpp"
    "${PyMGOS_ROOT}/MGOS/pyAtomTripletSet.cpp"
    "${PyMGOS_ROOT}/MGOS/pyMolecularChannel.cpp"
    "${PyMGOS_ROOT}/MGOS/pyMolecularChannelSet.cpp"
    "${PyMGOS_ROOT}/MGOS/pyMolecularGeometry.cpp"
    "${PyMGOS_ROOT}/MGOS/pyMolecularMassProperty.cpp"
    "${PyMGOS_ROOT}/MGOS/pyMolecularPocket.cpp"
    "${PyMGOS_ROOT}/MGOS/pyMolecularPocketSet.cpp"
    "${PyMGOS_ROOT}/MGOS/pyMolecularVoid.cpp"
    "${PyMGOS_ROOT}/MGOS/pyMolecularVoidSet.cpp"
    "${PyMGOS_ROOT}/MGOS/pySpineOfMolecularChannel.cpp"
    
    
)

set(ALL_FILES
    ${Sources}
    ${Headers}
    ${SourcesPyMGOS}
)

set(PyMGOS_LIB_OUT_DIR "${PROJECT_PATH_ROOT}/lib")

add_definitions(-DPYMGOS)

add_subdirectory(${PyBind11_ROOT} ${CMakeBuild_ROOT})

################################################################################
# Target
################################################################################
pybind11_add_module(${PROJECT_NAME} MODULE ${ALL_FILES})
set_target_properties(
    ${PROJECT_NAME}
    PROPERTIES 
    # ARCHIVE_OUTPUT_DIRECTORY ${LIB_OUT_DIR}
    # LIBRARY_OUTPUT_DIRECTORY ${LIB_OUT_DIR}
    ARCHIVE_OUTPUT_DIRECTORY ${PyMGOS_LIB_OUT_DIR}
    LIBRARY_OUTPUT_DIRECTORY ${PyMGOS_LIB_OUT_DIR}   
)
################################################################################
# Target name
################################################################################
set_target_properties(${PROJECT_NAME} PROPERTIES
    TARGET_NAME_DEBUG   "PyMGOS_d"
    TARGET_NAME_RELEASE "PyMGOS"
)
################################################################################
# Output directory
################################################################################
# set_target_properties(${PROJECT_NAME} PROPERTIES
#     OUTPUT_DIRECTORY_DEBUG   "${CMAKE_SOURCE_DIR}/"
#     OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/"
# )
################################################################################
# Include directories
################################################################################
target_include_directories(${PROJECT_NAME} PRIVATE
    "${V_API_ROOT}/include"
    "${MGOS_ROOT}/include"
    "${MGOS_ROOT}/include/rep"
)


################################################################################
# Dependencies
################################################################################
add_dependencies(${PROJECT_NAME}
    V_API
)

# Link with other targets.
target_link_libraries(${PROJECT_NAME} PUBLIC
    V_API
)

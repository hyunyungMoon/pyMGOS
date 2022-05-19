set(PROJECT_NAME MGOS)

################################################################################
# Source groups
################################################################################
set(Sources
    "${MGOS_ROOT}/src/Atom.cpp"
    "${MGOS_ROOT}/src/AtomPtr.cpp"
    "${MGOS_ROOT}/src/AtomPtrSet.cpp"
    "${MGOS_ROOT}/src/AtomPtrSetRep.cpp"
    "${MGOS_ROOT}/src/AtomTriplet.cpp"
    "${MGOS_ROOT}/src/AtomTripletSet.cpp"
    "${MGOS_ROOT}/src/AtomTripletSetRep.cpp"
    "${MGOS_ROOT}/src/MGOSFileIO.cpp"
    "${MGOS_ROOT}/src/MolecularChannel.cpp"
    "${MGOS_ROOT}/src/MolecularChannelRep.cpp"
    "${MGOS_ROOT}/src/MolecularChannelSet.cpp"
    "${MGOS_ROOT}/src/MolecularChannelSetRep.cpp"
    "${MGOS_ROOT}/src/MolecularGeometry.cpp"
    "${MGOS_ROOT}/src/MolecularGeometryRep.cpp"
    "${MGOS_ROOT}/src/MolecularMassProperty.cpp"
    "${MGOS_ROOT}/src/MolecularMassPropertyRep.cpp"
    "${MGOS_ROOT}/src/MolecularPocket.cpp"
    "${MGOS_ROOT}/src/MolecularPocketRep.cpp"
    "${MGOS_ROOT}/src/MolecularPocketSet.cpp"
    "${MGOS_ROOT}/src/MolecularPocketSetRep.cpp"
    "${MGOS_ROOT}/src/MolecularVoid.cpp"
    "${MGOS_ROOT}/src/MolecularVoidRep.cpp"
    "${MGOS_ROOT}/src/MolecularVoidSet.cpp"
    "${MGOS_ROOT}/src/MolecularVoidSetRep.cpp"
    "${MGOS_ROOT}/src/SpineOfMolecularChannel.cpp"
    "${MGOS_ROOT}/src/SpineOfMolecularChannelRep.cpp"
)
source_group("Sources" FILES ${Sources})

set(Headers
    "${MGOS_ROOT}/include/Atom.h"
    "${MGOS_ROOT}/include/AtomPtr.h"
    "${MGOS_ROOT}/include/AtomPtrSet.h"
    "${MGOS_ROOT}/include/AtomTriplet.h"
    "${MGOS_ROOT}/include/AtomTripletSet.h"
    "${MGOS_ROOT}/include/MGOSConst.h"
    "${MGOS_ROOT}/include/MGOSInfo.h"
    "${MGOS_ROOT}/include/MolecularChannel.h"
    "${MGOS_ROOT}/include/MolecularChannelSet.h"
    "${MGOS_ROOT}/include/MolecularGeometry.h"
    "${MGOS_ROOT}/include/MolecularMassProperty.h"
    "${MGOS_ROOT}/include/MolecularPocket.h"
    "${MGOS_ROOT}/include/MolecularPocketSet.h"
    "${MGOS_ROOT}/include/MolecularVoid.h"
    "${MGOS_ROOT}/include/MolecularVoidSet.h"
    "${MGOS_ROOT}/include/SpineOfMolecularChannel.h"
    "${MGOS_ROOT}/include/rep/MolecularMassPropertyRep.h"
    "${MGOS_ROOT}/include/rep/AtomPtrSetRep.h"
    "${MGOS_ROOT}/include/rep/AtomTripletSetRep.h"
    "${MGOS_ROOT}/include/rep/MGOSFileIO.h"
    "${MGOS_ROOT}/include/rep/MolecularChannelRep.h"
    "${MGOS_ROOT}/include/rep/MolecularChannelSetRep.h"
    "${MGOS_ROOT}/include/rep/MolecularGeometryRep.h"
    "${MGOS_ROOT}/include/rep/MolecularPocketRep.h"
    "${MGOS_ROOT}/include/rep/MolecularPocketSetRep.h"
    "${MGOS_ROOT}/include/rep/MolecularVoidRep.h"
    "${MGOS_ROOT}/include/rep/MolecularVoidSetRep.h"
    "${MGOS_ROOT}/include/rep/SpineOfMolecularChannelRep.h"
)
source_group("Headers" FILES ${Headers})

set(ALL_FILES
    ${Sources}
    ${Headers}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} STATIC ${ALL_FILES})
set_target_properties(
    ${PROJECT_NAME}
    PROPERTIES 
    ARCHIVE_OUTPUT_DIRECTORY ${LIB_OUT_DIR}
    LIBRARY_OUTPUT_DIRECTORY ${LIB_OUT_DIR}
)

################################################################################
# Target name
################################################################################
set_target_properties(${PROJECT_NAME} PROPERTIES
    TARGET_NAME_DEBUG   "libMGOS_d"
    TARGET_NAME_RELEASE "libMGOS"
)
################################################################################
# Output directory
################################################################################
set_target_properties(${PROJECT_NAME} PROPERTIES
    OUTPUT_DIRECTORY_DEBUG   "${CMAKE_SOURCE_DIR}/"
    OUTPUT_DIRECTORY_RELEASE "${CMAKE_SOURCE_DIR}/"
)
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

################################################################################
# Call CMake to build PyMGOS
################################################################################
include("${CMAKE_CURRENT_LIST_DIR}/PyMGOSCMakeLists.cmake")

set(PROJECT_NAME V_Core_Pocket)

################################################################################
# Source groups
################################################################################

set(Sources
    "${V_Core_ROOT}/Pocket/src/AugmentedBetaComplex.cpp"
    "${V_Core_ROOT}/Pocket/src/AugmentedBCCell.cpp"
    "${V_Core_ROOT}/Pocket/src/AugmentedBCEdge.cpp"
    "${V_Core_ROOT}/Pocket/src/AugmentedBCFace.cpp"
    "${V_Core_ROOT}/Pocket/src/AugmentedBCVertex.cpp"
    "${V_Core_ROOT}/Pocket/src/ChemicalPropertiesOfPocket.cpp"
    "${V_Core_ROOT}/Pocket/src/FunctionsForPocket.cpp"
    "${V_Core_ROOT}/Pocket/src/GEdge.cpp"
    "${V_Core_ROOT}/Pocket/src/Graph_in_Pocket.cpp"
    "${V_Core_ROOT}/Pocket/src/GVertex.cpp"
    "${V_Core_ROOT}/Pocket/src/ManifoldizedBetaShape.cpp"
    "${V_Core_ROOT}/Pocket/src/MBSBody.cpp"
    "${V_Core_ROOT}/Pocket/src/MBSEdge.cpp"
    "${V_Core_ROOT}/Pocket/src/MBSFace.cpp"
    "${V_Core_ROOT}/Pocket/src/MBSShell.cpp"
    "${V_Core_ROOT}/Pocket/src/MBSVertex.cpp"
    "${V_Core_ROOT}/Pocket/src/NonManifoldCorner.cpp"
    "${V_Core_ROOT}/Pocket/src/Pocket.cpp"
    "${V_Core_ROOT}/Pocket/src/PocketPrimitive.cpp"
    "${V_Core_ROOT}/Pocket/src/PointerToSimplex.cpp"
    "${V_Core_ROOT}/Pocket/src/PQNode.cpp"
    "${V_Core_ROOT}/Pocket/src/PriorityQueueForGVertex.cpp"
    "${V_Core_ROOT}/Pocket/src/UserDefinedPocketByResidue.cpp"
)

source_group("Sources" FILES ${Sources})


set(Header
    "${V_Core_ROOT}/Pocket/include/AugmentedBCVertex.h"
    "${V_Core_ROOT}/Pocket/include/AugmentedBCCell.h"
    "${V_Core_ROOT}/Pocket/include/AugmentedBCEdge.h"
    "${V_Core_ROOT}/Pocket/include/AugmentedBCFace.h"
    "${V_Core_ROOT}/Pocket/include/AugmentedBetaComplex.h"
    "${V_Core_ROOT}/Pocket/include/ChemicalPropertiesOfPocket.h"
    "${V_Core_ROOT}/Pocket/include/ConstForPocket.h"
    "${V_Core_ROOT}/Pocket/include/FunctionsForPocket.h"
    "${V_Core_ROOT}/Pocket/include/GEdge.h"
    "${V_Core_ROOT}/Pocket/include/Graph_in_Pocket.h"
    "${V_Core_ROOT}/Pocket/include/GVertex.h"
    "${V_Core_ROOT}/Pocket/include/ManifoldizedBetaShape.h"
    "${V_Core_ROOT}/Pocket/include/MBSBody.h"
    "${V_Core_ROOT}/Pocket/include/MBSEdge.h"
    "${V_Core_ROOT}/Pocket/include/MBSFace.h"
    "${V_Core_ROOT}/Pocket/include/MBSShell.h"
    "${V_Core_ROOT}/Pocket/include/MBSVertex.h"
    "${V_Core_ROOT}/Pocket/include/NonManifoldCorner.h"
    "${V_Core_ROOT}/Pocket/include/Pocket.h"
    "${V_Core_ROOT}/Pocket/include/PocketPrimitive.h"
    "${V_Core_ROOT}/Pocket/include/PointerToSimplex.h"
    "${V_Core_ROOT}/Pocket/include/PQNode.h"
    "${V_Core_ROOT}/Pocket/include/PriorityQueueForGVertex.h"
    "${V_Core_ROOT}/Pocket/include/UserDefinedPocketByResidue.h"
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
# use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
# set(ROOT_NAMESPACE V_Geo_GeoModel_LNX)

# set_target_properties(${PROJECT_NAME} PROPERTIES
#     VS_GLOBAL_KEYWORD "Linux"
# )
################################################################################
# Target name
################################################################################
set_target_properties(${PROJECT_NAME} PROPERTIES
    TARGET_NAME_DEBUG   "libV_Core_Pocket_d"
    TARGET_NAME_RELEASE "libV_Core_Pocket"
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
    "${VUFS_ROOT}/include;"
    "${V_Geo_ROOT}/Molecule/include"
    "${V_Core_ROOT}/include"
    "${V_Core_ROOT}/Pocket/include"
    "${V_API_ROOT}/include"
)


set(PROJECT_NAME V_API)

################################################################################
# Source groups
################################################################################
set(Sources
    "${V_API_ROOT}/src/AtomGenerator.cpp"
    "${V_API_ROOT}/src/AtomSetVoronoiDiagram.cpp"
    "${V_API_ROOT}/src/BCStatistics.cpp"
    "${V_API_ROOT}/src/BetaComplex.cpp"
    "${V_API_ROOT}/src/BetaSpan.cpp"
    "${V_API_ROOT}/src/ComponentOfVoronoiComplement.cpp"
    "${V_API_ROOT}/src/DepthInAtomSet.cpp"
    "${V_API_ROOT}/src/DepthInAtomSetRep.cpp"
    "${V_API_ROOT}/src/DepthMachineForAtomSet.cpp"
    "${V_API_ROOT}/src/EdgeInSpine.cpp"
    "${V_API_ROOT}/src/ExternalStructureOfAtomSet.cpp"
    "${V_API_ROOT}/src/FaceInSpine.cpp"
    "${V_API_ROOT}/src/FileIO.cpp"
    "${V_API_ROOT}/src/InternalStructureOfAtomSet.cpp"
    "${V_API_ROOT}/src/MassProperty.cpp"
    "${V_API_ROOT}/src/MassPropertyMachineForAtomSet.cpp"
    "${V_API_ROOT}/src/MassPropertyOfAtomUnion.cpp"
    "${V_API_ROOT}/src/MassPropertyOfAtomUnionRep.cpp"
    "${V_API_ROOT}/src/MassPropertyRep.cpp"
    "${V_API_ROOT}/src/Molecule.cpp"
    "${V_API_ROOT}/src/PocketInAtomSet.cpp"
    "${V_API_ROOT}/src/PocketInAtomSetRep.cpp"
    "${V_API_ROOT}/src/PocketMachineForAtomSet.cpp"
    "${V_API_ROOT}/src/PocketSetInAtomSet.cpp"
    "${V_API_ROOT}/src/PocketSetInAtomSetRep.cpp"
    "${V_API_ROOT}/src/Point3d.cpp"
    "${V_API_ROOT}/src/QTCell.cpp"
    "${V_API_ROOT}/src/QTComparer.cpp"
    "${V_API_ROOT}/src/QTEdge.cpp"
    "${V_API_ROOT}/src/QTFace.cpp"
    "${V_API_ROOT}/src/QTStatistics.cpp"
    "${V_API_ROOT}/src/QTVertex.cpp"
    "${V_API_ROOT}/src/QuasiTriangulation.cpp"
    "${V_API_ROOT}/src/Sphere3d.cpp"
    "${V_API_ROOT}/src/SpineEdgePtr.cpp"
    "${V_API_ROOT}/src/SpineOfCavityInAtomSet.cpp"
    "${V_API_ROOT}/src/SpineOfTunnelInAtomSet.cpp"
    "${V_API_ROOT}/src/SpineOfTunnelInAtomSetRep.cpp"
    "${V_API_ROOT}/src/SpineVertexPtr.cpp"
    "${V_API_ROOT}/src/Statistics.cpp"
    "${V_API_ROOT}/src/TunnelInAtomSet.cpp"
    "${V_API_ROOT}/src/TunnelInAtomSetRep.cpp"
    "${V_API_ROOT}/src/TunnelMachineForAtomSet.cpp"
    "${V_API_ROOT}/src/TunnelSetInAtomSet.cpp"
    "${V_API_ROOT}/src/TunnelSetInAtomSetRep.cpp"
    "${V_API_ROOT}/src/VCell.cpp"
    "${V_API_ROOT}/src/VDComparer.cpp"
    "${V_API_ROOT}/src/VDStatistics.cpp"
    "${V_API_ROOT}/src/VEdge.cpp"
    "${V_API_ROOT}/src/VertexInSpine.cpp"
    "${V_API_ROOT}/src/VFace.cpp"
    "${V_API_ROOT}/src/VoidInAtomSet.cpp"
    "${V_API_ROOT}/src/VoidInAtomSetRep.cpp"
    "${V_API_ROOT}/src/VoidMachineForAtomSet.cpp"
    "${V_API_ROOT}/src/VoidMassPropertyMachineForAtomSet.cpp"
    "${V_API_ROOT}/src/VoidSetInAtomSet.cpp"
    "${V_API_ROOT}/src/VoidSetInAtomSetRep.cpp"
    "${V_API_ROOT}/src/VoronoiComplement.cpp"
    "${V_API_ROOT}/src/VVertex.cpp"
)
source_group("Sources" FILES ${Sources})

set(Headers
    "${V_API_ROOT}/include/AtomGenerator.h"
    "${V_API_ROOT}/include/AtomSetVoronoiDiagram.h"
    "${V_API_ROOT}/include/BetaComplex.h"
    "${V_API_ROOT}/include/BetaSpan.h"
    "${V_API_ROOT}/include/ComponentOfVoronoiComplement.h"
    "${V_API_ROOT}/include/DepthInAtomSet.h"
    "${V_API_ROOT}/include/ExternalStructureOfAtomSet.h"
    "${V_API_ROOT}/include/FileIO.h"
    "${V_API_ROOT}/include/InternalStructureOfAtomSet.h"
    "${V_API_ROOT}/include/MassProperty.h"
    "${V_API_ROOT}/include/Molecule.h"
    "${V_API_ROOT}/include/PocketInAtomSet.h"
    "${V_API_ROOT}/include/PocketSetInAtomSet.h"
    "${V_API_ROOT}/include/Point3d.h"
    "${V_API_ROOT}/include/QTCell.h"
    "${V_API_ROOT}/include/QTEdge.h"
    "${V_API_ROOT}/include/QTFace.h"
    "${V_API_ROOT}/include/QTVertex.h"
    "${V_API_ROOT}/include/QuasiTriangulation.h"
    "${V_API_ROOT}/include/rep/BCStatistics.h"
    "${V_API_ROOT}/include/rep/DepthInAtomSetRep.h"
    "${V_API_ROOT}/include/rep/DepthMachineForAtomSet.h"
    "${V_API_ROOT}/include/rep/EdgeInSpine.h"
    "${V_API_ROOT}/include/rep/FaceInSpine.h"
    "${V_API_ROOT}/include/rep/MassPropertyMachineForAtomSet.h"
    "${V_API_ROOT}/include/rep/MassPropertyOfAtomUnion.h"
    "${V_API_ROOT}/include/rep/MassPropertyOfAtomUnionRep.h"
    "${V_API_ROOT}/include/rep/MassPropertyRep.h"
    "${V_API_ROOT}/include/rep/PocketInAtomSetRep.h"
    "${V_API_ROOT}/include/rep/PocketMachineForAtomSet.h"
    "${V_API_ROOT}/include/rep/PocketSetInAtomSetRep.h"
    "${V_API_ROOT}/include/rep/QTComparer.h"
    "${V_API_ROOT}/include/rep/QTStatistics.h"
    "${V_API_ROOT}/include/rep/SpineOfCavityInAtomSet.h"
    "${V_API_ROOT}/include/rep/SpineOfTunnelInAtomSetRep.h"
    "${V_API_ROOT}/include/rep/Statistics.h"
    "${V_API_ROOT}/include/rep/TunnelInAtomSetRep.h"
    "${V_API_ROOT}/include/rep/TunnelMachineForAtomSet.h"
    "${V_API_ROOT}/include/rep/TunnelSetInAtomSetRep.h"
    "${V_API_ROOT}/include/rep/VDComparer.h"
    "${V_API_ROOT}/include/rep/VDStatistics.h"
    "${V_API_ROOT}/include/rep/VertexInSpine.h"
    "${V_API_ROOT}/include/rep/VoidInAtomSetRep.h"
    "${V_API_ROOT}/include/rep/VoidMachineForAtomSet.h"
    "${V_API_ROOT}/include/rep/VoidMassPropertyMachineForAtomSet.h"
    "${V_API_ROOT}/include/rep/VoidSetInAtomSetRep.h"
    "${V_API_ROOT}/include/Sphere3d.h"
    "${V_API_ROOT}/include/SpineEdgePtr.h"
    "${V_API_ROOT}/include/SpineOfTunnelInAtomSet.h"
    "${V_API_ROOT}/include/SpineVertexPtr.h"
    "${V_API_ROOT}/include/Triplet.h"
    "${V_API_ROOT}/include/TunnelInAtomSet.h"
    "${V_API_ROOT}/include/TunnelSetInAtomSet.h"
    "${V_API_ROOT}/include/V_const.h"
    "${V_API_ROOT}/include/V_Info.h"
    "${V_API_ROOT}/include/VCell.h"
    "${V_API_ROOT}/include/VEdge.h"
    "${V_API_ROOT}/include/VFace.h"
    "${V_API_ROOT}/include/VoidInAtomSet.h"
    "${V_API_ROOT}/include/VoidSetInAtomSet.h"
    "${V_API_ROOT}/include/VoronoiComplement.h"
    "${V_API_ROOT}/include/VVertex.h"
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
# set(ROOT_NAMESPACE V_API)

# set_target_properties(${PROJECT_NAME} PROPERTIES
#     VS_GLOBAL_KEYWORD "Linux"
# )
################################################################################
# Target name
################################################################################
set_target_properties(${PROJECT_NAME} PROPERTIES
    TARGET_NAME_DEBUG   "libV_API_d"
    TARGET_NAME_RELEASE "libV_API"
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
    "${VUFS_ROOT}/include"
    "${V_Geo_ROOT}/Molecule/include"
    "${V_Core_ROOT}/include"
    "${V_API_ROOT}/include"
    "${V_API_ROOT}/include/rep"
    "${V_Core_ROOT}/Pocket/include"
)

################################################################################
# Dependencies
################################################################################
add_dependencies(${PROJECT_NAME}
    VUFS
    V_Geo_Molecule
    V_Geo_Voronoi3D
    V_Core
    V_Core_Pocket
)

# Link with other targets.
target_link_libraries(${PROJECT_NAME} PRIVATE
    VUFS
    V_Geo_Molecule
    V_Geo_Voronoi3D
    V_Core
    V_Core_Pocket
)

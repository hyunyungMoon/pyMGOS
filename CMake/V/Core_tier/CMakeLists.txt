set(PROJECT_NAME V_Core)

################################################################################
# Source groups
################################################################################
set(Sources
    "${V_Core_ROOT}/src/BallGeneratorCore.cpp"
    "${V_Core_ROOT}/src/BallSetVoronoiDiagramCore.cpp"
    "${V_Core_ROOT}/src/BetaComplexCore.cpp"
    "${V_Core_ROOT}/src/BetaSpanCore.cpp"
    "${V_Core_ROOT}/src/BisectorOfThreeBalls.cpp"
    "${V_Core_ROOT}/src/ComponentOfVoronoiComplementCore.cpp"
    "${V_Core_ROOT}/src/CoreTierFunction.cpp"
    "${V_Core_ROOT}/src/DCell.cpp"
    "${V_Core_ROOT}/src/DEdge.cpp"
    "${V_Core_ROOT}/src/DepthOfBCVerticesInBetaComplex.cpp"
    "${V_Core_ROOT}/src/DFace.cpp"
    "${V_Core_ROOT}/src/DVertex.cpp"
    "${V_Core_ROOT}/src/Generator.cpp"
    "${V_Core_ROOT}/src/InterWorldDataStructure.cpp"
    "${V_Core_ROOT}/src/IOFunctionsForBULLCore.cpp"
    "${V_Core_ROOT}/src/MassPropertyForOffsetModelOfBallSet.cpp"
    "${V_Core_ROOT}/src/MassPropertyForUnfilledSpaceOfBallSet.cpp"
    "${V_Core_ROOT}/src/MDCell.cpp"
    "${V_Core_ROOT}/src/MDEdge.cpp"
    "${V_Core_ROOT}/src/MDFace.cpp"
    "${V_Core_ROOT}/src/MDGate.cpp"
    "${V_Core_ROOT}/src/MDVertex.cpp"
    "${V_Core_ROOT}/src/MinimalInterWorldDataStructure.cpp"
    "${V_Core_ROOT}/src/MoleculeCore.cpp"
    "${V_Core_ROOT}/src/MQTCell.cpp"
    "${V_Core_ROOT}/src/MQTEdge.cpp"
    "${V_Core_ROOT}/src/MQTFace.cpp"
    "${V_Core_ROOT}/src/MQTGate.cpp"
    "${V_Core_ROOT}/src/MQTVertex.cpp"
    "${V_Core_ROOT}/src/PCell.cpp"
    "${V_Core_ROOT}/src/PEdge.cpp"
    "${V_Core_ROOT}/src/PFace.cpp"
    "${V_Core_ROOT}/src/PLoop.cpp"
    "${V_Core_ROOT}/src/PPartialEdge.cpp"
    "${V_Core_ROOT}/src/PVertex.cpp"
    "${V_Core_ROOT}/src/QTCellCore.cpp"
    "${V_Core_ROOT}/src/QTEdgeCore.cpp"
    "${V_Core_ROOT}/src/QTFaceCore.cpp"
    "${V_Core_ROOT}/src/QTFFileReaderCore.cpp"
    "${V_Core_ROOT}/src/QTFFileWriterCore.cpp"
    "${V_Core_ROOT}/src/QTVertexCore.cpp"
    "${V_Core_ROOT}/src/QuasiTriangulationCore.cpp"
    "${V_Core_ROOT}/src/QuasiTriangulationCoreInMinIWDS.cpp"
    "${V_Core_ROOT}/src/RadialEdgeDataStructure.cpp"
    "${V_Core_ROOT}/src/StatisticsCore.cpp"
    "${V_Core_ROOT}/src/TOI_VoronoiDiagram3D.cpp"
    "${V_Core_ROOT}/src/TriangulationCore.cpp"
    "${V_Core_ROOT}/src/TriangulationCoreInMinIWDS.cpp"
    "${V_Core_ROOT}/src/VCellCore.cpp"
    "${V_Core_ROOT}/src/VEdgeCore.cpp"
    "${V_Core_ROOT}/src/VFaceCore.cpp"
    "${V_Core_ROOT}/src/VLoopCore.cpp"
    "${V_Core_ROOT}/src/VoronoiComplementCore.cpp"
    "${V_Core_ROOT}/src/VoronoiDiagramConverter.cpp"
    "${V_Core_ROOT}/src/VoronoiDiagramCore.cpp"
    "${V_Core_ROOT}/src/VPartialEdgeCore.cpp"
    "${V_Core_ROOT}/src/VVertexCore.cpp"
)
source_group("Sources" FILES ${Sources})

set(Headers
    "${V_Core_ROOT}/include/BallGeneratorCore.h"
    "${V_Core_ROOT}/include/BallSetVoronoiDiagramCore.h"
    "${V_Core_ROOT}/include/BetaComplexCore.h"
    "${V_Core_ROOT}/include/BetaSpanCore.h"
    "${V_Core_ROOT}/include/BisectorOfThreeBalls.h"
    "${V_Core_ROOT}/include/ComponentOfVoronoiComplementCore.h"
    "${V_Core_ROOT}/include/ConstForCoreTier.h"
    "${V_Core_ROOT}/include/CoreTierFunction.h"
    "${V_Core_ROOT}/include/DCell.h"
    "${V_Core_ROOT}/include/DEdge.h"
    "${V_Core_ROOT}/include/DepthOfBCVerticesInBetaComplex.h"
    "${V_Core_ROOT}/include/DFace.h"
    "${V_Core_ROOT}/include/DVertex.h"
    "${V_Core_ROOT}/include/Generator.h"
    "${V_Core_ROOT}/include/InterWorldDataStructure.h"
    "${V_Core_ROOT}/include/IOFunctionsForBULLCore.h"
    "${V_Core_ROOT}/include/MassPropertyForOffsetModelOfBallSet.h"
    "${V_Core_ROOT}/include/MassPropertyForUnfilledSpaceOfBallSet.h"
    "${V_Core_ROOT}/include/MDCell.h"
    "${V_Core_ROOT}/include/MDEdge.h"
    "${V_Core_ROOT}/include/MDFace.h"
    "${V_Core_ROOT}/include/MDGate.h"
    "${V_Core_ROOT}/include/MDVertex.h"
    "${V_Core_ROOT}/include/MinimalInterWorldDataStructure.h"
    "${V_Core_ROOT}/include/MoleculeCore.h"
    "${V_Core_ROOT}/include/MQTCell.h"
    "${V_Core_ROOT}/include/MQTEdge.h"
    "${V_Core_ROOT}/include/MQTFace.h"
    "${V_Core_ROOT}/include/MQTGate.h"
    "${V_Core_ROOT}/include/MQTVertex.h"
    "${V_Core_ROOT}/include/PCell.h"
    "${V_Core_ROOT}/include/PEdge.h"
    "${V_Core_ROOT}/include/PFace.h"
    "${V_Core_ROOT}/include/PLoop.h"
    "${V_Core_ROOT}/include/PPartialEdge.h"
    "${V_Core_ROOT}/include/PVertex.h"
    "${V_Core_ROOT}/include/QTCellCore.h"
    "${V_Core_ROOT}/include/QTEdgeCore.h"
    "${V_Core_ROOT}/include/QTFaceCore.h"
    "${V_Core_ROOT}/include/QTFFileReaderCore.h"
    "${V_Core_ROOT}/include/QTFFileWriterCore.h"
    "${V_Core_ROOT}/include/QTVertexCore.h"
    "${V_Core_ROOT}/include/QuasiTriangulationCore.h"
    "${V_Core_ROOT}/include/QuasiTriangulationCoreInMinIWDS.h"
    "${V_Core_ROOT}/include/RadialEdgeDataStructure.h"
    "${V_Core_ROOT}/include/StatisticsCore.h"
    "${V_Core_ROOT}/include/TOI_VoronoiDiagram3D.h"
    "${V_Core_ROOT}/include/TriangulationCore.h"
    "${V_Core_ROOT}/include/TriangulationCoreInMinIWDS.h"
    "${V_Core_ROOT}/include/VCellCore.h"
    "${V_Core_ROOT}/include/VEdgeCore.h"
    "${V_Core_ROOT}/include/VFaceCore.h"
    "${V_Core_ROOT}/include/VLoopCore.h"
    "${V_Core_ROOT}/include/VoronoiComplementCore.h"
    "${V_Core_ROOT}/include/VoronoiDiagramConverter.h"
    "${V_Core_ROOT}/include/VoronoiDiagramCore.h"
    "${V_Core_ROOT}/include/VPartialEdgeCore.h"
    "${V_Core_ROOT}/include/VVertexCore.h"
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
# set(ROOT_NAMESPACE V_Core)

# set_target_properties(${PROJECT_NAME} PROPERTIES
#     VS_GLOBAL_KEYWORD "Linux"
# )
################################################################################
# Target name
################################################################################
set_target_properties(${PROJECT_NAME} PROPERTIES
    TARGET_NAME_DEBUG   "libV_Core_d"
    TARGET_NAME_RELEASE "libV_Core"
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
    "${V_Geo_ROOT}/VoronoiDiagram3D/include"
    "${V_Core_ROOT}/include"
    "${V_API_ROOT}/include"
)



set(PROJECT_NAME V_Geo_Voronoi3D)

################################################################################
# Source groups
################################################################################
set(Sources
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/AnalysisOfBetaUniverse.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/AnalysisOfVoronoiDiagram.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/Ball.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/BCFWriter.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/BetaCell.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/BetaEdge.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/BetaFace.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/BetaUniverse.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/BetaVertex.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/Bucket.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/BucketCellIndex.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/ClusterFromQT.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/FunctionsForVoronoiDiagram3D.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/Gate.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/GateForEdgeTracing.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/GateForSectionOfVDS.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/GateForT3D.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/GeometricConverter.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/IntegerBy96BIT.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/MeshForSphere.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/NavigatingBucketCell.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/PathInvestigator.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/rg_BallGenerator.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/rg_Generator.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/rg_QTEdge.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/rg_QTFace.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/rg_QTFReader.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/rg_QTFWriter.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/rg_QTGate.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/rg_QTGateList.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/rg_QTTetrahedron.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/rg_QTVertex.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/rg_QuasiTriangulation.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/rg_SphereSetVoronoiDiagram.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/RightCircularCone.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/SectionOfVDS.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/SimplexQueryingMachineInQTByKDTree.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/SolidObject.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/SubQuasitriangulation.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/T3DFace.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/T3DGate.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/T3DTetrahedron.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/T3DVertex.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/Triangle.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/Triangle3D.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/TriangleOnVDFace.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/Triangulation3D.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/VDCell.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/VDEdge.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/VDFace.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/VDLoop.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/VDPartialEdge.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/VDVertex.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/VIDIC.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/VIDICItem.cpp"
    "${V_Geo_ROOT}/VoronoiDiagram3D/src/VoronoiDiagram3D.cpp"
)
source_group("Sources" FILES ${Sources})

set(Headers
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/AnalysisOfBetaUniverse.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/AnalysisOfVoronoiDiagram.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/Ball.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/BCFWriter.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/BetaCell.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/BetaEdge.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/BetaFace.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/BetaUniverse.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/BetaVertex.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/Bucket.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/BucketCellIndex.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/ClusterFromQT.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/ConstForQuasiTriangulation.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/ConstForVoronoiDiagram3D.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/FunctionsForVoronoiDiagram3D.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/Gate.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/GateForEdgeTracing.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/GateForSectionOfVDS.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/GateForT3D.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/GeometricConverter.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/HeaderOfVDSfile.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/IntegerBy96BIT.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/MeshForSphere.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/NavigatingBucketCell.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/Pair.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/PathInvestigator.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/rg_BallGenerator.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/rg_Generator.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/rg_QTEdge.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/rg_QTFace.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/rg_QTFReader.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/rg_QTFWriter.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/rg_QTGate.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/rg_QTGateList.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/rg_QTTetrahedron.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/rg_QTVertex.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/rg_QuasiTriangulation.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/rg_SphereSetVoronoiDiagram.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/rg_Triple.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/RightCircularCone.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/SectionOfVDS.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/SimplexQueryingMachineInQTByKDTree.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/SolidObject.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/SubQuasitriangulation.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/T3DFace.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/T3DGate.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/T3DTetrahedron.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/T3DVertex.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/Triangle.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/Triangle3D.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/TriangleOnVDFace.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/Triangulation3D.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/VDCell.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/VDEdge.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/VDFace.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/VDLoop.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/VDPartialEdge.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/VDVertex.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/VIDIC.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/VIDICItem.h"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include/VoronoiDiagram3D.h"
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
# set(ROOT_NAMESPACE V_Geo_Voronoi3D_LNX)

# set_target_properties(${PROJECT_NAME} PROPERTIES
#     VS_GLOBAL_KEYWORD "Linux"
# )
################################################################################
# Target name
################################################################################
set_target_properties(${PROJECT_NAME} PROPERTIES
    TARGET_NAME_DEBUG   "libV_Geo_Voronoi3D_d"
    TARGET_NAME_RELEASE "libV_Geo_Voronoi3D"
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
    "${V_ROOT}/VUFS/include"
    "${V_Geo_ROOT}/Molecule/include"
    "${V_Geo_ROOT}/VoronoiDiagram3D/include"
)

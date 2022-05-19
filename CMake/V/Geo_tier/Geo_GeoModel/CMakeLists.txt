set(PROJECT_NAME V_Geo_GeoModel)

################################################################################
# Source groups
################################################################################
set(Sources
    "${V_Geo_ROOT}/GeoModel/src/GeoAtom.cpp"
    "${V_Geo_ROOT}/GeoModel/src/GeoModel.cpp"
    "${V_Geo_ROOT}/GeoModel/src/GeoModelIOFunctions.cpp"
)
source_group("Sources" FILES ${Sources})

set(Header
    "${V_Geo_ROOT}/GeoModel/include/GeoAtom.h"
    "${V_Geo_ROOT}/GeoModel/include/GeoModel.h"
    "${V_Geo_ROOT}/GeoModel/include/GeoModelIOFunctions.h"
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
    TARGET_NAME_DEBUG   "libV_Geo_GeoModel_d"
    TARGET_NAME_RELEASE "libV_Geo_GeoModel"
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
    "${V_Geo_ROOT}/GeoModel/include"
)



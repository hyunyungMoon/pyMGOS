set(PROJECT_NAME V_Geo_Molecule)

################################################################################
# Source groups
################################################################################
set(Sources
    "${V_Geo_ROOT}/Molecule/src/ChainIDSeqNumRotLibIDPairsForSidechainConformation.cpp"
    "${V_Geo_ROOT}/Molecule/src/Backbone.cpp"
    "${V_Geo_ROOT}/Molecule/src/BackboneConformation.cpp"
    "${V_Geo_ROOT}/Molecule/src/BackboneDihedralAnglePair.cpp"
    "${V_Geo_ROOT}/Molecule/src/Chain.cpp"
    "${V_Geo_ROOT}/Molecule/src/ChainIDSeqNumRotLibIDPair.cpp"
    "${V_Geo_ROOT}/Molecule/src/ChainIDWithSequenceNumbersOfMissingResidues.cpp"
    "${V_Geo_ROOT}/Molecule/src/ChemicalBond.cpp"
    "${V_Geo_ROOT}/Molecule/src/ChemicalPropertiesOfAtom.cpp"
    "${V_Geo_ROOT}/Molecule/src/EnclosingSphereOfSpheres.cpp"
    "${V_Geo_ROOT}/Molecule/src/FunctionsForMappingFromXVolToLJPotEnergy.cpp"
    "${V_Geo_ROOT}/Molecule/src/FunctionsForMolecule.cpp"
    "${V_Geo_ROOT}/Molecule/src/FunctionsForRotamerLibrary.cpp"
    "${V_Geo_ROOT}/Molecule/src/FunctionsForSplineFittingLJPotEnergy.cpp"
    "${V_Geo_ROOT}/Molecule/src/Helix.cpp"
    "${V_Geo_ROOT}/Molecule/src/HydrogenBond.cpp"
    "${V_Geo_ROOT}/Molecule/src/ManagerOfRotamers_Assigned_At_Residues.cpp"
    "${V_Geo_ROOT}/Molecule/src/ManagerOfRotamerSetsForSCP.cpp"
    "${V_Geo_ROOT}/Molecule/src/MoleculeIOFuctions.cpp"
    "${V_Geo_ROOT}/Molecule/src/PCAAnalyzer.cpp"
    "${V_Geo_ROOT}/Molecule/src/PDBFileFormatVerifier.cpp"
    "${V_Geo_ROOT}/Molecule/src/PharmaFeature.cpp"
    "${V_Geo_ROOT}/Molecule/src/PotentialEnergy.cpp"
    "${V_Geo_ROOT}/Molecule/src/ProteinConformation.cpp"
    "${V_Geo_ROOT}/Molecule/src/Residue.cpp"
    "${V_Geo_ROOT}/Molecule/src/ResidueWithSSCode.cpp"
    "${V_Geo_ROOT}/Molecule/src/rg_Atom.cpp"
    "${V_Geo_ROOT}/Molecule/src/rg_Molecule.cpp"
    "${V_Geo_ROOT}/Molecule/src/Rotamer.cpp"
    "${V_Geo_ROOT}/Molecule/src/RotamerSetOfResidue.cpp"
    "${V_Geo_ROOT}/Molecule/src/SecondaryStructure.cpp"
    "${V_Geo_ROOT}/Molecule/src/Sheet.cpp"
    "${V_Geo_ROOT}/Molecule/src/SidechainConformation.cpp"
    "${V_Geo_ROOT}/Molecule/src/SidechainDihedralAngleSet.cpp"
    "${V_Geo_ROOT}/Molecule/src/Strand.cpp"
    "${V_Geo_ROOT}/Molecule/src/TriangleStripForProteinRibbon.cpp"
    "${V_Geo_ROOT}/Molecule/src/Turn.cpp"
)
source_group("Sources" FILES ${Sources})

set(Headers
    "${V_Geo_ROOT}/Molecule/include/BackboneDihedralAnglePair.h"
    "${V_Geo_ROOT}/Molecule/include/Backbone.h"
    "${V_Geo_ROOT}/Molecule/include/BackboneConformation.h"
    "${V_Geo_ROOT}/Molecule/include/BackboneDependentRotamerLibrary_RotLibGenerator.h"
    "${V_Geo_ROOT}/Molecule/include/BackboneDependentRotamerLibrary.h"
    "${V_Geo_ROOT}/Molecule/include/BackboneIndependentRotamerLibrary.h"
    "${V_Geo_ROOT}/Molecule/include/Chain.h"
    "${V_Geo_ROOT}/Molecule/include/ChainIDSeqNumRotLibIDPair.h"
    "${V_Geo_ROOT}/Molecule/include/ChainIDSeqNumRotLibIDPairsForSidechainConformation.h"
    "${V_Geo_ROOT}/Molecule/include/ChainIDWithSequenceNumbersOfMissingResidues.h"
    "${V_Geo_ROOT}/Molecule/include/ChemicalBond.h"
    "${V_Geo_ROOT}/Molecule/include/ChemicalPropertiesOfAtom.h"
    "${V_Geo_ROOT}/Molecule/include/ConstForMolecule.h"
    "${V_Geo_ROOT}/Molecule/include/ConstForMoleculeIOFunctions.h"
    "${V_Geo_ROOT}/Molecule/include/ConstForPCAAnalyzer.h"
    "${V_Geo_ROOT}/Molecule/include/ConstForPharmacophore.h"
    "${V_Geo_ROOT}/Molecule/include/ConstForPotentialEnergy.h"
    "${V_Geo_ROOT}/Molecule/include/ConstForRotamerLibrary.h"
    "${V_Geo_ROOT}/Molecule/include/ConstForXVolLJPotEnergy.h"
    "${V_Geo_ROOT}/Molecule/include/EnclosingSphereOfSpheres.h"
    "${V_Geo_ROOT}/Molecule/include/ForceField.h"
    "${V_Geo_ROOT}/Molecule/include/FunctionsForMappingFromXVolToLJPotEnergy.h"
    "${V_Geo_ROOT}/Molecule/include/FunctionsForMolecule.h"
    "${V_Geo_ROOT}/Molecule/include/FunctionsForRotamerLibrary.h"
    "${V_Geo_ROOT}/Molecule/include/FunctionsForSplineFittingLJPotEnergy.h"
    "${V_Geo_ROOT}/Molecule/include/Helix.h"
    "${V_Geo_ROOT}/Molecule/include/HydrogenBond.h"
    "${V_Geo_ROOT}/Molecule/include/ManagerOfRotamers_Assigned_At_Residues.h"
    "${V_Geo_ROOT}/Molecule/include/ManagerOfRotamerSetsForSCP.h"
    "${V_Geo_ROOT}/Molecule/include/MoleculeIOFunctions.h"
    "${V_Geo_ROOT}/Molecule/include/ParamsForExperiments.h"
    "${V_Geo_ROOT}/Molecule/include/PCAAnalyzer.h"
    "${V_Geo_ROOT}/Molecule/include/PDBFileFormatVerifier.h"
    "${V_Geo_ROOT}/Molecule/include/PharmaFeature.h"
    "${V_Geo_ROOT}/Molecule/include/PotentialEnergy.h"
    "${V_Geo_ROOT}/Molecule/include/ProteinConformation.h"
    "${V_Geo_ROOT}/Molecule/include/Residue.h"
    "${V_Geo_ROOT}/Molecule/include/ResidueWithSSCode.h"
    "${V_Geo_ROOT}/Molecule/include/rg_Atom.h"
    "${V_Geo_ROOT}/Molecule/include/rg_Molecule.h"
    "${V_Geo_ROOT}/Molecule/include/Rotamer.h"
    "${V_Geo_ROOT}/Molecule/include/RotamerSetOfResidue.h"
    "${V_Geo_ROOT}/Molecule/include/SecondaryStructure.h"
    "${V_Geo_ROOT}/Molecule/include/Sheet.h"
    "${V_Geo_ROOT}/Molecule/include/SidechainConformation.h"
    "${V_Geo_ROOT}/Molecule/include/SidechainDihedralAngleSet.h"
    "${V_Geo_ROOT}/Molecule/include/SplineCoeffForFittingLJPotEnergy.h"
    "${V_Geo_ROOT}/Molecule/include/Strand.h"
    "${V_Geo_ROOT}/Molecule/include/TriangleStripForProteinRibbon.h"
    "${V_Geo_ROOT}/Molecule/include/Turn.h"
    "${V_Geo_ROOT}/Molecule/include/XVolNLJPotEnergyValuePairs.h"
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
    TARGET_NAME_DEBUG   "libV_Geo_Molecule_d"
    TARGET_NAME_RELEASE "libV_Geo_Molecule"
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
)
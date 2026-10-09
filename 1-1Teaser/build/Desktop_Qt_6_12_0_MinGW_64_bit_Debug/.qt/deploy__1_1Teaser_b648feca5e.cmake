include("D:/QTFramework/1-1Teaser/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/1-1Teaser-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "D:/QTFramework/1-1Teaser/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/1-1Teaser.exe"
    GENERATE_QT_CONF
)

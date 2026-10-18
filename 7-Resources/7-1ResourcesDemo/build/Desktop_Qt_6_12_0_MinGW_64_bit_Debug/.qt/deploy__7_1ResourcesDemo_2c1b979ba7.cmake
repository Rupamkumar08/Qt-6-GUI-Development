include("D:/QTFramework/7-Resources/7-1ResourcesDemo/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/7-1ResourcesDemo-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "D:/QTFramework/7-Resources/7-1ResourcesDemo/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/7-1ResourcesDemo.exe"
    GENERATE_QT_CONF
)

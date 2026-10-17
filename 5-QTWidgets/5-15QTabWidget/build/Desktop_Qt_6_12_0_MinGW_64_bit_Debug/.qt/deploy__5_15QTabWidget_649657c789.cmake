include("D:/QTFramework/5-QTWidgets/5-15QTabWidget/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/5-15QTabWidget-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "D:/QTFramework/5-QTWidgets/5-15QTabWidget/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/5-15QTabWidget.exe"
    GENERATE_QT_CONF
)

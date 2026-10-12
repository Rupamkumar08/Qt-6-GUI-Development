include("D:/QTFramework/2-GettingStartedC++CrashCourse/2-13GuiIntro/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/2-13GuiIntro-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "D:/QTFramework/2-GettingStartedC++CrashCourse/2-13GuiIntro/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/2-13GuiIntro.exe"
    GENERATE_QT_CONF
)

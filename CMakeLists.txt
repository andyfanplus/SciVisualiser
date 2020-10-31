CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

PROJECT(SciVisualiser)

#set the suffix of DLL in the debug  version
set(CMAKE_DEBUG_POSTFIX "d")    

#set the character set
add_definitions(-DUNICODE -D_UNICODE) 

#only debug and release version
set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "My multi config types" FORCE)

		



FIND_PACKAGE(Qt5 COMPONENTS Core Gui Widgets OpenGL REQUIRED)
FIND_PACKAGE(VTK REQUIRED)
INCLUDE(${VTK_USE_FILE})

#set(CMAKE_INCLUDE_CURRENT_DIR ON) 
INCLUDE_directories(
${CMAKE_CURRENT_BINARY_DIR}
${CMAKE_CURRENT_SOURCE_DIR}
MainWindow
)
 
add_subdirectory(MainWindow)
add_subdirectory(QtExtensions)


ADD_EXECUTABLE(${PROJECT_NAME} main.cpp)

TARGET_LINK_LIBRARIES (${PROJECT_NAME}
MainWindow 
${VTK_LIBRARIES}
Qt5::Core Qt5::Gui Qt5::Widgets Qt5::OpenGL
)

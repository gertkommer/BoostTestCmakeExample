cmake_minimum_required (VERSION 3.16)

find_package( Boost 1.70.0 REQUIRED COMPONENTS system filesystem unit_test_framework)
project(MyProject_test)

add_executable (${PROJECT_NAME} 
	"BoostTest_test.cpp" 
)
add_definitions(-DBOOST_TEST_DYN_LINK)

#set(BOOST_LIBRARIES Boost::unit_test_framework Boost::system Boost::filesystem)
if (WIN32)
	if (CMAKE_BUILD_TYPE MATCHES "Debug")
		set(BOOST_LIBRARIES ${Boost_LIBRARY_DIR_DEBUG}/boost_unit_test_framework-vc140-mt-gd.lib
		${Boost_LIBRARY_DIR_DEBUG}/boost_system-vc140-mt-gd.lib
		${Boost_LIBRARY_DIR_DEBUG}/boost_filesystem-vc140-mt-gd.lib
			)
	endif()
endif()
if(UNIX)
	set(BOOST_LIB_DIR ${Boost_LIBRARY_DIRS}/libboost_unit_test_framework.so)
	if (CMAKE_BUILD_TYPE MATCHES "Debug")
		set(BOOST_LIBRARIES ${Boost_LIBRARY_DIR_DEBUG}/libboost_unit_test_framework.so
		${Boost_LIBRARY_DIR_DEBUG}/libboost_system.so
		${Boost_LIBRARY_DIR_DEBUG}/libboost_filesystem.so
			)
	endif()
endif()

target_include_directories(${PROJECT_NAME}
	PUBLIC ${Boost_INCLUDE_DIR}
)

target_link_libraries(${PROJECT_NAME}
	${BOOST_LIBRARIES}
	MyProject
)

add_test(MyBoostModule ${PROJECT_NAME})


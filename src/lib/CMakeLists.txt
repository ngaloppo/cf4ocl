# Sources required for building library
set(SRC clerrors.c clprofiler.c clutils.c)

# Add library
add_library(${PROJECT_NAME} SHARED ${SRC})

# This is required for Windows compilation
target_link_libraries(${PROJECT_NAME} ${GLIB_LIBRARIES} ${GLIB_LDFLAGS} ${OPENCL_LIBRARIES})

# This target is just an alias for cf4ocl
add_custom_target(lib DEPENDS ${PROJECT_NAME})

# Set library version
set_target_properties(${PROJECT_NAME} PROPERTIES 
	VERSION ${${PROJECT_NAME}_VERSION}
	SOVERSION ${${PROJECT_NAME}_VERSION_MAJOR})

# Where to install lib
install(TARGETS ${PROJECT_NAME} 
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
	RUNTIME DESTINATION bin)

# Where to install headers
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/
	DESTINATION include/${PROJECT_NAME}
	FILES_MATCHING PATTERN "*.h")

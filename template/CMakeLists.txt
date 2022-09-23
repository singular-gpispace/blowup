list (APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules")

extended_add_library (NAME template_implementation
  TYPE MODULE
  SOURCES "implementation.cpp" "singular_functions.cpp"
  INCLUDE_DIRECTORIES PRIVATE "${CMAKE_BINARY_DIR}" "${CMAKE_BINARY_DIR}/gen"
  COMPILE_DEFINITIONS SING_NDEBUG OM_NDEBUG
  LIBRARIES GPISpace::workflow_development Singular
  DEPENDS template.pnet_and_wrapper-library
  INSTALL INSTALL_DESTINATION "libexec/workflow"
)
set_target_properties (template_implementation
  PROPERTIES
  INSTALL_RPATH_USE_LINK_PATH TRUE
)

install (FILES LIB/templategspc.lib
  DESTINATION "${CMAKE_INSTALL_PREFIX}"
)

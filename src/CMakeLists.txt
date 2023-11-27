###############################################################################
###                             INTEGRATE GTEST                             ###
###############################################################################
## Integrate Google Test framework for unit testing.
###############################################################################

find_package(GTest REQUIRED)

include(GoogleTest)


###############################################################################
###                               COMPONENTS                                ###
###############################################################################
## Include project components and subdirectories.
###############################################################################

# Get a list of subdirectories in the current directory
set (
  COMPONENTS
    Window          # Window
)

add_executable (
  ${PROJECT_NAME}
)

# Iterate over each subdirectory
foreach(COMPONENT ${COMPONENTS})
  # Enter into the component
  add_subdirectory(${COMPONENT})
  # Link the new lib to the executable
  target_link_libraries (
    ${PROJECT_NAME}
      ${COMPONENT}_lib
  )
endforeach()
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

# Iterate over each subdirectory
foreach(COMPONENT ${COMPONENTS})
  add_subdirectory(${COMPONENT})
endforeach()
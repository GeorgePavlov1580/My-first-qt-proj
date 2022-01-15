# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\FirstProject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\FirstProject_autogen.dir\\ParseCache.txt"
  "FirstProject_autogen"
  )
endif()

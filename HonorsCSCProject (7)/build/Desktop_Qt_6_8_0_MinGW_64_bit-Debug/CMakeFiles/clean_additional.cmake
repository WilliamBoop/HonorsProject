# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\HonorsCSCProject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\HonorsCSCProject_autogen.dir\\ParseCache.txt"
  "HonorsCSCProject_autogen"
  )
endif()

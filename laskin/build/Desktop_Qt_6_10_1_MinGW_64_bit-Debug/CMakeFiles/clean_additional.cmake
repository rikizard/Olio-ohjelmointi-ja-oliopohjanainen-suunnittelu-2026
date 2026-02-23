# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\laskin_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\laskin_autogen.dir\\ParseCache.txt"
  "laskin_autogen"
  )
endif()

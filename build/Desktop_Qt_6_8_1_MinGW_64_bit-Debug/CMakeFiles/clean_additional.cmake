# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\patientsQueue_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\patientsQueue_autogen.dir\\ParseCache.txt"
  "patientsQueue_autogen"
  )
endif()

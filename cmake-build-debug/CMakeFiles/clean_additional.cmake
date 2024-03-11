# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\a89_912_Dreghici_Bogdan_1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\a89_912_Dreghici_Bogdan_1_autogen.dir\\ParseCache.txt"
  "a89_912_Dreghici_Bogdan_1_autogen"
  )
endif()

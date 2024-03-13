# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/TrinhLeHuy/esp/v5.1.3/esp-idf/components/bootloader/subproject"
  "E:/ThayLoc/sample_project/build/bootloader"
  "E:/ThayLoc/sample_project/build/bootloader-prefix"
  "E:/ThayLoc/sample_project/build/bootloader-prefix/tmp"
  "E:/ThayLoc/sample_project/build/bootloader-prefix/src/bootloader-stamp"
  "E:/ThayLoc/sample_project/build/bootloader-prefix/src"
  "E:/ThayLoc/sample_project/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "E:/ThayLoc/sample_project/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "E:/ThayLoc/sample_project/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()

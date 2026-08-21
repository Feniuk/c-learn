# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "C:/learning/c-learn/l3Ex2my")
  file(MAKE_DIRECTORY "C:/learning/c-learn/l3Ex2my")
endif()
file(MAKE_DIRECTORY
  "C:/learning/c-learn/l3Ex2my/build/l3Ex2my"
  "C:/learning/c-learn/l3Ex2my/build/_sysbuild/sysbuild/images/l3Ex2my-prefix"
  "C:/learning/c-learn/l3Ex2my/build/_sysbuild/sysbuild/images/l3Ex2my-prefix/tmp"
  "C:/learning/c-learn/l3Ex2my/build/_sysbuild/sysbuild/images/l3Ex2my-prefix/src/l3Ex2my-stamp"
  "C:/learning/c-learn/l3Ex2my/build/_sysbuild/sysbuild/images/l3Ex2my-prefix/src"
  "C:/learning/c-learn/l3Ex2my/build/_sysbuild/sysbuild/images/l3Ex2my-prefix/src/l3Ex2my-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/learning/c-learn/l3Ex2my/build/_sysbuild/sysbuild/images/l3Ex2my-prefix/src/l3Ex2my-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/learning/c-learn/l3Ex2my/build/_sysbuild/sysbuild/images/l3Ex2my-prefix/src/l3Ex2my-stamp${cfgdir}") # cfgdir has leading slash
endif()

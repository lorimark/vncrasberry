cmake_minimum_required (VERSION 2.6)

set ( CMAKE_CXX_FLAGS "-std=c++17 -Wfatal-errors -Wbuiltin-macro-redefined -g" )
# set ( CMAKE_CXX_FLAGS "-std=c++20 -Wfatal-errors -Wbuiltin-macro-redefined -g" )

include_directories(
  /opt/Wt4/include
  /opt
)

link_directories(/opt/Wt4/lib)

add_subdirectory( src )

project (vncrasberry.bin)

add_executable(
  vncrasberry.bin
  ${SOURCEFILES}
  )

target_link_libraries(
  vncrasberry.bin
  wt
  wthttp
  wtdbo
  wtdbosqlite3
  wtdbopostgres
  boost_system
  hpdf
  pthread
  xml2
)


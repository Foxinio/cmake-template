project( MyExec )
cmake_minimum_required( VERSION 3.20 )

add_subdirectory( MyLib )

set( EXTRA_LIBS ${EXTRA_LIBS} MyLib )

add_executable( MyExec main.cpp )
target_link_libraries( MyExec ${EXTRA_LIBS} )

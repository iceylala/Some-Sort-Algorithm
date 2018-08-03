cmake_minimum_required(VERSION 2.8)



include_directories("./h")
add_subdirectory( lib )

add_executable(buddle buddle.cpp )
target_link_libraries(buddle common)

add_executable(kuaipai kuaipai.cpp )
target_link_libraries(kuaipai common)

add_executable(charu charu.cpp )
target_link_libraries(charu common)


add_executable(shell shell.cpp )
target_link_libraries(shell common)


add_executable(xuanze xuanze.cpp )
target_link_libraries(xuanze common)


add_executable(guibing guibing.cpp )
target_link_libraries(guibing common)

add_executable(dui dui.cpp )
target_link_libraries(dui common)


add_executable(jishu jishu.cpp )
target_link_libraries(jishu common)
















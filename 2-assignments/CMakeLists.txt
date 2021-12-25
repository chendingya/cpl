add_executable(cube cube.c)
add_executable(money money.c)
add_executable(once once.c)

add_executable(calculator calculator.c)
target_link_libraries(calculator m)

add_executable(flip flip.c)
target_link_libraries(flip m)

add_executable(statistics statistics.c)
add_executable(factorial factorial.c)
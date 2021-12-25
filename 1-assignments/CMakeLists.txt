add_executable(ascii ascii.c)
add_executable(change change.c)
add_executable(gray gray.c)
add_executable(inverse inverse.c)

add_executable(PI PI.c)
target_link_libraries(PI m)

add_executable(planck planck.c)
target_link_libraries(planck m)

add_executable(equation equation.c)
target_link_libraries(equation m)

add_executable(time time.c)
target_link_libraries(time m)

add_executable(weekday weekday.c)
target_link_libraries(weekday m)
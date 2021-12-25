add_executable(circle circle.c)

add_executable(sphere sphere.c)
target_link_libraries(sphere m)

add_executable(mol mol.c)
add_executable(int int.c)
add_executable(admin admin.c)
target_link_libraries(admin m)
add_executable(admin_teacher admin_teacher.c)
target_link_libraries(admin_teacher m)
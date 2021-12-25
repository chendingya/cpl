add_executable(sum-A sum-A.c)
target_link_libraries(sum-A m)

add_executable(absolute-prime absolute-prime.c)
target_link_libraries(absolute-prime m)

add_executable(magic_square magic_square.c)
add_executable(lcp lcp.c)

add_executable(ternary-search ternary-search.c)
target_link_libraries(ternary-search m)

add_executable(next-permutation next-permutation.c)

add_executable(radix radix.c)
target_link_libraries(radix m)
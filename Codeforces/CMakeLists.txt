cmake_minimum_required(VERSION 3.27)
project(Codeforces)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories("Round 935 (Div3) - Virtual")
include_directories("Round 937 (Div4)")

add_executable(Codeforces
        "Round 935 (Div3) - Virtual/probA- 1935A.c"
        "Round 935 (Div3) - Virtual/probC- 1935C.c"
        "Round 937 (Div4)/probA-1950A.cpp"
        "Round 937 (Div4)/PDSlabQ3.c")

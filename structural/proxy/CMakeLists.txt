cmake_minimum_required(VERSION 3.14)
project(directory_app LANGUAGES CXX)

# ─────────────────────────────────────────────────────────────
# 1. Collect all source files under src/  (add yours freely)
# ─────────────────────────────────────────────────────────────
file(GLOB SRC_FILES CONFIGURE_DEPENDS
     "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

# ─────────────────────────────────────────────────────────────
# 2. Create the executable and link libraries (just std right now)
# ─────────────────────────────────────────────────────────────
add_executable(directory_app
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${SRC_FILES}
)

# ─────────────────────────────────────────────────────────────
# 3. Tell the compiler where to find headers in include/
# ─────────────────────────────────────────────────────────────
target_include_directories(directory_app
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# ─────────────────────────────────────────────────────────────
# 4. Use at least C++17
# ─────────────────────────────────────────────────────────────
target_compile_features(directory_app PRIVATE cxx_std_17)

# ─────────────────────────────────────────────────────────────
# 5. (Optional) extra warnings for GCC/Clang/MSVC
# ─────────────────────────────────────────────────────────────
if (MSVC)
    target_compile_options(directory_app PRIVATE /W4 /permissive-)
else()
    target_compile_options(directory_app PRIVATE -Wall -Wextra -pedantic -Werror)
endif()

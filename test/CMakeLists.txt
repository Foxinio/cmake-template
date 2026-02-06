include(FetchContent)

# Pin to a known tag you trust (example tag shown; pick one you want)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.17.0
)

# Optional MSVC nicety: match your CRT choice
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Download & add GTest targets: GTest::gtest, GTest::gtest_main, GTest::gmock, GTest::gmock_main
FetchContent_MakeAvailable(googletest)

# ---- Your test target(s)
add_executable(test_MyLib_gtest test_MyLib.cpp)
target_link_libraries(test_MyLib_gtest PRIVATE MyLib GTest::gtest_main)

# CTest discovery of individual TEST() cases
include(GoogleTest)
gtest_discover_tests(test_MyLib_gtest)

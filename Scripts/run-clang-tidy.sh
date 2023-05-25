# Runs clang tidy on a cmake build directory. This directory mush be prepared with the
# -DMYGUI_CLANG_TIDY_BUILD=True option to prevent issues with clang-tidy not handling PCH.
run-clang-tidy -p ../cmake-build-debug -fix -config-file ../.clang-tidy 2> /tmp/run-clang-tidy-output.txt
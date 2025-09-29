add_library(gviewer-core STATIC gviewer.cpp gviewer.hpp)

target_include_directories(gviewer-core PUBLIC "${PROJECT_SOURCE_DIR}/gviewer-core")
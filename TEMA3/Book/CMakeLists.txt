add_library(Book STATIC lib/Book.cpp lib/Library.cpp)
target_include_directories(Book PUBLIC "header/")

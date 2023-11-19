add_library(Book STATIC lib/Book.cpp lib/HorrorBook.cpp lib/Manga.cpp)
target_include_directories(Book PUBLIC "header/")
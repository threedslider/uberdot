set(HEADERS
Vector.hpp
Vector2.hpp
)

set(SRCS
Vector.cc
Vector2.cc
)

add_library(math ${SRCS} ${HEADERS})

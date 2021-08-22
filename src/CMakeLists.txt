file(GLOB_RECURSE PUBLIC_HEADERS "../include/*.h")
file(GLOB_RECURSE PRIVATE_HEADERS "*.h")
file(GLOB_RECURSE SOURCES "*.cpp")

message("PUBLIC_HEADERS: ${PUBLIC_HEADERS}")
message("PRIVATE_HEADERS: ${PRIVATE_HEADERS}")
message("SOURCES: ${SOURCES}")

add_library(DesignPattern SHARED
${SOURCES}
${PUBLIC_HEADERS}
${PRIVATE_HEADERS}
)
target_include_directories(DesignPattern PUBLIC "../include" PRIVATE ".")
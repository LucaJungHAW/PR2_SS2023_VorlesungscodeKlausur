project(src)

set(SOURCE_FILES
        Dummy.cpp Dummy.h Baby.h Baby.cpp CandyJar.cpp CandyJar.h FSM_Baby.cpp FSM_Baby.h ATM.cpp ATM.h ATM.h)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})
add_library(v_person
	src/VectorPerson.cpp)

target_include_directories(v_person PUBLIC inc)

add_subdirectory(Person)

target_link_libraries(v_person PUBLIC person)
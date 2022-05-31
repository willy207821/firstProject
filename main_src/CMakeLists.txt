add_subdirectory(VectorPerson)
add_subdirectory(Person)


add_executable(v_test main.cpp)

target_link_libraries(v_test PRIVATE v_person person)

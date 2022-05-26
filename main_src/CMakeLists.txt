add_subdirectory(D_VectorPerson)
add_subdirectory(B_Person)


add_executable(v_test main.cpp)

target_link_libraries(v_test PRIVATE v_person person)

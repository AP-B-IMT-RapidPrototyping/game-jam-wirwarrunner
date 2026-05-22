
# Catch2 binnenhalen via FetchContent (als het niet via vcpkg is geïnstalleerd)
include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG        v3.4.0 # Of een nieuwere versie
)
FetchContent_MakeAvailable(Catch2)

# Zoek het Catch2 pakket
find_package(Catch2 3 REQUIRED)

add_executable(unit_test test_calculator.cpp)

# Link de test aan Catch2 en onze eigen logica library
target_link_libraries(unit_test PRIVATE Catch2::Catch2WithMain srclib)

# Registreer de executable bij CTest
include(Catch)
catch_discover_tests(unit_test)
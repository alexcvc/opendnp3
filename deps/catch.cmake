include(FetchContent)

FetchContent_Declare(
    catch
    URL                 https://github.com/catchorg/Catch2/releases/download/v2.13.2/catch.hpp
    URL_HASH            SHA1=3506A6C0B04F0792C4E2286A1F8028A90D2E7593
    DOWNLOAD_NO_EXTRACT TRUE
    DOWNLOAD_DIR        ${CMAKE_CURRENT_BINARY_DIR}/catch-src
)

FetchContent_GetProperties(catch)
if(NOT catch_POPULATED)
    FetchContent_Populate(catch)

    find_package(Threads)

    add_library(catch INTERFACE)
    target_include_directories(catch INTERFACE ${CMAKE_CURRENT_BINARY_DIR}/catch-src)
    target_compile_features(catch INTERFACE cxx_std_11)
    target_compile_definitions(catch INTERFACE CATCH_CONFIG_NO_POSIX_SIGNALS)  # FIXME: Remove when upgrading beyond v2.13.5
endif()

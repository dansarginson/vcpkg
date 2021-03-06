#pragma once

#include "expected.h"
#include <filesystem>

namespace vcpkg {namespace Files
{
    void check_is_directory(const std::tr2::sys::path& dirpath);

    expected<std::string> get_contents(const std::tr2::sys::path& file_path) noexcept;
}}

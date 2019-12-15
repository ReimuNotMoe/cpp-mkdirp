#ifndef CPP_MKDIRP_HPP
#define CPP_MKDIRP_HPP

#include <string>
#include <filesystem>
#include <functional>

inline bool mkdirp(const std::string& __path) {
	return std::filesystem::create_directories(__path);
}

inline bool mkdirp(const std::string& __path, std::error_code& __ec) noexcept {
	return std::filesystem::create_directories(__path, __ec);
}

inline void mkdirp(const std::string& __path, const std::function<void(std::error_code&)>& __f) {
	std::error_code ec;
	std::filesystem::create_directories(__path, ec);

	__f(ec);
}

#endif
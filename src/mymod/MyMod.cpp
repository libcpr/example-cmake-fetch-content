module;

#include <iostream>
#include <string>
#include <cpr/cpr.h>

export module mymod;

namespace mymod {
export void GetFromGitHub() {
    const cpr::Response response = cpr::Get(cpr::Url{"https://api.github.com/repos/whoshuu/cpr/contributors"},
                                            cpr::Authentication{"user", "pass", cpr::AuthMode::BASIC},
                                            cpr::Parameters{{"anon", "true"}, {"key", "value"}});
    std::cout << "Status code: " << response.status_code << '\n';
    std::cout << "Header:\n";
    std::cout << "Text: " << response.text << '\n';
}
}  // namespace mymod
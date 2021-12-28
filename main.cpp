#include <iostream>
#include <string>
#include <cpr/cpr.h>

int main(int argc, char** argv) {
    cpr::Response r = cpr::Get(cpr::Url{"https://api.github.com/repos/whoshuu/cpr/contributors"},
                               cpr::Authentication{"user", "pass"},
                               cpr::Parameters{{"anon", "true"}, {"key", "value"}});
    std::cout << "Status code: " << r.status_code << '\n';
    std::cout << "Header:\n";
    for (const std::pair<std::string, std::string>& kv : r.header) {
        std::cout << '\t' << kv.first << ':' << kv.second << '\n';
    }
    std::cout << "Text: " << r.text << '\n';
    return 0;
}
#include <iostream>
#include <string>
#include <cstdlib>

std::string transformGitURL(const std::string& httpURL) {
    std::string sshURL = httpURL;
    if (httpURL.find("https://github.com/") == 0) {
        sshURL.replace(0, 19, "git@github.com:");
        size_t pos = sshURL.find(".git");
        if (pos != std::string::npos) {
            sshURL.insert(pos, ".git");
        }
    }
    return sshURL;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <HTTP Git URL> [additional git clone arguments]\n";
        return 1;
    }
    std::string httpURL = argv[1];
    std::string sshURL = transformGitURL(httpURL);
    std::string command = "git clone " + sshURL;
    for (int i = 2; i < argc; ++i) {
        command += " ";
        command += argv[i];
    }
    std::system(command.c_str());
    return 0;
}


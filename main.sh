clang-format -i ./*.cpp ./*.h && clang++ ./bookbot.cpp ./bookbot-stats.cpp ./bookbot-fs.cpp ./bookbot-report.cpp --output bookbot && ./bookbot "$1"

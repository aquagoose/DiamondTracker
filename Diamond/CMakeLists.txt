cmake_minimum_required(VERSION 3.27)
project(Diamond)

add_library(Diamond
        src/Audio/Mixer.cpp
        include/Diamond/Audio/Mixer.h)
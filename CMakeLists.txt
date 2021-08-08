cmake_minimum_required(VERSION 3.16)
project(Blackjack)

set(CMAKE_CXX_STANDARD 17)

add_executable(Blackjack main.cpp src/Card.cpp src/Card.h src/Hand.cpp src/Hand.h src/GenericPlayer.cpp src/GenericPlayer.h src/Player.cpp src/Player.h src/House.cpp src/House.h src/Desk.cpp src/Desk.h src/Game.cpp src/Game.h)
/* Copyright 2015-2021 Jack Humbert
   Copyright 2023 CRMSN_

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

 ██▓███  ▓█████  ███▄    █ ▄▄▄█████▓ ▄▄▄        ▄████  ██▀███   ▄▄▄       ███▄ ▄███▓
▓██░  ██▒▓█   ▀  ██ ▀█   █ ▓  ██▒ ▓▒▒████▄     ██▒ ▀█▒▓██ ▒ ██▒▒████▄    ▓██▒▀█▀ ██▒
▓██░ ██▓▒▒███   ▓██  ▀█ ██▒▒ ▓██░ ▒░▒██  ▀█▄  ▒██░▄▄▄░▓██ ░▄█ ▒▒██  ▀█▄  ▓██    ▓██░
▒██▄█▓▒ ▒▒▓█  ▄ ▓██▒  ▐▌██▒░ ▓██▓ ░ ░██▄▄▄▄██ ░▓█  ██▓▒██▀▀█▄  ░██▄▄▄▄██ ▒██    ▒██
▒██▒ ░  ░░▒████▒▒██░   ▓██░  ▒██▒ ░  ▓█   ▓██▒░▒▓███▀▒░██▓ ▒██▒ ▓█   ▓██▒▒██▒   ░██▒
▒▓▒░ ░  ░░░ ▒░ ░░ ▒░   ▒ ▒   ▒ ░░    ▒▒   ▓▒█░ ░▒   ▒ ░ ▒▓ ░▒▓░ ▒▒   ▓▒█░░ ▒░   ░  ░
░▒ ░      ░ ░  ░░ ░░   ░ ▒░    ░      ▒   ▒▒ ░  ░   ░   ░▒ ░ ▒░  ▒   ▒▒ ░░  ░      ░
░░          ░      ░   ░ ░   ░        ░   ▒   ░ ░   ░   ░░   ░   ░   ▒   ░      ░
            ░  ░         ░                ░  ░      ░    ░           ░  ░       ░
                        ⠴⣷⣶⣤⣀     ⢀⣠⣤⣴⣶⣶⣾⣶⣶⣶⣶⣶⣦⣤⣤⣀⡀
                        ⠹⣿⣿⣿⣿⣷⣄⣴⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣴⣾⣿⣶⣀
                         ⠙⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠛⠛⠛⠋⠉⠉⠉⠙⠛⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠁
                         ⣠⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄           ⣿⣠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡀
                       ⣠⣿⣿⣿⣿⣿⣿⣿⡟⠻⣿⣿⣿⣷⣦⣀     ⢀⣠⣶⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡀
                     ⢀⣴⣿⣿⣿⣿⠟⣿⣿⣿⣿⡀ ⠙⠿⣿⣿⣿⣷⣦⣄⣠⣶⣿⣿⣿⡿⠟⠋⠁⣸⣿⣿⣿⡟⢿⣿⣿⣿⣿⣷⣆
                    ⢀⣿⣿⣿⣿⡿⠋ ⠸⣿⣿⣿⣷   ⠈⠛⢿⣿⣿⣿⣿⣿⣿⠟⠉   ⢀⣿⣿⣿⣿⠃ ⠙⣿⣿⣿⣿⣿⡆
                    ⣼⣿⣿⣿⡟⠁   ⣿⣿⣿⣿⡁  ⣠⣴⣾⣿⣿⣿⣿⣿⣿⣿⣦⣀ ⢀⣾⣿⣿⣿⡏   ⠈⢿⣿⣿⣿⣿⡀
                   ⢰⣿⣿⣿⡿⠁    ⢹⣿⣿⣿⣧⣤⣾⣿⣿⣿⡿⠛⠉⠉⠻⣿⣿⣿⣿⣷⣾⣿⣿⣿⠏      ⠻⣿⣿⣿⡇
                   ⣾⣿⣿⣿⠇     ⠈⢿⣿⣿⣿⣿⣿⣿⠿⠋      ⠉⠻⢿⣿⣿⣿⣿⣿⣄⡀      ⢹⣿⣿⣧
                   ⣿⣿⣿⣿     ⣠⣴⣿⣿⣿⣿⣿⡋⣿⠄          ⣿⣿⣿⣿⣿⣿⣿⣶⣤⡀   ⠈⣿⣿⣿⡆
                  ⠠⣿⣿⣿⡇  ⣠⣶⣿⣿⣿⣿⣿⣿⣿⣿⣧⡀          ⣸⣿⣿⣿⡟⠻⣿⣿⣿⣿⣿⣶⣄⡀ ⣿⣿⣿⡇
                   ⣿⣿⣿⣧⣴⣿⣿⣿⣿⣿⠿⠋⠘⣿⣿⣿⣿⡥         ⢠⣿⣿⣿⣿⡇  ⠙⠿⣿⣿⣿⣿⣿⣶⣿⣿⣿⡁
                  ⣠⣿⣿⣿⣿⣿⣿⣿⡿⠋⠁   ⢻⣿⣿⣿⣿⠂       ⢀⣾⣿⣿⣿⡗     ⠈⠛⢿⣿⣿⣿⣿⣿⣿⡀
                ⣠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣿⣷⣶⣶⣿⣿⣿⣿⣷⣶⣶⣶⣶⣶⣶⣶⣾⣿⣿⣿⣿⣿⣶⣶⣶⣶⣶⣤⣤⣤⣽⣿⣿⣿⣿⣿⣿⣦
                ⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⢿⣿⣿⣿⣿⣿⠿⠿⠿⠿⠿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃
                 ⠈⢹⠏⣿⣿⣿⣿⣧⡀        ⢿⣿⣿⣿⣧     ⣿⣿⣿⣿⡟⠁      ⠉⠉⠉⣩⣿⣿⣿⠋⡏⢹
                  ⠈ ⠸⣿⣿⣿⣿⣷⡀       ⠸⣿⣿⣿⣿⡆   ⣼⣿⣿⣿⣿⠁        ⢠⣴⣿⣿⣿⡏ ⣿
                     ⠹⣿⣿⣿⣿⣷⣄       ⢿⣿⣿⣿⣟  ⣸⣿⣿⣿⣿⠃        ⣠⣾⣿⣿⣿⡟  ⠋
                      ⠈⢿⣿⣿⣿⣿⣷⣄     ⠘⣿⣿⣿⣿⡄⢠⣿⣿⣿⣿⡏       ⣠⣾⣿⣿⣿⣿⠟
                       ⠈⠙⢿⣿⣿⣿⣿⣿⣦⣄⣀  ⢻⣿⣿⣿⣧⣿⣿⣿⣿⡟    ⢀⣤⣶⣿⣿⣿⣿⣿⡿⠉
                          ⠉⠻⢿⣿⣿⣿⣿⣿⣷⣶⣼⣿⣿⣿⣿⣿⣿⣿⣿⣁⣤⣤⣶⣾⣿⣿⣿⣿⣿⡿⠿⠉⠁
                             ⠉⠛⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠛⠁
                                  ⠉⠙⠻⣿⣿⣿⣿⣿⣿⣿⡿⠿⠿⠟⠻⠛⠛⠉
                                     ⠁⣿⢹⣿⣿⣿⡟
                                        ⠙⣿⠋
                                         ⣿
                                         ⣿⡀
                                         ⠉⠁               50 45 4E 54 41 47 52 41 4D
 */

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define VIAL_KEYBOARD_UID {0xED, 0x3D, 0xD1, 0xBF, 0x28, 0x9A, 0xA9, 0x3E}

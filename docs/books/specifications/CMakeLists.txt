#
# CMakeLists.txt -- CMake build system for malikania
#
# Copyright (c) 2013, 2014, 2015 Malikania Authors
#
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted, provided that the above
# copyright notice and this permission notice appear in all copies.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
# OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
#

#
# This order makes the book order, don't change it
#
set(
	FILES
	"${CMAKE_CURRENT_SOURCE_DIR}/Intro.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Overview/Intro.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Architecture/Intro.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Architecture/Technologies.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Gameplay/Intro.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Gameplay/Stats.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Bundle/Intro.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Bundle/Usage.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Bundle/Format.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/GameData/Intro.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/GameData/Game.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/GameData/Manifest.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/GameData/Sprites.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/GameData/Animations.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Tools/Intro.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Tools/Malikania-vm.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Tools/Malikania-bundle.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Network/Intro.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Network/Messages.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Network/Messages/server-info.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Network/Messages/server-message.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Network/Commands.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Network/Commands/account-create.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Network/Commands/account-identify.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Network/Commands/character-create.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Network/Commands/character-delete.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Network/Commands/character-list.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Network/Commands/character-select.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Network/Commands/exchange-start.txt"
	"${CMAKE_CURRENT_SOURCE_DIR}/Network/Commands/exchange-add.txt"
)

malikania_generate_book(
	specifications
	Specifications.pdf
	"${FILES}"
)

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

project(doxygen)

set(DOXYGEN_SOURCE ${CMAKE_SOURCE_DIR})
set(DOXYGEN_OUTPUT ${docs_BINARY_DIR}/doxygen)

if (DOXYGEN_DOT_FOUND)
	set(DOXYGEN_HAVE_DOT YES)
	set(DOXYGEN_DOT_PATH \"${DOXYGEN_DOT_EXECUTABLE}\")
else ()
	set(DOXYGEN_HAVE_DOT NOsc)
	set(DOXYGEN_DOT_PATH)
endif ()

configure_file(
	${doxygen_SOURCE_DIR}/Doxyfile.in
	${docs_BINARY_DIR}/doxygen/Doxyfile
)

add_custom_target(
	docs-doxygen
	COMMAND ${DOXYGEN_EXECUTABLE} ${docs_BINARY_DIR}/doxygen/Doxyfile
	WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)

add_dependencies(docs docs-doxygen)

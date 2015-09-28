/*
 * Color.h -- color description in RGB format
 *
 * Copyright (c) 2013, 2014, 2015 Malikania Authors
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _MALIKANIA_COLOR_H_
#define _MALIKANIA_COLOR_H_

#include <cstdint>

#include <malikania/Js.h>

namespace malikania {

/**
 * @class Color
 * @brief Color description in RGB format
 */
class Color {
public:
	uint8_t red{0};
	uint8_t green{0};
	uint8_t blue{0};
	uint8_t alpha{255};
};

namespace js {

template <>
class TypeInfo<Color> {
public:
	/**
	 * Push the color as an object.
	 *
	 * @param ctx the context
	 * @param color the color
	 */
	static void push(Context &ctx, const Color &color);

	/**
	 * Get the color, all fields are set to 0 if not specified.
	 *
	 * @param ctx the context
	 * @param index the value index
	 * @return the color
	 */
	static Color get(Context &ctx, duk_idx_t index);
};

} // !js

} // !malikania

#endif // !_MALIKANIA_COLOR_H_

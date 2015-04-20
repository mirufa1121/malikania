/*
 * ServerLoaderDirectory.h -- load a server from a directory
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

#ifndef _SERVER_LOADER_DIRECTORY_H_
#define _SERVER_LOADER_DIRECTORY_H_

/**
 * @file ServerLoaderDirectory.h
 * @brief Load a server game from a directory
 */

#include <malikania/LoaderDirectory.h>

#include "ServerSettings.h"

namespace malikania {

/**
 * @class ServerDirectoryLoader
 * @brief Load a server game from a directory
 */
class ServerLoaderDirectory : public LoaderDirectory {
public:
	using LoaderDirectory::LoaderDirectory;

	/**
	 * @copydoc ServerLoader::serverSettings
	 */
	ServerSettings serverSettings();
};

} // !malikania

#endif // !_SERVER_LOADER_DIRECTORY_H_

/*
 * audtag.h
 * Copyright 2009-2011 Paula Stanciu and John Lindgren
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions, and the following disclaimer in the documentation
 *    provided with the distribution.
 *
 * This software is provided "as is" and without any warranty, express or
 * implied. In no event shall the authors be liable for any damages arising from
 * the use of this software.
 */

#ifndef AUDTAG_H
#define AUDTAG_H

#include <libaudcore/tuple.h>
#include <libaudcore/vfs.h>

enum
{
    TAG_TYPE_NONE = 0,
    TAG_TYPE_APE,
};

void tag_set_verbose (bool_t verbose);

bool_t tag_tuple_read (Tuple * tuple, VFSFile *fd);
bool_t tag_image_read (VFSFile * handle, void * * data, int64_t * size);

/* new_type specifies the type of tag (see the TAG_TYPE_* enum) that should be
 * written if the file does not have any existing tag. */
bool_t tag_tuple_write (const Tuple * tuple, VFSFile * handle, int new_type);

/* deprecated, use tag_tuple_write */
bool_t tag_tuple_write_to_file (Tuple * tuple, VFSFile * handle);

#endif /* AUDTAG_H */

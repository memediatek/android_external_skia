
/*
 * Copyright 2006 The Android Open Source Project
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "SkImageDecoder.h"
#include "SkStream.h"

extern SkImageDecoder* image_decoder_from_stream(SkStreamRewindable*);

SkImageDecoder* SkImageDecoder::Factory(SkStreamRewindable* stream) {
    return image_decoder_from_stream(stream);
}


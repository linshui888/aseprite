// Aseprite Base Library
// Copyright (c) 2001-2013 David Capello
//
// This source file is distributed under MIT license,
// please read LICENSE.txt for more information.

#ifndef BASE_DISABLE_COPYING_H_INCLUDED
#define BASE_DISABLE_COPYING_H_INCLUDED
#pragma once

#define DISABLE_COPYING(ClassName)              \
  private:                                      \
    ClassName(const ClassName&);                \
    ClassName& operator=(const ClassName&);

#endif

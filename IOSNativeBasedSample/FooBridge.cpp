//
//  FooBridge.cpp
//  IOSNativeBasedSample
//
//  Created by Giorgio Antonioli on 10/07/2019.
//  Copyright © 2019 Fondesa. All rights reserved.
//

#include "FooBridge.h"
#include <nativemobile/foo.hpp>
#include <string>
#include <iostream>
#include <vector>

char* foo(const char* input) {
    std::string stdInput = std::string(input);
    std::unique_ptr<Foo> foo = std::make_unique<Foo>(stdInput);
    const std::string &output = foo->getValue();
    char *cstr = new char[output.length() + 1];
    strcpy(cstr, output.c_str());
    return cstr;
}

// Copyright (c) 2009-2019 The BitRub Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITRUB_TEST_FUZZ_FUZZ_H
#define BITRUB_TEST_FUZZ_FUZZ_H

#include <stdint.h>
#include <vector>

void initialize();
void test_one_input(const std::vector<uint8_t>& buffer);

#endif // BITRUB_TEST_FUZZ_FUZZ_H

// Copyright (c) 2019 The BitRub Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITRUB_TEST_UTIL_TRANSACTION_UTILS_H
#define BITRUB_TEST_UTIL_TRANSACTION_UTILS_H

#include <primitives/transaction.h>

// create crediting transaction
// [1 coinbase input => 1 output with given scriptPubkey and value]
CMutableTransaction BuildCreditingTransaction(const CScript& scriptPubKey, int nValue = 0);

// create spending transaction
// [1 input with referenced transaction outpoint, scriptSig, scriptWitness =>
//  1 output with empty scriptPubKey, full value of referenced transaction]
CMutableTransaction BuildSpendingTransaction(const CScript& scriptSig, const CScriptWitness& scriptWitness, const CTransaction& txCredit);

#endif // BITRUB_TEST_UTIL_TRANSACTION_UTILS_H

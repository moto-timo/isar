# Kselftest package
#
# This software is a part of ISAR.
# Copyright (c) Mentor Graphics, a Siemens business, 2020
#
# SPDX-License-Identifier: MIT

require recipes-kernel/kselftest/kselftest.inc

SRC_URI += "https://cdn.kernel.org/pub/linux/kernel/v6.x/linux-${PV}.tar.xz"
SRC_URI[sha256sum] = "44f1bb84fe512e7bafe0e6dc85d38ec1c6c8fcbe97ccb51d8c19930b799f0d64"

# Kselftest package
#
# This software is a part of ISAR.
# Copyright (c) Mentor Graphics, a Siemens business, 2020
#
# SPDX-License-Identifier: MIT

require recipes-kernel/kselftest/kselftest.inc

SRC_URI += "https://cdn.kernel.org/pub/linux/kernel/v6.x/linux-${PV}.tar.xz"
SRC_URI[sha256sum] = "3458cd6a6c508e161dbc5406e72b99d5dbdf929faf704a67db9ba46d07514858"

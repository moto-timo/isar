PV = "6.15.4"

ARCHIVE_VERSION = "${@ d.getVar('PV')[:-2] if d.getVar('PV').endswith('.0') else d.getVar('PV') }"

SRC_URI += " \
    https://cdn.kernel.org/pub/linux/kernel/v6.x/linux-${ARCHIVE_VERSION}.tar.xz \
"

SRC_URI[sha256sum] = "0eafd627b602f58d73917d00e4fc3196ba18cba67df6995a42aa74744d8efa16"

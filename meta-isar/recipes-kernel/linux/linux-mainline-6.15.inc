PV = "6.15.2"

ARCHIVE_VERSION = "${@ d.getVar('PV')[:-2] if d.getVar('PV').endswith('.0') else d.getVar('PV') }"

SRC_URI += " \
    https://cdn.kernel.org/pub/linux/kernel/v6.x/linux-${ARCHIVE_VERSION}.tar.xz \
"

SRC_URI[sha256sum] = "3458cd6a6c508e161dbc5406e72b99d5dbdf929faf704a67db9ba46d07514858"

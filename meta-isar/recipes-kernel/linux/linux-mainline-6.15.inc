PV = "6.15.9"

ARCHIVE_VERSION = "${@ d.getVar('PV')[:-2] if d.getVar('PV').endswith('.0') else d.getVar('PV') }"

SRC_URI += " \
    https://cdn.kernel.org/pub/linux/kernel/v6.x/linux-${ARCHIVE_VERSION}.tar.xz \
"

SRC_URI[sha256sum] = "e94f3af85492302f7a819441458f80bca0ad9912e5a4c83c699ff3c63c52957d"

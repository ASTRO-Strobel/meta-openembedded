SUMMARY = "A pure Python netlink and Linux network configuration library"
LICENSE = "GPLv2 & Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.GPL.v2;md5=b234ee4d69f5fce4486a80fdaf4a4263 \
                    file://LICENSE.Apache.v2;md5=34281e312165f843a2b7d1f114fe65ce"

SRC_URI[md5sum] = "4ee568832c98c39253230293a2ca3d59"
SRC_URI[sha256sum] = "240ed116fabef02c284cc40d27986e629f02aa788311a8059905b8988752d5b7"

FILESEXTRAPATHS_prepend := "${THISDIR}/python-pyroute2:"

inherit pypi

RDEPENDS_${PN} += " \
    ${PYTHON_PN}-ctypes \
    ${PYTHON_PN}-distutils \
    ${PYTHON_PN}-io \
    ${PYTHON_PN}-json \
    ${PYTHON_PN}-logging \
    ${PYTHON_PN}-multiprocessing \
    ${PYTHON_PN}-pickle \
    ${PYTHON_PN}-pkgutil \
    ${PYTHON_PN}-pprint \
    ${PYTHON_PN}-shell \
    ${PYTHON_PN}-unixadmin \
"

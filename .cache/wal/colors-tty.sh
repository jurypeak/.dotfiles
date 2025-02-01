#!/bin/sh
[ "${TERM:-none}" = "linux" ] && \
    printf '%b' '\e]P0010101
                 \e]P1EE1F25
                 \e]P2CD3E46
                 \e]P3DD7285
                 \e]P4939393
                 \e]P5AFAFAF
                 \e]P6E99B9B
                 \e]P7bfbfbf
                 \e]P8615050
                 \e]P9EE1F25
                 \e]PACD3E46
                 \e]PBDD7285
                 \e]PC939393
                 \e]PDAFAFAF
                 \e]PEE99B9B
                 \e]PFbfbfbf
                 \ec'

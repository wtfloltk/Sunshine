/**
 * @file src/platform/windows/keylayout.h
 * @brief Keyboard layout mapping for scancode translation
 */
#pragma once

#include <array>
#include <cstdint>

namespace platf {
  // Virtual Key to Scan Code mapping for the US English layout (00000409).
  // GameStream uses this as the canonical key layout for scancode conversion.
  constexpr std::array<std::uint8_t, std::numeric_limits<std::uint8_t>::max() + 1> VK_TO_SCANCODE_MAP {
    0, /* 0x00 */
    0, /* 0x01 */
    0, /* 0x02 */
    70, /* 0x03 */
    0, /* 0x04 */
    0, /* 0x05 */
    0, /* 0x06 */
    0, /* 0x07 */
    14, /* 0x08 */
    15, /* 0x09 */
    0, /* 0x0a */
    0, /* 0x0b */
    76, /* 0x0c */
    28, /* 0x0d */
    0, /* 0x0e */
    0, /* 0x0f */
    42, /* 0x10 */
    29, /* 0x11 */
    56, /* 0x12 */
    0, /* 0x13 */
    58, /* 0x14 */
    0, /* 0x15 */
    0, /* 0x16 */
    0, /* 0x17 */
    0, /* 0x18 */
    0, /* 0x19 */
    0, /* 0x1a */
    1, /* 0x1b */
    0, /* 0x1c */
    0, /* 0x1d */
    0, /* 0x1e */
    0, /* 0x1f */
    57, /* 0x20 */
    73, /* 0x21 */
    81, /* 0x22 */
    79, /* 0x23 */
    71, /* 0x24 */
    75, /* 0x25 */
    72, /* 0x26 */
    77, /* 0x27 */
    80, /* 0x28 */
    0, /* 0x29 */
    0, /* 0x2a */
    0, /* 0x2b */
    84, /* 0x2c */
    82, /* 0x2d */
    83, /* 0x2e */
    99, /* 0x2f */
    11, /* 0x30 */
    2, /* 0x31 */
    3, /* 0x32 */
    4, /* 0x33 */
    5, /* 0x34 */
    6, /* 0x35 */
    7, /* 0x36 */
    8, /* 0x37 */
    9, /* 0x38 */
    10, /* 0x39 */
    0, /* 0x3a */
    0, /* 0x3b */
    0, /* 0x3c */
    0, /* 0x3d */
    0, /* 0x3e */
    0, /* 0x3f */
    0, /* 0x40 */
    30, /* 0x41 */
    48, /* 0x42 */
    46, /* 0x43 */
    32, /* 0x44 */
    18, /* 0x45 */
    33, /* 0x46 */
    34, /* 0x47 */
    35, /* 0x48 */
    23, /* 0x49 */
    36, /* 0x4a */
    37, /* 0x4b */
    38, /* 0x4c */
    50, /* 0x4d */
    49, /* 0x4e */
    24, /* 0x4f */
    25, /* 0x50 */
    16, /* 0x51 */
    19, /* 0x52 */
    31, /* 0x53 */
    20, /* 0x54 */
    22, /* 0x55 */
    47, /* 0x56 */
    17, /* 0x57 */
    45, /* 0x58 */
    21, /* 0x59 */
    44, /* 0x5a */
    91, /* 0x5b */
    92, /* 0x5c */
    93, /* 0x5d */
    0, /* 0x5e */
    95, /* 0x5f */
    82, /* 0x60 */
    79, /* 0x61 */
    80, /* 0x62 */
    81, /* 0x63 */
    75, /* 0x64 */
    76, /* 0x65 */
    77, /* 0x66 */
    71, /* 0x67 */
    72, /* 0x68 */
    73, /* 0x69 */
    55, /* 0x6a */
    78, /* 0x6b */
    0, /* 0x6c */
    74, /* 0x6d */
    83, /* 0x6e */
    53, /* 0x6f */
    59, /* 0x70 */
    60, /* 0x71 */
    61, /* 0x72 */
    62, /* 0x73 */
    63, /* 0x74 */
    64, /* 0x75 */
    65, /* 0x76 */
    66, /* 0x77 */
    67, /* 0x78 */
    68, /* 0x79 */
    87, /* 0x7a */
    88, /* 0x7b */
    100, /* 0x7c */
    101, /* 0x7d */
    102, /* 0x7e */
    103, /* 0x7f */
    104, /* 0x80 */
    105, /* 0x81 */
    106, /* 0x82 */
    107, /* 0x83 */
    108, /* 0x84 */
    109, /* 0x85 */
    110, /* 0x86 */
    118, /* 0x87 */
    0, /* 0x88 */
    0, /* 0x89 */
    0, /* 0x8a */
    0, /* 0x8b */
    0, /* 0x8c */
    0, /* 0x8d */
    0, /* 0x8e */
    0, /* 0x8f */
    69, /* 0x90 */
    70, /* 0x91 */
    0, /* 0x92 */
    0, /* 0x93 */
    0, /* 0x94 */
    0, /* 0x95 */
    0, /* 0x96 */
    0, /* 0x97 */
    0, /* 0x98 */
    0, /* 0x99 */
    0, /* 0x9a */
    0, /* 0x9b */
    0, /* 0x9c */
    0, /* 0x9d */
    0, /* 0x9e */
    0, /* 0x9f */
    42, /* 0xa0 */
    54, /* 0xa1 */
    29, /* 0xa2 */
    29, /* 0xa3 */
    56, /* 0xa4 */
    56, /* 0xa5 */
    106, /* 0xa6 */
    105, /* 0xa7 */
    103, /* 0xa8 */
    104, /* 0xa9 */
    101, /* 0xaa */
    102, /* 0xab */
    50, /* 0xac */
    32, /* 0xad */
    46, /* 0xae */
    48, /* 0xaf */
    25, /* 0xb0 */
    16, /* 0xb1 */
    36, /* 0xb2 */
    34, /* 0xb3 */
    108, /* 0xb4 */
    109, /* 0xb5 */
    107, /* 0xb6 */
    33, /* 0xb7 */
    0, /* 0xb8 */
    0, /* 0xb9 */
    39, /* 0xba */
    13, /* 0xbb */
    51, /* 0xbc */
    12, /* 0xbd */
    52, /* 0xbe */
    53, /* 0xbf */
    41, /* 0xc0 */
    115, /* 0xc1 */
    126, /* 0xc2 */
    0, /* 0xc3 */
    0, /* 0xc4 */
    0, /* 0xc5 */
    0, /* 0xc6 */
    0, /* 0xc7 */
    0, /* 0xc8 */
    0, /* 0xc9 */
    0, /* 0xca */
    0, /* 0xcb */
    0, /* 0xcc */
    0, /* 0xcd */
    0, /* 0xce */
    0, /* 0xcf */
    0, /* 0xd0 */
    0, /* 0xd1 */
    0, /* 0xd2 */
    0, /* 0xd3 */
    0, /* 0xd4 */
    0, /* 0xd5 */
    0, /* 0xd6 */
    0, /* 0xd7 */
    0, /* 0xd8 */
    0, /* 0xd9 */
    0, /* 0xda */
    26, /* 0xdb */
    43, /* 0xdc */
    27, /* 0xdd */
    40, /* 0xde */
    0, /* 0xdf */
    0, /* 0xe0 */
    0, /* 0xe1 */
    86, /* 0xe2 */
    0, /* 0xe3 */
    0, /* 0xe4 */
    0, /* 0xe5 */
    0, /* 0xe6 */
    0, /* 0xe7 */
    0, /* 0xe8 */
    113, /* 0xe9 */
    92, /* 0xea */
    123, /* 0xeb */
    0, /* 0xec */
    111, /* 0xed */
    90, /* 0xee */
    0, /* 0xef */
    0, /* 0xf0 */
    91, /* 0xf1 */
    0, /* 0xf2 */
    95, /* 0xf3 */
    0, /* 0xf4 */
    94, /* 0xf5 */
    0, /* 0xf6 */
    0, /* 0xf7 */
    0, /* 0xf8 */
    93, /* 0xf9 */
    0, /* 0xfa */
    98, /* 0xfb */
    0, /* 0xfc */
    0, /* 0xfd */
    0, /* 0xfe */
    0, /* 0xff */
  };
}  // namespace platf
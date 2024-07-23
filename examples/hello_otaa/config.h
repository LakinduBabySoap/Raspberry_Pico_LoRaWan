/*
 * Copyright (c) 2021 Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

// LoRaWAN region to use, full list of regions can be found at:
//   http://stackforce.github.io/LoRaMac-doc/LoRaMac-doc-v4.5.1/group___l_o_r_a_m_a_c.html#ga3b9d54f0355b51e85df8b33fd1757eec
#define LORAWAN_REGION LORAMAC_REGION_AS923

// LoRaWAN Device EUI (64-bit), NULL value will use Default Dev EUI
#define LORAWAN_DEVICE_EUI "70B3D57ED00691B0"

// LoRaWAN Application / Join EUI (64-bit)
#define LORAWAN_APP_EUI "AC1F09FFF9153172"

// LoRaWAN Application Key (128-bit)
#define LORAWAN_APP_KEY "65300D669A645218A9CE475DD5B39DC2"

// LoRaWAN Channel Mask, NULL value will use the default channel mask
// for the region
#define LORAWAN_CHANNEL_MASK NULL

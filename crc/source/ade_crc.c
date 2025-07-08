/******************************************************************************
 Copyright (c) 2025  Analog Devices Inc.
******************************************************************************/

/**
 * @file     ade_crc.c
 * @brief    CRC calculation functions
 * @{
 */

/*============= I N C L U D E S =============*/
#include "ade_crc.h"

/*=============  C O D E  =============*/
/*Function to calculate the CRC-8 value. */
uint32_t AdeCalculateCrc8(uint8_t *pBuff, uint32_t numBytes)
{
    uint8_t checksum = (uint8_t)CRC8_SEED;
    uint8_t temp;
    uint8_t finalXorValue = (uint8_t)CRC8_XOR_OUT;
    uint8_t byte;
    uint32_t i, j;
    uint16_t currPoly;

    for (i = 0; i < (uint32_t)(numBytes); i++)
    {
        byte = (uint8_t)(pBuff[i] ^ (checksum));
        temp = (uint8_t)byte;
        for (j = 0; j < 8; j++)
        {
            if ((temp & (1u << 7)) == (1u << 7))
            {
                currPoly = CRC8_POLY;
            }
            else
            {
                currPoly = 0;
            }
            /* Shift out last bit. */
            temp = (uint8_t)(temp << 1);
            /* XOR */
            temp ^= currPoly;
        }
        checksum = (uint8_t)(temp ^ ((uint16_t)(checksum << 8)));
    }
    return (uint32_t)(checksum ^ finalXorValue);
}

/*Function to calculate the CRC-16 value. */
uint32_t AdeCalculateCrc16(uint8_t *pBuff, uint32_t numBytes)
{
    uint16_t checksum = (uint16_t)CRC16_SEED;
    uint16_t temp;
    uint16_t finalXorValue = (uint16_t)CRC16_XOR_OUT;
    uint16_t byte;
    uint32_t i, j;
    uint16_t currPoly;

    for (i = 0; i < (uint32_t)(numBytes); i++)
    {
        byte = (uint16_t)(pBuff[i] ^ (checksum >> 8));
        temp = (uint16_t)(byte << 8);
        for (j = 0; j < 8; j++)
        {
            if ((temp & (1u << 15)) == (1u << 15))
            {
                currPoly = CRC16_POLY;
            }
            else
            {
                currPoly = 0;
            }
            /* Shift out last bit. */
            temp = (uint16_t)(temp << 1);
            /* XOR */
            temp ^= currPoly;
        }
        checksum = (uint16_t)(temp ^ ((uint16_t)(checksum << 8)));
    }
    return (uint32_t)(checksum ^ finalXorValue);
}

/**
 * @}
 */

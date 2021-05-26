#ifndef _INCLUDE_TOOLKIT_H
#define _INCLUDE_TOOLKIT_H



/********************************************************************
* checkSum - ����checkXor
*
* PARAMETERS: As follow:
*   pBuf    ����ָ��
*   len     ���볤��
* RETURNS: 
*   ����
* EXAMPLE:
* ...
**********************************************************************/
rt_uint8_t checkXor(const rt_uint8_t *pBuf, rt_uint32_t len);


/********************************************************************
* checkSum - ����checksum
*
* PARAMETERS: As follow:
*   pBuf    ����ָ��
*   len     ���볤��
* RETURNS: 
*   ����
* EXAMPLE:
* ...
*/


rt_uint8_t checkSum(const rt_uint8_t *pBuf,rt_uint32_t len);
/********************************************************************
* checkCrc - ����checkCrc
*
* PARAMETERS: As follow:
*   pBuf    ����ָ��
*   len     ���볤��
* RETURNS: 
*   crc
* EXAMPLE:
* ...
*/

rt_uint8_t checkCrc(const rt_uint8_t *pBuf, rt_uint32_t len);

/*********************************************************************************************************
** Function name��      hex_data_print()
** Descriptions:        dump hex format data to sonsole device
** input parameters��   ��
** output parameters��  ��
** Returned value:      ��
*********************************************************************************************************/
void hex_data_print(const char *name, const rt_uint8_t *buf, rt_size_t size);

/*********************************************************************************************************
** Function name��      Parameter_dec_decode()
** Descriptions:        dec parameter string decode dec number
** input parameters��   argv
** output parameters��  pData
** Returned value:      ��
*********************************************************************************************************/
int Parameter_dec_decode(char* argv, rt_uint32_t *pData, rt_uint32_t pDataSize,rt_uint32_t *pDatalen);

/*********************************************************************************************************
** Function name��      Parameter_dec_decode_with_hyphen()
** Descriptions:        dec parameter string decode dec number,it use comma or hyphen separated
**                      eg:1,2,3-7,10
** input parameters��   argv
** output parameters��  pData
** Returned value:      ��
*********************************************************************************************************/
int Parameter_dec_decode_with_hyphen(char* argv, rt_uint32_t *pData, rt_uint32_t pDataSize,rt_uint32_t *pDatalen);

/*********************************************************************************************************
** Function name��      checkCrc16
** Descriptions:        check crc16 compute 
** input parameters��   crc_init, pucFrame, usLen
** output parameters��  None
** Returned value:      CRC16 value
*********************************************************************************************************/
rt_uint16_t checkCrc16(rt_uint16_t crc_init, rt_uint8_t * pucFrame, rt_uint16_t usLen);




#endif


/*
 * cryp.h
 *
 *  Created on: 2/07/2014
 *      Author: john
 */

#ifndef CRYP_H_
#define CRYP_H_

void aesEncrypt(uint8_t *key, uint8_t *data, uint8_t *cypher);
void aesDecrypt(uint8_t *key, uint8_t *data, uint8_t *plain);

#endif /* CRYP_H_ */

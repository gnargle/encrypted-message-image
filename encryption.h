#ifndef _ENCRYPTION_H
#define _ENCRYPTION_H

void phex(uint8_t* str);

void phex_to_string(uint8_t* str, char* out);

void encrypt_str(uint8_t* str, uint8_t* out, int iter, uint8_t* key);

void decrypt_str(uint8_t* str, uint8_t* out, int iter, uint8_t* key);

int findIterations(uint8_t* str);

int hex_to_int(char c);

int hex_to_ascii(char c, char d);

void convert_hex_str_to_asc(char* str, char* done);

#endif //_ENCRYPTION_H
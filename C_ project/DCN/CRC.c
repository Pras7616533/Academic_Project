#include <stdio.h>
#include <string.h>
#define POLYNOMIAL 0x13

void computeCRC(char data[], char generator[], char crc[]) {
              int dataLen = strlen(data);
    int genLen = strlen(generator);
           
  char temp[dataLen + genLen - 1];                                     
  strcpy(temp, data);
                                    
  for (int i = 0; i < genLen - 1; i++) {                                   
    temp[dataLen + i] = '0';
    }
    temp[dataLen + genLen - 1] = '\0';                                                                                                       
  for (int i = 0; i <= dataLen - 1; i++) {                                 
    if (temp[i] == '1') {
            for (int j = 0; j < genLen; j++) {
                temp[i + j] = (temp[i + j] == generator[j]) ? '0' : '1';
            }
        }
    }                                                                                                                                                                                                             
  strncpy(crc, temp + dataLen, genLen - 1);                             
  crc[genLen - 1] = '\0';                                         
}                                                                                                                                          
int main() {                                                             
  char data[100], generator[20], transmittedData[120], crc[20];     
    printf("Enter the data bits: ");
    scanf("%s", data);
    printf("Enter the generator polynomial bits: ");
    scanf("%s", generator);

    computeCRC(data, generator, crc);
    printf("Generated CRC: %s\n", crc);

    strcpy(transmittedData, data);
    strcat(transmittedData, crc);

    printf("Transmitted data with CRC: %s\n", transmittedData);

    char receivedData[120];
    printf("Enter the received data: ");
    scanf("%s", receivedData);

    char receivedCRC[20];
    computeCRC(receivedData, generator, receivedCRC);

    int errorDetected = 0;
    for (int i = 0; i < strlen(generator) - 1; i++) {
        if (receivedCRC[i] != '0') {
            errorDetected = 1;
            break;
        }
    }

    if (errorDetected) {
        printf("Error detected in received data.\n");
    } else {
        printf("No error detected in received data.\n");
    }

    return 0;
}

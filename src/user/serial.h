#ifndef SERIAL_H
#define SERIAL_H

typedef enum {
    FLASH_SIZE_4M_MAP_256_256 = 0,  /**<  Flash size : 4Mbits. Map : 256KBytes + 256KBytes */
    FLASH_SIZE_2M,                  /**<  Flash size : 2Mbits. Map : 256KBytes */
    FLASH_SIZE_8M_MAP_512_512,      /**<  Flash size : 8Mbits. Map : 512KBytes + 512KBytes */
    FLASH_SIZE_16M_MAP_512_512,     /**<  Flash size : 16Mbits. Map : 512KBytes + 512KBytes */
    FLASH_SIZE_32M_MAP_512_512,     /**<  Flash size : 32Mbits. Map : 512KBytes + 512KBytes */
    FLASH_SIZE_16M_MAP_1024_1024,   /**<  Flash size : 16Mbits. Map : 1024KBytes + 1024KBytes */
    FLASH_SIZE_32M_MAP_1024_1024,    /**<  Flash size : 32Mbits. Map : 1024KBytes + 1024KBytes */
    FLASH_SIZE_32M_MAP_2048_2048,    /**<  attention: don't support now ,just compatible for nodemcu;
                                           Flash size : 32Mbits. Map : 2048KBytes + 2048KBytes */
    FLASH_SIZE_64M_MAP_1024_1024,     /**<  Flash size : 64Mbits. Map : 1024KBytes + 1024KBytes */
    FLASH_SIZE_128M_MAP_1024_1024,    /**<  Flash size : 128Mbits. Map : 1024KBytes + 1024KBytes */

    FALSH_SIZE_MAP_MAX
} flash_size_map;

void serial_init(void);
#endif

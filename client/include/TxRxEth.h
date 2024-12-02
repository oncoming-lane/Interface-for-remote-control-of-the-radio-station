#pragma once

#include <cmath>
#include <csignal>
#include <iostream>

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#include <errno.h>
#include <dirent.h>
#include <pthread.h>
#include <arpa/inet.h>

#include <cstring>
#include <string>
#include <fstream>

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <netinet/in.h>


#include <alsa/asoundlib.h>
#include <alsa/asoundlib.h>
#include <alsa/pcm.h>

#define DEV_DIR "/dev"
#define BUFFER_SIZE 1024
#define PERIODS 512;
#define TTY "ttyAMA"
#define PORT 5678


int transmit_eth(std::string message1);
void audioTxEth(unsigned char * buffer);

std::string receive_eth();

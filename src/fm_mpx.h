/*
    PiFmAdv - Advanced FM transmitter for the Raspberry Pi
    Copyright (C) 2017 Miegl

    See https://github.com/Miegl/PiFmAdv
*/

extern int fm_mpx_open(char *filename, size_t buf_len, int cutoff_freq, int preemphasis_corner_freq, int srate, int nochan);
extern int fm_mpx_get_samples(double *mpx_buffer, int mpx_buffer_len, float mpx, int rds, int wait);
extern int fm_mpx_close();

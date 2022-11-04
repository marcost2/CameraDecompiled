
/* save_bokeh_otp_to_file(char const*, unsigned char*, int) */

undefined4 save_bokeh_otp_to_file(char *param_1,uchar *param_2,int param_3)

{
  int __fd;
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  
  __fd = open(param_1,0x42,0x1ff);
  if (__fd < 1) {
    if (*(int *)(*(int *)(DAT_00100474 + 0x100408) + 0x2c) != 0) {
      piVar2 = (int *)__errno();
      pcVar3 = strerror(*piVar2);
      mm_camera_debug_log(1,4,DAT_00100478 + 0x100420,0x51,DAT_0010047c + 0x100422,
                          DAT_00100478 + 0x100420,pcVar3);
    }
  }
  else {
    fchmod(__fd,0x1b6);
    sVar1 = write(__fd,param_2,param_3);
    if (sVar1 != param_3) {
      if (*(int *)(*(int *)(DAT_00100468 + 0x10043a) + 0x2c) != 0) {
        piVar2 = (int *)__errno();
        pcVar3 = strerror(*piVar2);
        mm_camera_debug_log(1,4,DAT_0010046c + 0x100452,0x4c,DAT_00100470 + 0x100454,
                            DAT_0010046c + 0x100452,pcVar3);
      }
      return 0xffffffff;
    }
    close(__fd);
  }
  return 0;
}



/* load_bokeh_otp_from_hardware(unsigned char*, int*) */

undefined4 load_bokeh_otp_from_hardware(uchar *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  size_t *psVar3;
  
  iVar2 = *(int *)(DAT_00100508 + 0x10048e);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0010050c + 0x1004a0,0x59,DAT_00100510 + 0x10049e,
                        DAT_0010050c + 0x1004a0,param_1,param_2);
  }
  iVar1 = load_bokeh_otp_from_file((char *)(DAT_00100514 + 0x1004b4),param_1,param_2);
  if (iVar1 == 0) {
    if (*(int *)(iVar2 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0010051c + 0x1004f8,0x5e,DAT_00100518 + 0x1004ec,
                          (int)*(short *)(param_1 + 2));
    }
  }
  else {
    if ((*(byte *)(DAT_00100520 + 0x1004be) & 0xfe) != 0x42) {
      return 0xffffffff;
    }
    psVar3 = (size_t *)(DAT_00100524 + 0x1004ce);
    __aeabi_memcpy8(param_1,(void *)(DAT_00100528 + 0x1004d4),*psVar3);
    *param_2 = *psVar3;
  }
  return 0;
}


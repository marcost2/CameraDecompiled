
/* load_bokeh_otp_from_file(char const*, unsigned char*, int*) */

undefined4 load_bokeh_otp_from_file(char *param_1,uchar *param_2,int *param_3)

{
  int iVar1;
  FILE *__stream;
  size_t __n;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_001003ac + 0x100306);
  if (*(int *)(iVar4 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_001003b0 + 0x100316,0x2e,DAT_001003b4 + 0x100318,
                        DAT_001003b0 + 0x100316);
  }
  iVar1 = access(param_1,0);
  if (iVar1 == -1) {
    if (*(int *)(iVar4 + 0x2c) == 0) {
      return 0xffffffff;
    }
    uVar3 = 0x33;
    iVar4 = DAT_001003bc + 0x10037c;
    pcVar2 = (char *)(DAT_001003b8 + 0x10037e);
  }
  else {
    __stream = fopen(param_1,(char *)(DAT_001003c0 + 0x100334));
    if (__stream != (FILE *)0x0) {
      fseek(__stream,0,2);
      __n = ftell(__stream);
      *param_3 = __n;
      fseek(__stream,0,0);
      fread(param_2,1,__n,__stream);
      fclose(__stream);
      return 0;
    }
    if (*(int *)(iVar4 + 0x2c) == 0) {
      return 0xffffffff;
    }
    uVar3 = 0x40;
    pcVar2 = (char *)(DAT_001003c4 + 0x100394);
    iVar4 = DAT_001003c8 + 0x100396;
    param_1 = pcVar2;
  }
  mm_camera_debug_log(1,4,pcVar2,uVar3,iVar4,param_1);
  return 0xffffffff;
}


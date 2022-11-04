
/* save_bokeh_otp_to_buf(unsigned char*, int) */

void save_bokeh_otp_to_buf(uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char acStack120 [92];
  int local_1c;
  
  piVar5 = *(int **)(DAT_001005ec + 0x10053c);
  local_1c = *piVar5;
  uVar1 = 0xffffffff;
  if ((param_1 != (uchar *)0x0) && (0 < param_2)) {
    iVar3 = (int)*(short *)(param_1 + 2);
    iVar4 = *(int *)(DAT_001005f0 + 0x10055a);
    if (*(int *)(iVar4 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_001005f8 + 0x100572,0x6c,DAT_001005f4 + 0x100568,iVar3);
    }
    if ((iVar3 < 0) || (param_2 < iVar3)) {
      if (*(int *)(iVar4 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_00100600 + 0x100596,0x6f,DAT_001005fc + 0x10058a,iVar3,param_2);
      }
      iVar3 = (int)(short)param_2;
    }
    __memcpy_chk(DAT_00100604 + 0x1005a8,param_1,iVar3,0x400);
    piVar2 = (int *)(DAT_00100608 + 0x1005b0);
    *piVar2 = iVar3;
    property_get(DAT_0010060c + 0x1005bc,acStack120,DAT_00100610 + 0x1005be);
    iVar3 = atoi(acStack120);
    if (iVar3 != 0) {
      save_bokeh_otp_to_file
                ((char *)(DAT_00100614 + 0x1005d2),(uchar *)(DAT_00100618 + 0x1005d4),*piVar2);
    }
    uVar1 = 0;
  }
  if (*piVar5 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


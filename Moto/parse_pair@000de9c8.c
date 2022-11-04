
/* qcamera::QCameraParameters::parse_pair(char const*, int*, int*, char, char**) */

void __thiscall
qcamera::QCameraParameters::parse_pair
          (QCameraParameters *this,char *param_1,int *param_2,int *param_3,char param_4,
          char **param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined3 in_stack_00000001;
  byte *local_20;
  int local_1c;
  
  piVar4 = *(int **)(DAT_000dea50 + 0xde9dc);
  local_1c = *piVar4;
  lVar1 = strtol(param_1,(char **)&local_20,10);
  if (*local_20 == _param_4) {
    lVar2 = strtol((char *)(local_20 + 1),(char **)&local_20,10);
    *param_2 = lVar1;
    *param_3 = lVar2;
    if (param_5 != (char **)0x0) {
      *param_5 = (char *)local_20;
    }
    uVar3 = 0;
  }
  else {
    if (*(int *)(*(int *)(DAT_000dea54 + 0xdea1a) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000dea5c + 0xdea36,0x1c39,DAT_000dea58 + 0xdea28,_param_4,param_1)
      ;
    }
    uVar3 = 0xffffffea;
  }
  if (*piVar4 != local_1c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


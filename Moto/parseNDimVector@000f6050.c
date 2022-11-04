
/* qcamera::QCameraParameters::parseNDimVector(char const*, int*, int, char) */

void __thiscall
qcamera::QCameraParameters::parseNDimVector
          (QCameraParameters *this,char *param_1,int *param_2,int param_3,char param_4)

{
  size_t sVar1;
  byte *pbVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined3 in_stack_00000001;
  byte *local_2c;
  int local_28;
  
  piVar7 = *(int **)(DAT_000f613c + 0xf605e);
  local_28 = *piVar7;
  if (param_2 == (int *)0x0) {
    if (*(int *)(*(int *)(DAT_000f6140 + 0xf60e0) + 0x20) != 0) {
      uVar4 = 0x324a;
      iVar6 = DAT_000f6144 + 0xf60f0;
      iVar5 = DAT_000f6148 + 0xf60f8;
LAB_000f60f6:
      mm_camera_debug_log(1,1,iVar5,uVar4,iVar6);
    }
  }
  else {
    if ((*param_1 == '(') && (sVar1 = strlen(param_1), param_1[sVar1 - 1] == ')')) {
      if (0 < param_3) {
        iVar6 = 0;
        pbVar2 = (byte *)param_1;
        do {
          lVar3 = strtol((char *)(pbVar2 + 1),(char **)&local_2c,10);
          param_2[iVar6] = lVar3;
          if ((iVar6 < param_3 + -1) && (*local_2c != _param_4)) {
            if (*(int *)(*(int *)(DAT_000f6158 + 0xf6114) + 0x20) != 0) {
              mm_camera_debug_log(1,1,DAT_000f6160 + 0xf6130,0x325a,DAT_000f615c + 0xf6122,_param_4,
                                  param_1,(uint)*local_2c);
            }
            uVar4 = 0xffffffff;
            goto LAB_000f60fe;
          }
          iVar6 = iVar6 + 1;
          pbVar2 = local_2c;
        } while (iVar6 < param_3);
      }
      uVar4 = 0;
      goto LAB_000f60fe;
    }
    if (*(int *)(*(int *)(DAT_000f614c + 0xf60c0) + 0x20) != 0) {
      uVar4 = 0x3251;
      iVar6 = DAT_000f6150 + 0xf60d0;
      iVar5 = DAT_000f6154 + 0xf60da;
      goto LAB_000f60f6;
    }
  }
  uVar4 = 0xffffffea;
LAB_000f60fe:
  if (*piVar7 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


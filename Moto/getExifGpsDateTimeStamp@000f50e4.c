
/* qcamera::QCameraParameters::getExifGpsDateTimeStamp(char*, unsigned int, rat_t*) */

void __thiscall
qcamera::QCameraParameters::getExifGpsDateTimeStamp
          (QCameraParameters *this,char *param_1,uint param_2,rat_t *param_3)

{
  char *__nptr;
  tm *__tp;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  long local_20;
  int local_1c;
  
  piVar4 = *(int **)(DAT_000f521c + 0xf50f6);
  local_1c = *piVar4;
  __nptr = (char *)android::CameraParameters::get((char *)this);
  if (__nptr != (char *)0x0) {
    local_20 = atol(__nptr);
    __tp = gmtime(&local_20);
    if (__tp != (tm *)0x0) {
      strftime(param_1,param_2,(char *)(DAT_000f5230 + 0xf5126),__tp);
      if (__tp->tm_hour < 0) {
        if (*(int *)(*(int *)(DAT_000f5234 + 0xf516c) + 0x20) != 0) {
          uVar2 = 0x2f4f;
          iVar1 = DAT_000f5238 + 0xf517c;
          iVar3 = DAT_000f523c + 0xf5184;
LAB_000f51a0:
          mm_camera_debug_log(1,1,iVar3,uVar2,iVar1);
        }
      }
      else if (param_3 == (rat_t *)0x0) {
        if (*(int *)(*(int *)(DAT_000f5240 + 0xf518a) + 0x20) != 0) {
          uVar2 = 0x2f53;
          iVar1 = DAT_000f5244 + 0xf519a;
          iVar3 = DAT_000f5248 + 0xf51a2;
          goto LAB_000f51a0;
        }
      }
      else {
        *(int *)param_3 = __tp->tm_hour;
        *(undefined4 *)(param_3 + 4) = 1;
      }
      if (__tp->tm_min < 0) {
        if (*(int *)(*(int *)(DAT_000f524c + 0xf51ba) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000f5254 + 0xf51d2,0x2f4f,DAT_000f5250 + 0xf51ca);
        }
      }
      else {
        *(int *)(param_3 + 8) = __tp->tm_min;
        *(undefined4 *)(param_3 + 0xc) = 1;
      }
      if (__tp->tm_sec < 0) {
        if (*(int *)(*(int *)(DAT_000f5258 + 0xf51ea) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000f5260 + 0xf5202,0x2f4f,DAT_000f525c + 0xf51fa);
        }
      }
      else {
        *(int *)(param_3 + 0x10) = __tp->tm_sec;
        *(undefined4 *)(param_3 + 0x14) = 1;
      }
      uVar2 = 0;
      goto LAB_000f5206;
    }
    if (*(int *)(*(int *)(DAT_000f5224 + 0xf5140) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000f522c + 0xf5158,0x303a,DAT_000f5228 + 0xf5150);
      uVar2 = 0xffffffea;
      goto LAB_000f5206;
    }
  }
  uVar2 = 0xffffffea;
LAB_000f5206:
  if (*piVar4 == local_1c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


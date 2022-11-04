
/* qcamera::QCameraParameters::updateFlashMode(cam_flash_mode_t) */

int __thiscall
qcamera::QCameraParameters::updateFlashMode(QCameraParameters *this,cam_flash_mode_t param_1)

{
  pthread_t pVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  MotParamStateMachine *this_00;
  char *pcVar6;
  void *pvVar7;
  int iVar8;
  
  iVar8 = *(int *)(DAT_000f124c + 0xf1046);
  if ((int)param_1 < 5) {
    if (*(int *)(iVar8 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000f125c + 0xf1086,0x2055,DAT_000f1258 + 0xf107c,param_1);
    }
    if (param_1 < 4) {
      pcVar6 = *(char **)(*(int *)(DAT_000f1260 + 0xf1092) + param_1 * 8);
    }
    else {
      pcVar6 = (char *)0x0;
    }
    pvVar7 = *(void **)(this + 0x1e0);
    if (pvVar7 == (void *)0x0) {
      iVar3 = -0x7fffffff;
      if (*(int *)(iVar8 + 0x20) == 0) {
        return -0x7fffffff;
      }
      uVar2 = 0x205a;
      iVar8 = DAT_000f126c + 0xf1174;
      iVar4 = DAT_000f1270 + 0xf117c;
LAB_000f117a:
      mm_camera_debug_log(1,1,iVar4,uVar2,iVar8);
      return iVar3;
    }
    this_00 = (MotParamStateMachine *)(this + 0xd28);
    iVar3 = MotParamStateMachine::beginInitBatch(this_00);
    if (iVar3 == 0) {
      android::VectorImpl::clear();
      __aeabi_memclr8(pvVar7,0x10f);
      *(undefined *)((int)pvVar7 + 0x117aec) = 0;
      *(undefined *)((int)pvVar7 + 0x106974) = 0;
      *(undefined *)((int)pvVar7 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar7 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar7 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar7 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar7 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar7 + 0xb7340) = 0;
      *(undefined *)((int)pvVar7 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar7 + 0x772c8) = 0;
      MotParamStateMachine::endInitBatch(this_00);
    }
    iVar3 = setFlash(this,pcVar6);
    if (iVar3 != 0) {
      if (*(int *)(iVar8 + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000f1268 + 0xf1152,0x205f,DAT_000f1264 + 0xf114a);
      }
      MotParamStateMachine::cancelSequence();
      return iVar3;
    }
    if (*(int *)(iVar8 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000f1278 + 0xf11a6,0x2066,DAT_000f1274 + 0xf119a,
                          *(undefined4 *)(this + 0x2f4));
    }
    iVar3 = *(int *)(this + 0x1e0);
    if (iVar3 == 0) {
      param_1 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar1 = pthread_self(), pVar1 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)("Failed to queue CREATE_JPEG_SESSION" + iVar3 + 0x11) =
             *(undefined4 *)(this + 0x2f4);
        *(undefined *)(*(int *)(this + 0x1e0) + 0xf) = 1;
        iVar3 = commitSetBatch(this);
        if (iVar3 == 0) {
          return 0;
        }
        if (*(int *)(iVar8 + 0x20) == 0) {
          return iVar3;
        }
        uVar2 = 0x206e;
        iVar8 = DAT_000f1290 + 0xf11f6;
        iVar4 = DAT_000f1294 + 0xf11fe;
        goto LAB_000f117a;
      }
      MotParamStateMachine::paramWriteError(this_00);
      param_1 = *(cam_flash_mode_t *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000f127c + 0xf1224,DAT_000f1280 + 0xf1226,DAT_000f1284 + 0xf1228,
                        0x2067,param_1,0xf);
    if (*(int *)(iVar8 + 0x20) == 0) {
      return -0x16;
    }
    uVar2 = 1;
    uVar5 = 0x2068;
    iVar8 = DAT_000f1288 + 0xf1240;
    iVar3 = DAT_000f128c + 0xf1248;
  }
  else {
    if (*(int *)(iVar8 + 0x28) == 0) {
      return -0x16;
    }
    uVar2 = 3;
    uVar5 = 0x2052;
    iVar8 = DAT_000f1250 + 0xf105c;
    iVar3 = DAT_000f1254 + 0xf1066;
  }
  mm_camera_debug_log(1,uVar2,iVar3,uVar5,iVar8,param_1);
  return -0x16;
}


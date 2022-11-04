
/* qcamera::QCameraParameters::setFaceDetection(bool, bool) */

int __thiscall
qcamera::QCameraParameters::setFaceDetection(QCameraParameters *this,bool param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  pthread_t pVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  void *pvVar8;
  int *piVar9;
  uint local_80;
  undefined4 uStack124;
  int local_20;
  
  piVar9 = *(int **)(DAT_000e8af0 + 0xe8806);
  local_20 = *piVar9;
  if (param_1 == false) {
    uVar7 = *(uint *)(this + 0x218) & 0xffffffda;
LAB_000e88e8:
    if (*(uint *)(this + 0x218) == uVar7) {
      if (*(int *)(*(int *)(DAT_000e8b28 + 0xe88f6) + 0x28) != 0) {
        uVar6 = 0x3134;
        iVar2 = DAT_000e8b2c + 0xe8906;
        iVar4 = DAT_000e8b30 + 0xe890e;
LAB_000e890c:
        mm_camera_debug_log(1,3,iVar4,uVar6,iVar2);
      }
LAB_000e8910:
      iVar4 = 0;
      goto LAB_000e8a94;
    }
    *(uint *)(this + 0x218) = uVar7;
    uStack124 = android::CameraParameters::getInt((char *)this);
    iVar2 = *(int *)(DAT_000e8b38 + 0xe892e);
    local_80 = uVar7;
    if (*(int *)(iVar2 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000e8b40 + 0xe894a,0x3142,DAT_000e8b3c + 0xe893c,uVar7,uStack124);
    }
    if (param_2 != false) {
      pvVar8 = *(void **)(this + 0x1e0);
      if (pvVar8 != (void *)0x0) {
        iVar4 = MotParamStateMachine::beginInitBatch((MotParamStateMachine *)(this + 0xd28));
        if (iVar4 == 0) {
          android::VectorImpl::clear();
          __aeabi_memclr8(pvVar8,0x10f);
          *(undefined *)((int)pvVar8 + 0x117aec) = 0;
          *(undefined *)((int)pvVar8 + 0x106974) = 0;
          *(undefined *)((int)pvVar8 + 0xe1f78) = 0;
          *(undefined *)((int)pvVar8 + 0xcfa74) = 0;
          *(undefined *)((int)pvVar8 + 0xcfa08) = 0;
          *(undefined *)((int)pvVar8 + 0xc36b0) = 0;
          *(undefined *)((int)pvVar8 + 0xb86e0) = 0;
          *(undefined *)((int)pvVar8 + 0xb7340) = 0;
          *(undefined *)((int)pvVar8 + 0xb72e8) = 0;
          *(undefined *)((int)pvVar8 + 0x772c8) = 0;
          MotParamStateMachine::endInitBatch((MotParamStateMachine *)(this + 0xd28));
        }
        goto LAB_000e89e4;
      }
      iVar4 = -0x7fffffff;
      if (*(int *)(iVar2 + 0x20) == 0) goto LAB_000e8a94;
      uVar6 = 0x3146;
      iVar2 = DAT_000e8b44 + 0xe8abe;
      iVar5 = DAT_000e8b48 + 0xe8ac6;
LAB_000e8ac4:
      mm_camera_debug_log(1,1,iVar5,uVar6,iVar2);
      goto LAB_000e8a94;
    }
LAB_000e89e4:
    iVar4 = *(int *)(this + 0x1e0);
    if (iVar4 == 0) {
      uVar6 = 0;
    }
    else {
      if ((*(int *)(this + 0xd30) == 1) &&
         (pVar3 = pthread_self(), pVar3 == *(pthread_t *)(this + 0xd34))) {
        *(undefined4 *)
         (
         "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
         + iVar4 + 0x34) = uStack124;
        *(uint *)(
                 "%s: AWB Cal status 0x%x AF Cal Status: 0x%x: LSC Cal Status: 0x%xPDAF Cal Status: 0x%x: stereo Cal Status: 0x%x"
                 + iVar4 + 0x30) = local_80;
        *(undefined *)(*(int *)(this + 0x1e0) + 0x23) = 1;
        if ((param_2 == false) || (iVar4 = commitSetBatch(this), iVar4 == 0)) {
          if (*(int *)(iVar2 + 0x28) != 0) {
            uVar6 = 0x315a;
            iVar2 = DAT_000e8b68 + 0xe8ae0;
            iVar4 = DAT_000e8b6c + 0xe8aec;
            goto LAB_000e890c;
          }
          goto LAB_000e8910;
        }
        if (*(int *)(iVar2 + 0x20) == 0) goto LAB_000e8a94;
        uVar6 = 0x3155;
        iVar2 = DAT_000e8b60 + 0xe8a40;
        iVar5 = DAT_000e8b64 + 0xe8a48;
        goto LAB_000e8ac4;
      }
      MotParamStateMachine::paramWriteError((MotParamStateMachine *)(this + 0xd28));
      uVar6 = *(undefined4 *)(this + 0x1e0);
    }
    __android_log_print(6,DAT_000e8b4c + 0xe8a70,DAT_000e8b50 + 0xe8a72,DAT_000e8b54 + 0xe8a74,
                        0x314d,uVar6,0x23);
    if (*(int *)(iVar2 + 0x20) != 0) {
      uVar6 = 0x314e;
      iVar2 = DAT_000e8b58 + 0xe8a86;
      iVar4 = DAT_000e8b5c + 0xe8a8e;
      goto LAB_000e8a8c;
    }
  }
  else {
    if (*(char *)(*(int *)(this + 0x1d4) + 0x2f81) != '\0') {
      if (this[0x213] == (QCameraParameters)0x0) {
        uVar7 = *(uint *)(this + 0x218) | 5;
      }
      else {
        property_get(DAT_000e8b04 + 0xe8836,&local_80,*(undefined4 *)(DAT_000e8b00 + 0xe882c));
        uVar1 = atoi((char *)&local_80);
        uVar1 = uVar1 & ~((int)uVar1 >> 0x1f);
        if (*(int *)(*(int *)(DAT_000e8b08 + 0xe8848) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_000e8b10 + 0xe8864,0x3dbb,DAT_000e8b0c + 0xe8858,uVar1 & 0xff)
          ;
        }
        uVar7 = 4;
        if ((uVar1 & 0xff) == 1) {
          uVar7 = 5;
        }
      }
      iVar2 = *(int *)(*(int *)(DAT_000e8b14 + 0xe88a8) + 0x30);
      if (this[0x302] == (QCameraParameters)0x0) {
        if (iVar2 != 0) {
          mm_camera_debug_log(1,5,DAT_000e8b24 + 0xe88e2,0x312a,DAT_000e8b20 + 0xe88da);
        }
        uVar7 = uVar7 & 0xffffffdf;
      }
      else {
        if (iVar2 != 0) {
          mm_camera_debug_log(1,5,DAT_000e8b1c + 0xe88c4,0x3127,DAT_000e8b18 + 0xe88bc);
        }
        uVar7 = uVar7 | 0x20;
      }
      goto LAB_000e88e8;
    }
    if (*(int *)(*(int *)(DAT_000e8af4 + 0xe887e) + 0x20) != 0) {
      uVar6 = 0x3118;
      iVar2 = DAT_000e8af8 + 0xe8892;
      iVar4 = DAT_000e8afc + 0xe889a;
LAB_000e8a8c:
      mm_camera_debug_log(1,1,iVar4,uVar6,iVar2);
    }
  }
  iVar4 = -0x16;
LAB_000e8a94:
  if (*piVar9 != local_20) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* qcamera::QCamera3HardwareInterface::~QCamera3HardwareInterface() */

QCamera3HardwareInterface * __thiscall
qcamera::QCamera3HardwareInterface::_QCamera3HardwareInterface(QCamera3HardwareInterface *this)

{
  QCamera3HardwareInterface QVar1;
  int *piVar2;
  BSTBokehParam *this_00;
  int iVar3;
  int *piVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  void *pvVar8;
  void *pvVar9;
  undefined4 uVar10;
  int **ppiVar11;
  int *piVar12;
  void **ppvVar13;
  void *pvVar14;
  int iVar15;
  pthread_mutex_t *__mutex;
  void *pvVar16;
  QCameraPerfLock *this_01;
  int iVar17;
  undefined auStack400 [168];
  undefined4 local_e8;
  int local_e4;
  int local_28;
  
  piVar2 = *(int **)(DAT_0007fbd4 + 0x7f85a);
  local_28 = *piVar2;
  *(int *)this = *(int *)(DAT_0007fbd8 + 0x7f866) + 8;
  ppiVar11 = (int **)(this + 0x117f30);
  iVar17 = *(int *)(DAT_0007fbdc + 0x7f87a);
  if (*(int *)(iVar17 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_0007fbe4 + 0x7f896,0x245,DAT_0007fbe0 + 0x7f88e);
  }
  this_00 = (BSTBokehParam *)BSTBokehParam::createInstance();
  if ((*(int *)(this + 0x60) == 2) && (iVar3 = BSTBokehParam::getStereoMode(this_00), iVar3 != 0)) {
    if (*(int *)(iVar17 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0007fbec + 0x7f8c6,0x24c,DAT_0007fbe8 + 0x7f8be);
    }
    piVar4 = (int *)BSTLiveBokeh::createInstance();
    (**(code **)(*piVar4 + 0x10))();
  }
  this_01 = (QCameraPerfLock *)(this + 0xa8);
  QCameraPerfLock::lock_acq(this_01);
  if (this[0x117fe1] != (QCamera3HardwareInterface)0x0) {
    if (*(int *)(iVar17 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_0007fbf4 + 0x7f8fe,0x25d,DAT_0007fbf0 + 0x7f8f6);
    }
    **(undefined4 **)(this + 0x117fe8) = 2;
    __mutex = *(pthread_mutex_t **)(DAT_0007fbf8 + 0x7f916);
    pthread_mutex_lock(__mutex);
    QVar1 = this[0x117fe2];
    *(uint *)(*(int *)(this + 0x117fe8) + 8) = (byte)QVar1 ^ 1;
    uVar10 = 1;
    if ((byte)QVar1 == 0) {
      uVar10 = 2;
    }
    *(undefined4 *)(*(int *)(this + 0x117fe8) + 4) = uVar10;
    *(undefined4 *)(*(int *)(this + 0x117fe8) + 0xc) =
         *(undefined4 *)(*(int *)(DAT_0007fbfc + 0x7f954) + (uint)(byte)this[0x117fe3] * 4);
    *(undefined4 *)(*(int *)(this + 0x117fe8) + 0x14) = 0;
    pthread_mutex_unlock(__mutex);
    uVar5 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x94))
                      (**(undefined4 **)(this + 100),*(undefined4 *)(this + 0x117fe8));
    if ((0x7fffffff < uVar5) && (*(int *)(iVar17 + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_0007fc04 + 0x7f996,0x273,DAT_0007fc00 + 0x7f98e);
    }
    this[0x117fe1] = (QCamera3HardwareInterface)0x0;
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 0x10))();
  }
  if (*ppiVar11 != (int *)0x0) {
    (**(code **)(**ppiVar11 + 0x10))();
  }
  piVar4 = *(int **)(this + 0x3fc);
  piVar12 = (int *)piVar4[2];
  if (piVar12 != piVar4) {
    do {
      if (*(int **)(*piVar12 + 0x18) != (int *)0x0) {
        (**(code **)(**(int **)(*piVar12 + 0x18) + 0x10))();
        piVar4 = *(int **)(this + 0x3fc);
      }
      piVar12 = (int *)piVar12[2];
    } while (piVar12 != piVar4);
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 0x10))();
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 0x10))();
  }
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 0x10))();
  }
  if ((*(int *)(this + 0xf4) != 0) &&
     ((**(code **)((*(undefined4 **)(this + 100))[1] + 0x68))(**(undefined4 **)(this + 100)),
     *(int *)(iVar17 + 0x2c) != 0)) {
    mm_camera_debug_log(1,4,DAT_0007fc0c + 0x7fa2c,0x295,DAT_0007fc08 + 0x7fa20,
                        *(undefined4 *)(this + 0xf4));
  }
  ppvVar13 = (void **)(*(void ***)(this + 0x3fc))[2];
  if (ppvVar13 != *(void ***)(this + 0x3fc)) {
    do {
      pvVar6 = *ppvVar13;
      piVar4 = *(int **)((int)pvVar6 + 0x18);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
        pvVar6 = *ppvVar13;
      }
      free(pvVar6);
      ppvVar13 = (void **)ppvVar13[2];
    } while (ppvVar13 != *(void ***)(this + 0x3fc));
  }
  if (*(int **)(this + 0x98) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x98) + 4))();
    *(undefined4 *)(this + 0x98) = 0;
  }
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))();
    *(undefined4 *)(this + 0x9c) = 0;
  }
  if (*(int **)(this + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa0) + 4))();
    *(undefined4 *)(this + 0xa0) = 0;
  }
  if (*(int **)(this + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa4) + 4))();
    *(undefined4 *)(this + 0xa4) = 0;
  }
  if (*ppiVar11 != (int *)0x0) {
    (**(code **)(**ppiVar11 + 4))();
    *ppiVar11 = (int *)0x0;
  }
  *(undefined4 *)(this + 0x90) = 0;
  if (*(int **)(this + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x8c) + 4))();
    *(undefined4 *)(this + 0x8c) = 0;
  }
  if (*(MotCameraFactory **)(this + 0x118028) != (MotCameraFactory *)0x0) {
    pvVar6 = (void *)MotCameraFactory::_MotCameraFactory(*(MotCameraFactory **)(this + 0x118028));
    operator_delete(pvVar6);
    *(undefined4 *)(this + 0x118028) = 0;
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    free(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(void **)(this + 0xc) != (void *)0x0) {
    free(*(void **)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (this[0x68] == (QCamera3HardwareInterface)0x0) goto LAB_0007fc86;
  if (*(int **)(this + 0x117fdc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x117fdc) + 4))();
  }
  if (this[0x1a8] == (QCamera3HardwareInterface)0x0) {
    __aeabi_memclr8(auStack400,0x168);
    local_e8 = 6;
    uVar5 = count_leading_zeroes((uint)(byte)this[0x1c5]);
    local_e4 = (uVar5 >> 5) << 3;
    pvVar6 = *(void **)(this + 0x1b4);
    if (pvVar6 == (void *)0x0) {
LAB_0007fc10:
      __android_log_print(6,DAT_0007ff4c + 0x7fc20,DAT_0007ff50 + 0x7fc22,0,0x72);
    }
    else {
      __aeabi_memclr8(pvVar6,0x10f);
      *(undefined *)((int)pvVar6 + 0x117aec) = 0;
      *(undefined *)((int)pvVar6 + 0x106974) = 0;
      *(undefined *)((int)pvVar6 + 0xe1f78) = 0;
      *(undefined *)((int)pvVar6 + 0xcfa74) = 0;
      *(undefined *)((int)pvVar6 + 0xcfa08) = 0;
      *(undefined *)((int)pvVar6 + 0xc36b0) = 0;
      *(undefined *)((int)pvVar6 + 0xb86e0) = 0;
      *(undefined *)((int)pvVar6 + 0xb7340) = 0;
      *(undefined *)((int)pvVar6 + 0xb72e8) = 0;
      *(undefined *)((int)pvVar6 + 0x772c8) = 0;
      if (*(int *)(this + 0x1b4) == 0) goto LAB_0007fc10;
      __aeabi_memcpy8("camera %d resource cost is %d" + *(int *)(this + 0x1b4) + 0x10,auStack400,
                      0x168);
      *(undefined *)(*(int *)(this + 0x1b4) + 0x72) = 1;
    }
    uVar5 = (**(code **)((*(undefined4 **)(this + 100))[1] + 0x18))
                      (**(undefined4 **)(this + 100),*(undefined4 *)(this + 0x1b4));
    if ((0x7fffffff < uVar5) && (*(int *)(iVar17 + 0x20) != 0)) {
      mm_camera_debug_log(1,1,DAT_0007ff58 + 0x7fc52,0x2ea,DAT_0007ff54 + 0x7fc4a);
    }
  }
  (**(code **)((*(undefined4 **)(this + 100))[1] + 0x14))(**(undefined4 **)(this + 100),1);
  QCamera3HeapMemory::deallocate(*(QCamera3HeapMemory **)(this + 0x1b0));
  if (*(int **)(this + 0x1b0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1b0) + 0x20))();
  }
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  free(*(void **)(this + 0x1b8));
  *(undefined4 *)(this + 0x1b8) = 0;
LAB_0007fc86:
  if (*(int *)(this + 0xf4) != 0) {
    (**(code **)((*(undefined4 **)(this + 100))[1] + 0x38))(**(undefined4 **)(this + 100));
    if (*(int *)(iVar17 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_0007ff60 + 0x7fcb6,0x2f3,DAT_0007ff5c + 0x7fcaa,
                          *(undefined4 *)(this + 0xf4));
    }
    *(undefined4 *)(this + 0xf4) = 0;
  }
  if (*(int *)(this + 0x117fd8) != 0) {
    closeCamera(this);
  }
  pvVar6 = *(void **)(this + 0x270);
  pvVar14 = *(void **)((int)pvVar6 + 0x1c);
  if (pvVar14 != pvVar6) {
    do {
      pvVar8 = *(void **)((int)pvVar14 + 0x14);
      pvVar9 = *(void **)((int)pvVar8 + 0x10);
      pvVar16 = pvVar8;
      if (*(void **)((int)pvVar8 + 0x10) != pvVar8) {
        do {
          pvVar16 = *(void **)((int)pvVar9 + 0x10);
          if (pvVar9 != (void *)0x0) {
            operator_delete(pvVar9);
            pvVar8 = *(void **)((int)pvVar14 + 0x14);
          }
          pvVar9 = pvVar16;
        } while (pvVar16 != pvVar8);
      }
      *(void **)((int)pvVar16 + 0xc) = pvVar16;
      *(int *)(*(int *)((int)pvVar14 + 0x14) + 0x10) = *(int *)((int)pvVar14 + 0x14);
      pvVar14 = *(void **)((int)pvVar14 + 0x1c);
    } while (pvVar14 != pvVar6);
    pvVar14 = *(void **)(this + 0x270);
    pvVar6 = *(void **)((int)pvVar14 + 0x1c);
    if (pvVar6 != pvVar14) {
      iVar3 = *(int *)(DAT_0007ff64 + 0x7fd12);
      pvVar9 = pvVar6;
      do {
        pvVar6 = *(void **)((int)pvVar9 + 0x1c);
        if (pvVar9 != (void *)0x0) {
          *(int *)((int)pvVar9 + 0x10) = iVar3 + 8;
          pvVar8 = *(void **)((int)pvVar9 + 0x14);
          pvVar14 = *(void **)((int)pvVar8 + 0x10);
          pvVar16 = pvVar8;
          if (*(void **)((int)pvVar8 + 0x10) != pvVar8) {
            do {
              pvVar16 = *(void **)((int)pvVar14 + 0x10);
              if (pvVar14 != (void *)0x0) {
                operator_delete(pvVar14);
                pvVar8 = *(void **)((int)pvVar9 + 0x14);
              }
              pvVar14 = pvVar16;
            } while (pvVar16 != pvVar8);
          }
          *(void **)((int)pvVar16 + 0xc) = pvVar16;
          *(int *)(*(int *)((int)pvVar9 + 0x14) + 0x10) = *(int *)((int)pvVar9 + 0x14);
          if (*(void **)((int)pvVar9 + 0x14) != (void *)0x0) {
            operator_delete__(*(void **)((int)pvVar9 + 0x14));
          }
          operator_delete(pvVar9);
          pvVar14 = *(void **)(this + 0x270);
        }
        pvVar9 = pvVar6;
      } while (pvVar6 != pvVar14);
    }
  }
  *(void **)((int)pvVar6 + 0x18) = pvVar6;
  *(int *)(*(int *)(this + 0x270) + 0x1c) = *(int *)(this + 0x270);
  pvVar9 = *(void **)(this + 0x1fc);
  pvVar6 = *(void **)((int)pvVar9 + 0x44);
  pvVar14 = pvVar9;
  if (*(void **)((int)pvVar9 + 0x44) != pvVar9) {
    do {
      pvVar14 = *(void **)((int)pvVar6 + 0x44);
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
        pvVar9 = *(void **)(this + 0x1fc);
      }
      pvVar6 = pvVar14;
    } while (pvVar14 != pvVar9);
  }
  *(void **)((int)pvVar14 + 0x40) = pvVar14;
  *(int *)(*(int *)(this + 0x1fc) + 0x44) = *(int *)(this + 0x1fc);
  iVar3 = *(int *)(*(int *)(this + 0x204) + 0x54);
  if (iVar3 != *(int *)(this + 0x204)) {
    do {
      if (*(void **)(iVar3 + 0x30) != (void *)0x0) {
        free(*(void **)(iVar3 + 0x30));
        *(undefined4 *)(iVar3 + 0x30) = 0;
      }
      if (*(int *)(iVar3 + 0x34) != 0) {
        free_camera_metadata();
      }
      iVar7 = *(int *)(iVar3 + 0x50);
      iVar15 = *(int *)(iVar3 + 0x54);
      *(int *)(iVar7 + 0x54) = iVar15;
      *(int *)(iVar15 + 0x50) = iVar7;
      pvVar6 = (void *)FUN_00098ffc(iVar3);
      operator_delete(pvVar6);
      iVar3 = iVar15;
    } while (iVar15 != *(int *)(this + 0x204));
  }
  if (*(int *)(this + 0x6c) != 0) {
    free_camera_metadata();
  }
  if (*(int *)(this + 0x70) != 0) {
    free_camera_metadata();
  }
  if (*(int *)(this + 0x74) != 0) {
    free_camera_metadata();
  }
  if (*(int *)(this + 0x78) != 0) {
    free_camera_metadata();
  }
  if (*(int *)(this + 0x7c) != 0) {
    free_camera_metadata();
  }
  if (*(int *)(this + 0x80) != 0) {
    free_camera_metadata();
  }
  if (*(int *)(this + 0x84) != 0) {
    free_camera_metadata();
  }
  QCameraPerfLock::lock_rel(this_01);
  QCameraPerfLock::lock_deinit(this_01);
  pthread_cond_destroy((pthread_cond_t *)(this + 0x274));
  pthread_cond_destroy((pthread_cond_t *)(this + 0x3f4));
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x3f0));
  if (*(void **)(this + 0x11801c) != (void *)0x0) {
    free(*(void **)(this + 0x11801c));
  }
  if ((*(int *)(this + 0x60) == 0) && (iVar3 = BSTBokehParam::getStereoMode(this_00), iVar3 != 0)) {
    if (*(int *)(iVar17 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0008009c + 0x7fe5c,0x314,DAT_00080098 + 0x7fe54);
    }
    piVar4 = (int *)BSTLiveBokeh::createInstance();
    (**(code **)(*piVar4 + 0xc))();
    BSTLiveBokeh::destory();
  }
  BSTBokehParam::uninit(this_00);
  if (*(int *)(iVar17 + 0x2c) != 0) {
    mm_camera_debug_log(1,4,DAT_000800a4 + 0x7fe8c,0x31c,DAT_000800a0 + 0x7fe84);
  }
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
            ((CameraMetadata *)(this + 0x117fc4));
  QCamera3CropRegionMapper::_QCamera3CropRegionMapper((QCamera3CropRegionMapper *)(this + 0x117f88))
  ;
  *(int *)(this + 0x3f8) = *(int *)(DAT_000800a8 + 0x7feb0) + 8;
  pvVar9 = *(void **)(this + 0x3fc);
  pvVar6 = *(void **)((int)pvVar9 + 8);
  pvVar14 = pvVar9;
  if (*(void **)((int)pvVar9 + 8) != pvVar9) {
    do {
      pvVar14 = *(void **)((int)pvVar6 + 8);
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
        pvVar9 = *(void **)(this + 0x3fc);
      }
      pvVar6 = pvVar14;
    } while (pvVar14 != pvVar9);
  }
  *(void **)((int)pvVar14 + 4) = pvVar14;
  *(int *)(*(int *)(this + 0x3fc) + 8) = *(int *)(this + 0x3fc);
  if (*(void **)(this + 0x3fc) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x3fc));
  }
  *(int *)(this + 0x26c) = *(int *)(DAT_000800ac + 0x7feee) + 8;
  pvVar14 = *(void **)(this + 0x270);
  pvVar6 = pvVar14;
  if (*(void **)((int)pvVar14 + 0x1c) != pvVar14) {
    iVar17 = *(int *)(DAT_000800b0 + 0x7ff04);
    pvVar9 = *(void **)((int)pvVar14 + 0x1c);
    do {
      pvVar6 = *(void **)((int)pvVar9 + 0x1c);
      if (pvVar9 != (void *)0x0) {
        *(int *)((int)pvVar9 + 0x10) = iVar17 + 8;
        pvVar8 = *(void **)((int)pvVar9 + 0x14);
        pvVar14 = *(void **)((int)pvVar8 + 0x10);
        pvVar16 = pvVar8;
        if (*(void **)((int)pvVar8 + 0x10) != pvVar8) {
          do {
            pvVar16 = *(void **)((int)pvVar14 + 0x10);
            if (pvVar14 != (void *)0x0) {
              operator_delete(pvVar14);
              pvVar8 = *(void **)((int)pvVar9 + 0x14);
            }
            pvVar14 = pvVar16;
          } while (pvVar16 != pvVar8);
        }
        *(void **)((int)pvVar16 + 0xc) = pvVar16;
        *(int *)(*(int *)((int)pvVar9 + 0x14) + 0x10) = *(int *)((int)pvVar9 + 0x14);
        if (*(void **)((int)pvVar9 + 0x14) != (void *)0x0) {
          operator_delete__(*(void **)((int)pvVar9 + 0x14));
        }
        operator_delete(pvVar9);
        pvVar14 = *(void **)(this + 0x270);
      }
      pvVar9 = pvVar6;
    } while (pvVar6 != pvVar14);
  }
  *(void **)((int)pvVar6 + 0x18) = pvVar6;
  *(int *)(*(int *)(this + 0x270) + 0x1c) = *(int *)(this + 0x270);
  if (*(void **)(this + 0x270) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x270));
  }
  *(int *)(this + 0x210) = *(int *)(DAT_000800b4 + 0x7ff86) + 8;
  android::VectorImpl::finish_vector();
  android::SortedVectorImpl::_SortedVectorImpl((SortedVectorImpl *)(this + 0x210));
  *(int *)(this + 0x208) = *(int *)(DAT_000800b8 + 0x7ff9e) + 8;
  pvVar9 = *(void **)(this + 0x20c);
  pvVar6 = *(void **)((int)pvVar9 + 0xc);
  pvVar14 = pvVar9;
  if (*(void **)((int)pvVar9 + 0xc) != pvVar9) {
    do {
      pvVar14 = *(void **)((int)pvVar6 + 0xc);
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
        pvVar9 = *(void **)(this + 0x20c);
      }
      pvVar6 = pvVar14;
    } while (pvVar14 != pvVar9);
  }
  *(void **)((int)pvVar14 + 8) = pvVar14;
  *(int *)(*(int *)(this + 0x20c) + 0xc) = *(int *)(this + 0x20c);
  if (*(void **)(this + 0x20c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20c));
  }
  *(int *)(this + 0x200) = *(int *)(DAT_000800bc + 0x7ffdc) + 8;
  iVar7 = *(int *)(this + 0x204);
  iVar17 = *(int *)(iVar7 + 0x54);
  iVar3 = iVar7;
  if (*(int *)(iVar7 + 0x54) != iVar7) {
    do {
      iVar3 = *(int *)(iVar17 + 0x54);
      if (iVar17 != 0) {
        pvVar6 = (void *)FUN_00098ffc(iVar17);
        operator_delete(pvVar6);
        iVar7 = *(int *)(this + 0x204);
      }
      iVar17 = iVar3;
    } while (iVar3 != iVar7);
  }
  *(int *)(iVar3 + 0x50) = iVar3;
  *(int *)(*(int *)(this + 0x204) + 0x54) = *(int *)(this + 0x204);
  if (*(void **)(this + 0x204) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x204));
  }
  *(int *)(this + 0x1f8) = *(int *)(DAT_000800c0 + 0x8001e) + 8;
  pvVar9 = *(void **)(this + 0x1fc);
  pvVar6 = *(void **)((int)pvVar9 + 0x44);
  pvVar14 = pvVar9;
  if (*(void **)((int)pvVar9 + 0x44) != pvVar9) {
    do {
      pvVar14 = *(void **)((int)pvVar6 + 0x44);
      if (pvVar6 != (void *)0x0) {
        operator_delete(pvVar6);
        pvVar9 = *(void **)(this + 0x1fc);
      }
      pvVar6 = pvVar14;
    } while (pvVar14 != pvVar9);
  }
  *(void **)((int)pvVar14 + 0x40) = pvVar14;
  *(int *)(*(int *)(this + 0x1fc) + 0x44) = *(int *)(this + 0x1fc);
  if (*(void **)(this + 0x1fc) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1fc));
  }
  pthread_mutex_destroy((pthread_mutex_t *)(this + 500));
  std::__1::
  __tree<std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::__map_value_compare<unsigned_int,std::__1::__value_type<unsigned_int,unsigned_int>,std::__1::less<unsigned_int>,true>,std::__1::allocator<std::__1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree_std____1____value_type_unsigned_int_unsigned_int__std____1____map_value_compare_unsigned_int_std____1____value_type_unsigned_int_unsigned_int__std____1__less_unsigned_int__true__std____1__allocator_std____1____value_type_unsigned_int_unsigned_int___
             *)(this + 0x1e4),*(__tree_node **)(this + 0x1e8));
  android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
            ((CameraMetadata *)(this + 0x1bc));
  QCameraCommon::_QCameraCommon((QCameraCommon *)(this + 0xf0));
  QCameraPerfLock::_QCameraPerfLock(this_01);
  if (*piVar2 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


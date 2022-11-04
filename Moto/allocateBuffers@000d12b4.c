
/* qcamera::QCameraStream::allocateBuffers() */

int __thiscall qcamera::QCameraStream::allocateBuffers(QCameraStream *this)

{
  QCameraStream QVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  int *this_00;
  int iVar5;
  uint uVar6;
  int *piVar7;
  cam_frame_len_offset_t *__dest;
  QCameraStream local_25;
  int local_24;
  
  __dest = (cam_frame_len_offset_t *)(this + 0x120);
  piVar7 = *(int **)(DAT_000d1604 + 0xd12ca);
  local_24 = *piVar7;
  iVar5 = *(int *)(this + 0x70);
  __aeabi_memcpy8(__dest,(void *)(iVar5 + 0x14),0x188);
  if (*(int *)(iVar5 + 0x1a0) == 2) {
    iVar5 = allocateBatchBufs(this,__dest,(uchar *)(this + 0x8c),(uchar **)(this + 0x90),
                              (mm_camera_buf_def **)(this + 0x118),
                              (mm_camera_map_unmap_ops_tbl_t *)0x0);
    if (*piVar7 == local_24) {
      return iVar5;
    }
    goto LAB_000d15fe;
  }
  QVar1 = this[0x8c];
  this[0x8e] = (QCameraStream)0x0;
  local_25 = QVar1;
  if (this[0x2e2] != (QCameraStream)0x0) {
    local_25 = (QCameraStream)0x5;
    if ((byte)QVar1 < 5) {
      this[0x2e2] = (QCameraStream)0x0;
      local_25 = QVar1;
    }
    else {
      this[0x8e] = (QCameraStream)((char)QVar1 - 5);
    }
  }
  puVar2 = (undefined4 *)
           (**(code **)**(undefined4 **)(this + 0x114))
                     (*(undefined4 **)(this + 0x114),*(undefined4 *)(iVar5 + 4),
                      *(undefined4 *)(this + 0x2a4),*(undefined4 *)(this + 0x134),
                      *(undefined4 *)(this + 0x13c),&local_25);
  *(undefined4 **)(this + 0x10c) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    if (*(int *)(*(int *)(DAT_000d1608 + 0xd1480) + 0x20) == 0) {
      iVar5 = -0xc;
    }
    else {
      mm_camera_debug_log(1,1,DAT_000d1610 + 0xd149a,0x629,DAT_000d160c + 0xd1492);
      iVar5 = -0xc;
    }
  }
  else {
    this[0x8c] = (QCameraStream)((char)this[0x8e] + (char)local_25);
    iVar3 = (**(code **)*puVar2)();
    QVar1 = this[0x8c];
    pvVar4 = malloc((uint)(byte)QVar1);
    *(void **)(this + 0x90) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      if (*(int *)(*(int *)(DAT_000d1614 + 0xd14a8) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000d161c + 0xd14c0,0x634,DAT_000d1618 + 0xd14b8);
      }
      if (iVar3 != 0) {
        iVar5 = 0;
        do {
          (**(code **)(*(int *)(this + 0x6c) + 0x58))
                    (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                     *(undefined4 *)(this + 0x68),3,iVar5,0xffffffff);
          iVar5 = iVar5 + 1;
        } while (iVar3 != iVar5);
      }
      (**(code **)(**(int **)(this + 0x10c) + 0xc))();
      if (*(int **)(this + 0x10c) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x10c) + 0x2c))();
      }
      iVar5 = -0xc;
      *(undefined4 *)(this + 0x10c) = 0;
    }
    else {
      __aeabi_memclr8(pvVar4,(uint)(byte)QVar1);
      QVar1 = this[0x8c];
      pvVar4 = malloc((uint)(byte)QVar1 * 0x218);
      *(void **)(this + 0x118) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        if (*(int *)(*(int *)(DAT_000d1620 + 0xd150c) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d1628 + 0xd1528,0x642,DAT_000d1624 + 0xd151c,0);
        }
        if (iVar3 != 0) {
          iVar5 = 0;
          do {
            (**(code **)(*(int *)(this + 0x6c) + 0x58))
                      (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                       *(undefined4 *)(this + 0x68),3,iVar5,0xffffffff);
            iVar5 = iVar5 + 1;
          } while (iVar3 != iVar5);
        }
        (**(code **)(**(int **)(this + 0x10c) + 0xc))();
        if (*(int **)(this + 0x10c) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x10c) + 0x2c))();
        }
        *(undefined4 *)(this + 0x10c) = 0;
      }
      else {
        __aeabi_memclr8(pvVar4,(uint)(byte)QVar1 * 0x218);
        this_00 = *(int **)(this + 0x10c);
        if (iVar3 != 0) {
          iVar5 = 0;
          uVar6 = 0;
          do {
            QCameraMemory::getBufDef
                      ((QCameraMemory *)this_00,__dest,
                       (mm_camera_buf_def *)(*(int *)(this + 0x118) + iVar5),uVar6);
            this_00 = *(int **)(this + 0x10c);
            iVar5 = iVar5 + 0x218;
            uVar6 = uVar6 + 1;
          } while (iVar3 * 0x218 - iVar5 != 0);
        }
        iVar5 = (**(code **)(*this_00 + 0x18))(this_00,*(undefined4 *)(this + 0x90));
        if (-1 < iVar5) {
          if (this[0x8e] != (QCameraStream)0x0) {
            pthread_mutex_lock((pthread_mutex_t *)(this + 0x10064));
            this[0x10061] = (QCameraStream)0x1;
            pthread_mutex_unlock((pthread_mutex_t *)(this + 0x10064));
            if (*(int *)(*(int *)(DAT_000d1638 + 0xd1430) + 0x28) != 0) {
              mm_camera_debug_log(1,3,DAT_000d1640 + 0xd144e,0x667,DAT_000d163c + 0xd1442,this[0x8e]
                                 );
            }
            this[0x10085] = (QCameraStream)0x0;
            pthread_create((pthread_t *)(this + 0x2e4),(pthread_attr_t *)0x0,
                           *(__start_routine **)(DAT_000d1644 + 0xd1464),this);
            pthread_setname_np(*(pthread_t *)(this + 0x2e4),(char *)(DAT_000d1648 + 0xd1476));
          }
          goto LAB_000d15ec;
        }
        if (*(int *)(*(int *)(DAT_000d162c + 0xd1576) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000d1634 + 0xd1590,0x654,DAT_000d1630 + 0xd1586,iVar5);
        }
        if (iVar3 != 0) {
          iVar5 = 0;
          do {
            (**(code **)(*(int *)(this + 0x6c) + 0x58))
                      (*(undefined4 *)(this + 0x60),*(undefined4 *)(this + 100),
                       *(undefined4 *)(this + 0x68),3,iVar5,0xffffffff);
            iVar5 = iVar5 + 1;
          } while (iVar3 != iVar5);
        }
        (**(code **)(**(int **)(this + 0x10c) + 0xc))();
        if (*(int **)(this + 0x10c) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x10c) + 0x2c))();
        }
        *(undefined4 *)(this + 0x10c) = 0;
        free(*(void **)(this + 0x118));
        *(undefined4 *)(this + 0x118) = 0;
      }
      free(*(void **)(this + 0x90));
      *(undefined4 *)(this + 0x90) = 0;
      iVar5 = -0x26;
    }
  }
LAB_000d15ec:
  if (*piVar7 == local_24) {
    return iVar5;
  }
LAB_000d15fe:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


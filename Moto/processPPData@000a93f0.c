
/* qcamera::QCamera3PostProcessor::processPPData(mm_camera_super_buf_t*, metadata_buffer_t const*)
    */

undefined4 __thiscall
qcamera::QCamera3PostProcessor::processPPData
          (QCamera3PostProcessor *this,mm_camera_super_buf_t *param_1,metadata_buffer_t *param_2)

{
  char cVar1;
  undefined8 *__ptr;
  void *pvVar2;
  undefined8 *puVar3;
  void *__dest;
  QCameraQueue *this_00;
  QCamera3ReprocessChannel *this_01;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  __ptr = (undefined8 *)QCameraQueue::dequeue((QCameraQueue *)(this + 0x4e8),true);
  if (1 < **(uint **)(DAT_000a96b4 + 0xa940e)) {
    if ((**(byte **)(DAT_000a96b8 + 0xa941a) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_000a96bc + 0xa942a) + 1) << 0x1d) < 0) {
      atrace_int_body(DAT_000a96c0 + 0xa9680,0);
    }
  }
  if ((__ptr == (undefined8 *)0x0) ||
     ((*(int *)((int)__ptr + 4) == 0 && (*(int *)(__ptr + 1) == 0)))) {
    if (*(int *)(*(int *)(DAT_000a96c4 + 0xa968e) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar5 = 0x326;
    iVar6 = DAT_000a96c8 + 0xa969e;
    iVar4 = DAT_000a96cc + 0xa96a6;
LAB_000a96a4:
    mm_camera_debug_log(1,1,iVar4,uVar5,iVar6);
    return 0xffffffea;
  }
  if (*(int *)(__ptr + 2) == 0) {
    if (*(int *)(*(int *)(DAT_000a96d0 + 0xa94f6) + 0x20) == 0) {
      return 0xffffffea;
    }
    uVar5 = 0x32a;
    iVar6 = DAT_000a96d4 + 0xa950a;
    iVar4 = DAT_000a96d8 + 0xa9512;
    goto LAB_000a96a4;
  }
  iVar6 = *(int *)(DAT_000a96dc + 0xa9450);
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000a96e4 + 0xa947c,0x32f,DAT_000a96e0 + 0xa9468,
                        (int)*(char *)((int)__ptr + 0x1c),(int)(char)this[0x470],
                        *(undefined4 *)(__ptr + 4));
  }
  if ((int)(char)this[0x470] <= *(char *)((int)__ptr + 0x1c) + 1) {
    puVar3 = (undefined8 *)malloc(0x2c);
    if (puVar3 == (undefined8 *)0x0) {
      if (*(int *)(iVar6 + 0x20) == 0) {
        return 0xfffffff4;
      }
      mm_camera_debug_log(1,1,DAT_000a9704 + 0xa95a8,0x34c,DAT_000a9700 + 0xa95a0);
      return 0xfffffff4;
    }
    *(undefined8 *)((int)puVar3 + 0x1c) = 0;
    *(undefined8 *)((int)puVar3 + 0x24) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(mm_camera_super_buf_t **)(puVar3 + 1) = param_1;
    if (*(mm_camera_super_buf_t **)((int)__ptr + 4) != param_1) {
      *(mm_camera_super_buf_t **)((int)puVar3 + 0xc) = *(mm_camera_super_buf_t **)((int)__ptr + 4);
    }
    if (*(int *)(__ptr + 1) == 0) {
      __dest = *(void **)((int)__ptr + 0xc);
      iVar4 = 0x1c;
      pvVar2 = __dest;
    }
    else {
      __dest = *(void **)(*(int *)(__ptr + 1) + 0x21c);
      iVar4 = 0x14;
      *(void **)((int)puVar3 + 0x1c) = __dest;
      pvVar2 = *(void **)(__ptr + 1);
    }
    *(void **)((int)puVar3 + iVar4) = pvVar2;
    if (param_2 != (metadata_buffer_t *)0x0) {
      __aeabi_memcpy8(__dest,param_2,(size_t)&PTR_bufDone_00117af8);
    }
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)((int)__ptr + 0x14);
    *(undefined4 *)((int)puVar3 + 0x24) = *(undefined4 *)(__ptr + 2);
    if (*(int *)(__ptr + 3) != 0) {
      if (*(int *)(iVar6 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_000a970c + 0xa95f8,0x363,DAT_000a9708 + 0xa95f0);
      }
      if (0 < (char)this[0x470]) {
        iVar4 = 0;
        do {
          this_01 = *(QCamera3ReprocessChannel **)(this + iVar4 * 4 + 0x474);
          if ((this_01 != (QCamera3ReprocessChannel *)0x0) &&
             (*(int *)(this_01 + 0x54) == *(int *)(*(mm_camera_super_buf_t **)(__ptr + 3) + 4))) {
            iVar4 = QCamera3ReprocessChannel::bufDone
                              (this_01,*(mm_camera_super_buf_t **)(__ptr + 3));
            if ((iVar4 != 0) && (*(int *)(iVar6 + 0x20) != 0)) {
              mm_camera_debug_log(1,1,DAT_000a9714 + 0xa9648,0x369,DAT_000a9710 + 0xa963c,iVar4);
            }
            break;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (char)this[0x470]);
      }
      free(*(void **)(__ptr + 3));
    }
    free(__ptr);
    this_00 = (QCameraQueue *)(this + 0x50c);
    goto LAB_000a965c;
  }
  cVar1 = *(char *)((int)__ptr + 0x1c) + '\x01';
  *(char *)((int)__ptr + 0x1c) = cVar1;
  if (*(int *)(iVar6 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000a96ec + 0xa94b0,0x332,DAT_000a96e8 + 0xa94a4,(int)cVar1);
  }
  if (*(int *)(__ptr + 1) == 0) {
    if (*(int *)((int)__ptr + 4) != 0) {
      pvVar2 = *(void **)(iVar6 + 0x2c);
      if (pvVar2 != (void *)0x0) {
        pvVar2 = (void *)mm_camera_debug_log(1,4,DAT_000a96fc + 0xa9572,0x33b,DAT_000a96f8 + 0xa956a
                                            );
      }
      if (param_2 != (metadata_buffer_t *)0x0) {
        pvVar2 = *(void **)((int)__ptr + 0xc);
      }
      if (param_2 != (metadata_buffer_t *)0x0 && pvVar2 != (void *)0x0) goto LAB_000a94e0;
    }
  }
  else {
    if (*(int *)(iVar6 + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_000a96f4 + 0xa94d2,0x335,DAT_000a96f0 + 0xa94ca);
    }
    if (param_2 != (metadata_buffer_t *)0x0) {
      pvVar2 = *(void **)(*(int *)(__ptr + 1) + 0x21c);
LAB_000a94e0:
      __aeabi_memcpy8(pvVar2,param_2,(size_t)&PTR_bufDone_00117af8);
    }
  }
  *(mm_camera_super_buf_t **)(__ptr + 3) = param_1;
  this_00 = (QCameraQueue *)(this + 0x4c4);
  puVar3 = __ptr;
LAB_000a965c:
  QCameraQueue::enqueue(this_00,puVar3);
  QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x5c0),3,'\0','\0');
  return 0;
}


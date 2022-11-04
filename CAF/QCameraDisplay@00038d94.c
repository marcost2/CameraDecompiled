
/* qcamera::QCameraDisplay::QCameraDisplay() */

QCameraDisplay * __thiscall qcamera::QCameraDisplay::QCameraDisplay(QCameraDisplay *this)

{
  int *piVar1;
  int iVar2;
  sp_android__frameworks__displayservice__V1_0__IDisplayService_ *this_00;
  uint uVar3;
  int *in_r1;
  undefined8 uVar4;
  char acStack132 [92];
  int local_28;
  
  piVar1 = *(int **)(DAT_00038f34 + 0x38da4);
  local_28 = *piVar1;
  android::frameworks::displayservice::V1_0::IEventCallback::IEventCallback((IEventCallback *)this);
  iVar2 = *in_r1;
  *(int *)this = iVar2;
  *(int *)(this + *(int *)(iVar2 + -0xc)) = in_r1[5];
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x82) = 0;
  *(undefined8 *)(this + 0x8a) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>::__tree_end_node
            ((__tree_end_node_std____1____tree_node_base_void____ *)(this + 0x94));
  this_00 = (sp_android__frameworks__displayservice__V1_0__IDisplayService_ *)
            std::__1::__tree_end_node<std::__1::__tree_node_base<void*>*>::__tree_end_node
                      ((__tree_end_node_std____1____tree_node_base_void____ *)(this + 0x98));
  android::sp<android::frameworks::displayservice::V1_0::IDisplayService>::operator_
            (this_00,(IDisplayService *)0x0);
  android::sp<android::frameworks::displayservice::V1_0::IDisplayEventReceiver>::operator_
            ((sp_android__frameworks__displayservice__V1_0__IDisplayEventReceiver_ *)
             (__tree_end_node_std____1____tree_node_base_void____ *)(this + 0x94),
             (IDisplayEventReceiver *)0x0);
  property_get();
  iVar2 = atoi(acStack132);
  *(int *)(this + 0x70) = iVar2;
  property_get();
  iVar2 = atoi(acStack132);
  *(int *)(this + 0x78) = (int)((longlong)iVar2 * 1000000);
  *(int *)(this + 0x7c) = (int)((ulonglong)((longlong)iVar2 * 1000000) >> 0x20);
  property_get();
  iVar2 = atoi(acStack132);
  *(int *)(this + 0x84) = (int)((ulonglong)((longlong)iVar2 * 1000000) >> 0x20);
  *(int *)(this + 0x80) = (int)((longlong)iVar2 * 1000000);
  property_get();
  iVar2 = atoi(acStack132);
  *(int *)(this + 0x88) = (int)((longlong)iVar2 * 1000000);
  *(int *)(this + 0x8c) = (int)((ulonglong)((longlong)iVar2 * 1000000) >> 0x20);
  property_get();
  uVar3 = atoi(acStack132);
  if ((int)uVar3 < 1) {
    uVar4 = 0xfe502a;
  }
  else {
    uVar4 = __aeabi_ldivmod(1000000000,0,uVar3,(int)uVar3 >> 0x1f);
  }
  iVar2 = 0x20;
  do {
    *(int *)(this + iVar2) = (int)uVar4;
    *(int *)(this + iVar2 + 4) = (int)((ulonglong)uVar4 >> 0x20);
    iVar2 = iVar2 + 8;
  } while (iVar2 != 0x60);
  iVar2 = *(int *)(DAT_00038f58 + 0x38ed2);
  if (*(int *)(iVar2 + 0x48) != 0) {
    mm_camera_debug_log();
    if (*(int *)(iVar2 + 0x48) != 0) {
      mm_camera_debug_log();
    }
  }
  if (*piVar1 == local_28) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


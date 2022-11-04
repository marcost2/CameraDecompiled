
/* qcamera::QCameraParameters::allocate() */

undefined4 __thiscall qcamera::QCameraParameters::allocate(QCameraParameters *this)

{
  QCameraHeapMemory *this_00;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(this + 0x1dc) == 0) {
    this_00 = (QCameraHeapMemory *)operator_new(0x718);
    piVar1 = (int *)QCameraHeapMemory::QCameraHeapMemory(this_00,true);
    *(int **)(this + 0x1dc) = piVar1;
    uVar3 = 0;
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1,1,&PTR_bufDone_00117af8,0);
    if (iVar2 != 0) {
      if (*(int *)(*(int *)(DAT_000f0698 + 0xf0660) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000f06a0 + 0xf0678,0x1b44,DAT_000f069c + 0xf0670);
      }
      if (*(int **)(this + 0x1dc) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x1dc) + 0x2c))();
      }
      uVar3 = 0xfffffff4;
      *(undefined4 *)(this + 0x1dc) = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


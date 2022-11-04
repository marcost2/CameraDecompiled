
/* qcamera::BokehSyncNode::releaseNodeData(void*, void*) */

void qcamera::BokehSyncNode::releaseNodeData(void *param_1,void *param_2)

{
  (**(code **)(**(int **)((int)param_1 + 0xc) + 0xc))
            (*(int **)((int)param_1 + 0xc),
             *(undefined *)(*(int *)(*(int *)((int)param_1 + 8) + 0x10) + 0xc));
  if (*(int *)(*(int *)(DAT_00101f88 + 0x101f58) + 0x2c) != 0) {
                    /* WARNING: Load size is inaccurate */
    mm_camera_debug_log(1,4,DAT_00101f8c + 0x101f6a,0x33,DAT_00101f94 + 0x101f6e,
                        DAT_00101f90 + 0x101f6c,DAT_00101f8c + 0x101f6a,*param_1,
                        *(undefined4 *)((int)param_1 + 4),param_2);
  }
  return;
}


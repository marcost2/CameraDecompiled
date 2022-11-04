
/* atrace_is_tag_enabled(unsigned long long) */

undefined8 atrace_is_tag_enabled(ulonglong param_1)

{
  uint in_r0;
  uint in_r1;
  undefined8 uVar1;
  
  uVar1 = atrace_get_enabled_tags();
  return CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & in_r1,(uint)uVar1 & in_r0);
}


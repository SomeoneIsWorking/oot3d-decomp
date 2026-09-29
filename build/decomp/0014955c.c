// OoT3D decomp @ 0014955c  name=FUN_0014955c  size=124

undefined4 FUN_0014955c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  if ((int)(uint)*(ushort *)
                  (DAT_001495ec +
                   ((int)(*(uint *)(DAT_001495e0 + 0xb8) & *(uint *)(DAT_001495e4 + 0x14)) >>
                   *(sbyte *)(DAT_001495e8 + 5)) * 2 + 0x28) <=
      (int)*(char *)(param_2 + DAT_001495e0 + 0xa6)) {
    return 1;
  }
  if (**(short **)(param_1 + 0x208) <= *(short *)(DAT_001495e0 + 0x48)) {
    iVar1 = FUN_00377a50(0x58);
    if (iVar1 == 0xff) {
      uVar2 = 2;
    }
    else {
      uVar2 = 4;
    }
    return uVar2;
  }
  return 0;
}

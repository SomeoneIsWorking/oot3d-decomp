// OoT3D decomp @ 00379e7c  name=FUN_00379e7c  size=164

void FUN_00379e7c(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [48];

  FUN_00372224(auStack_40,param_1 + 0x148);
  uVar3 = DAT_00379f20;
  iVar1 = FUN_003695f8();
  if (iVar1 != 0) {
    uVar3 = DAT_00379f24;
  }
  fVar2 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x1ab),(byte)(in_fpscr >> 0x15) & 3);
  FUN_003695cc(DAT_00379f34,DAT_00379f30,DAT_00379f2c,fVar2 * DAT_00379f28,
               *(undefined4 *)(param_1 + 0x208),0,4);
  if (*(int *)(param_1 + 0x208) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x208) + 0xc) + 0xc) = uVar3;
    *(undefined1 *)(*(int *)(param_1 + 0x208) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x208),auStack_40);
    FUN_00372170(*(undefined4 *)(param_1 + 0x208),0);
  }
  return;
}

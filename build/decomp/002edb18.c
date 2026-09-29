// OoT3D decomp @ 002edb18  name=FUN_002edb18  size=196

void FUN_002edb18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 local_24;
  undefined4 uStack_20;

  iVar3 = DAT_002edbe4;
  uVar2 = DAT_002edbe0;
  iVar1 = DAT_002edbdc;
  iVar4 = 0;
  uStack_20 = 0;
  do {
    if (iVar4 - 0x94U < 7) {
      local_24 = VectorSignedToFloat(*(int *)(iVar1 + 0x14) * param_1 * 100,
                                     (byte)(in_fpscr >> 0x15) & 3);
      if (0x97 < iVar4) {
        local_24 = uVar2;
      }
      FUN_002f9430(*(undefined4 *)(iVar3 + 0x30),&local_24,1,iVar4);
    }
    if (iVar4 - 0x9bU < 7) {
      local_24 = VectorSignedToFloat(*(int *)(iVar1 + 0x14) * param_1 * 100,
                                     (byte)(in_fpscr >> 0x15) & 3);
      if (0x9e < iVar4) {
        local_24 = uVar2;
      }
      FUN_002f9430(*(undefined4 *)(iVar3 + 0x30),&local_24,1,iVar4);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xb8);
  return;
}

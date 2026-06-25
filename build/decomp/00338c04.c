// OoT3D decomp @ 00338c04  name=FUN_00338c04  size=80

void FUN_00338c04(int param_1)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  iVar1 = *DAT_00338c54;
  uVar2 = VectorSignedToFloat((int)*(short *)(iVar1 + 0x1ca),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  uVar2 = VectorSignedToFloat((int)*(short *)(iVar1 + 0x1ca),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  uVar2 = VectorSignedToFloat((int)*(short *)(iVar1 + 0x1ca),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x10c) = uVar2;
  uVar2 = DAT_00338c58;
  *(undefined4 *)(param_1 + 0x114) = DAT_00338c58;
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  return;
}


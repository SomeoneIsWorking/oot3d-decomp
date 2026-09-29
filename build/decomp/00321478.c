// OoT3D decomp @ 00321478  name=FUN_00321478  size=280

void FUN_00321478(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint unaff_r6;
  uint in_fpscr;

  iVar2 = FUN_0037571c(param_2);
  puVar3 = (ushort *)0x0;
  if (iVar2 != 0) {
    puVar3 = *(ushort **)(param_2 + 0x22ec);
  }
  iVar6 = 0;
  if (iVar2 == 0) {
    puVar3 = (ushort *)0x0;
  }
  uVar4 = 0;
  if (puVar3 != (ushort *)0x0) {
    unaff_r6 = (uint)*puVar3;
    uVar4 = *(uint *)(param_1 + 0x410);
  }
  if (puVar3 == (ushort *)0x0 || unaff_r6 == uVar4) {
    return;
  }
  if (unaff_r6 == 7) {
    iVar2 = FUN_0037571c(param_2);
    if (iVar2 != 0) {
      iVar6 = *(int *)(param_2 + 0x22ec);
    }
    if (iVar6 != 0) {
      uVar5 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x28) = uVar5;
      uVar5 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x2c) = uVar5;
      uVar5 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x30) = uVar5;
      uVar1 = *(undefined2 *)(iVar6 + 8);
      *(undefined2 *)(param_1 + 0xbe) = uVar1;
      *(undefined2 *)(param_1 + 0x36) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x3fc) = 0xc;
    *(undefined4 *)(param_1 + 0x400) = 2;
  }
  else {
    if (unaff_r6 == 8) {
      FUN_0031ecbc(DAT_00321594,param_1,0x1b,2,0);
      uVar5 = 0xe;
    }
    else {
      if (unaff_r6 != 9) goto LAB_003214f4;
      FUN_0031ecbc(DAT_00321590,param_1,0x1c,2,0);
      uVar5 = 0xf;
    }
    *(undefined4 *)(param_1 + 0x3fc) = uVar5;
  }
LAB_003214f4:
  *(uint *)(param_1 + 0x410) = unaff_r6;
  return;
}

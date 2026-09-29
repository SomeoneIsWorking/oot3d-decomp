// OoT3D decomp @ 003302a0  name=FUN_003302a0  size=200

void FUN_003302a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;

  iVar1 = *(int *)(param_1 + 0x20ac);
  uVar3 = *(uint *)(*(int *)(DAT_00330368 + param_1) + 0x1710);
  if (((*(ushort *)(iVar1 + 0x90) & 1) == 0 && (uVar3 & 0x8a00000) == 0) &&
     (((uVar3 & 0xc0000) != 0 ||
      (DAT_0033036c <= (int)(*(float *)(iVar1 + 0x2c) - *(float *)(iVar1 + 0x84)))))) {
    if ((uVar3 & 0x2c0000) != 0) goto LAB_00330314;
    uVar3 = uVar3 | 0x80000;
  }
  else {
    uVar3 = uVar3 & 0xbff07fff;
  }
  *(uint *)(*(int *)(DAT_00330368 + param_1) + 0x1710) = uVar3;
LAB_00330314:
  *(uint *)(iVar1 + 0x1714) = *(uint *)(iVar1 + 0x1714) & 0xffffdfff;
  *(undefined4 *)(iVar1 + 0x16f8) = param_2;
  *(undefined4 *)(iVar1 + 0x1718) = param_2;
  *(uint *)(iVar1 + 0x1710) = *(uint *)(iVar1 + 0x1710) | 0x10000;
  uVar2 = FUN_0036c5bc(param_1,0);
  FUN_003521f0(uVar2,8,param_2);
  uVar2 = FUN_0036c5bc(param_1,0);
  FUN_00332284(uVar2,2);
  return;
}

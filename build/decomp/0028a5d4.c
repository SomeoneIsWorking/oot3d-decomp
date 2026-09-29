// OoT3D decomp @ 0028a5d4  name=FUN_0028a5d4  size=236

void FUN_0028a5d4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x1d4,1,0);
  uVar3 = FUN_00353fd4(param_1,param_2,1);
  uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  iVar1 = DAT_0028a6c0;
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x30);
  if ((((*(ushort *)(iVar1 + 0x1e) & 0x40) != 0) || ((*(ushort *)(DAT_0028a6c4 + 0xf4) & 0x20) != 0)
      ) && (*(short *)(param_2 + 0x104) == 0x52)) {
    *(undefined4 *)(param_1 + 0x28) = DAT_0028a6c8;
    *(undefined4 *)(param_1 + 0x30) = DAT_0028a6cc;
  }
  uVar2 = DAT_0028a6d4;
  uVar3 = DAT_0028a6d0;
  *(undefined4 *)(param_1 + 0x54) = DAT_0028a6d0;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  return;
}

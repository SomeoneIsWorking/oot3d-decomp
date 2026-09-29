// OoT3D decomp @ 0027aed4  name=FUN_0027aed4  size=192

void FUN_0027aed4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  FUN_003532e8(param_1,0);
  FUN_00372f38(param_1,param_2,param_1 + 0x1d8,1,0);
  uVar2 = FUN_00353fd4(param_1,param_2,1);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  iVar1 = DAT_0027af98;
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_1 + 0x30);
  uVar2 = DAT_0027af94;
  *(undefined4 *)(param_1 + 0x54) = DAT_0027af94;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  uVar2 = DAT_0027afa0;
  if ((*(ushort *)(iVar1 + 0x1e) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x30) = DAT_0027af9c;
  }
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  return;
}

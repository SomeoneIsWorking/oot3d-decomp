// OoT3D decomp @ 0023f940  name=FUN_0023f940  size=312

void FUN_0023f940(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar2 = 0;
  FUN_003532e8(param_1,0);
  if (*(short *)(param_1 + 0x1c) == 0) {
    uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x1e0,0,0,uVar2);
    uVar2 = FUN_00372f0c(uVar2,0);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1e0) + 0xc),uVar2);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1e0) + 0xc) + 0x10) = 1;
    uVar2 = FUN_00353fd4(param_1,param_2,0);
  }
  else {
    uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x1e0,1,0,uVar2);
    uVar2 = FUN_00372f0c(uVar2,1);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1e0) + 0xc),uVar2);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1e0) + 0xc) + 0x10) = 1;
    uVar2 = FUN_00353fd4(param_1,param_2,1);
  }
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  uVar2 = DAT_0023fa78;
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x30);
  uVar1 = DAT_0023fa7c;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  return;
}

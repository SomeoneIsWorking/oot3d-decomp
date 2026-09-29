// OoT3D decomp @ 001d2484  name=FUN_001d2484  size=232

void FUN_001d2484(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  *(undefined2 *)(param_1 + 0x1a4) = 0;
  uVar1 = DAT_001d2570;
  *(undefined4 *)(param_1 + 0x1a8) = DAT_001d256c;
  FUN_0037572c(uVar1,param_1);
  uVar1 = DAT_001d2574;
  *(undefined4 *)(param_1 + 0x2c) = DAT_001d2574;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x1ac,0x5e,param_1 + 0x1b0,0x5f,0);
  uVar3 = FUN_00372f0c(uVar2,0x2f);
  *(undefined4 *)(param_1 + 0x1b4) = uVar3;
  uVar2 = FUN_00372f0c(uVar2,0x30);
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1ac) + 0xc),*(undefined4 *)(param_1 + 0x1b4));
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0xc),*(undefined4 *)(param_1 + 0x1b8));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1ac) + 0xc) + 0xc) = uVar1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1b0) + 0xc) + 0xc) = uVar1;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1ac) + 0xc) + 0x10) = 1;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1b0) + 0xc) + 0x10) = 1;
  return;
}

// OoT3D decomp @ 002dac68  name=FUN_002dac68  size=368

bool FUN_002dac68(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,int *param_8)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;

  FUN_002e667c();
  *(int **)(param_1 + 4) = param_8;
  if (*(char *)(param_1 + 8) == '\0') {
    iVar3 = (**(code **)(*param_8 + 8))(param_8,0x1000);
    if (iVar3 == 0) {
      iVar3 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      FUN_0032b184(iVar3,0x1000);
    }
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0xf0) = iVar3;
  uVar1 = FUN_002da940(param_1,param_4 << 3);
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  uVar1 = FUN_002da940(param_1,param_4 * 0x30);
  *(undefined4 *)(param_1 + 0x3cc) = uVar1;
  uVar1 = FUN_002da940(param_1,param_4 << 5);
  *(undefined4 *)(param_1 + 0x3d0) = uVar1;
  uVar1 = FUN_002da940(param_1,param_4 << 6);
  *(undefined4 *)(param_1 + 0x3d4) = uVar1;
  uVar1 = FUN_002da940(param_1,param_4 * 0xc + -4);
  *(undefined4 *)(param_1 + 0x3d8) = uVar1;
  uVar2 = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 9) = 1;
  iVar3 = 1 - uVar2;
  if (1 < uVar2) {
    iVar3 = 0;
  }
  if (iVar3 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x3e0);
    uVar4 = *(undefined4 *)(param_1 + 0x3e4);
    *(undefined4 *)(param_1 + 0x3e0) = 0;
    *(undefined4 *)(param_1 + 0x3e4) = 0;
    if (*(int *)(param_1 + 0x3dc) != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    }
    *(undefined4 *)(param_1 + 0x3dc) = 0;
    FUN_002da7e8(param_1,*(undefined1 *)(param_1 + 0x19),uVar1,uVar4);
  }
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    *(int *)(param_1 + 0x14) = param_3;
  }
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_002da7e8(param_1,param_5,param_6,param_7);
  bVar5 = *(char *)(param_1 + 8) == '\0';
  if (bVar5) {
    *(int *)(param_1 + 0xc) = param_4;
  }
  else {
    FUN_002e667c(param_1);
  }
  return bVar5;
}

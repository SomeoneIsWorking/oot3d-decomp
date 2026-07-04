// OoT3D decomp @ 004490d8  name=FUN_004490d8  size=328

undefined4 FUN_004490d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x5c02) =
       *(undefined1 *)(UNK_00449228 + (*UNK_00449220 + *(int *)(UNK_00449224 + 0x4e8)) * 4 + 1);
  *(undefined4 *)(param_1 + 0x5c0c) = 0;
  *(undefined4 *)(param_1 + 0x5c14) = 0;
  *(undefined4 *)(param_1 + 0x5c18) = 0;
  *(undefined4 *)(param_1 + 0x5c1c) = 0;
  *(undefined4 *)(param_1 + 0x5c24) = 0;
  *(undefined4 *)(param_1 + 0x5c20) = 0;
  *(undefined1 *)(param_1 + 0x5c03) = 0;
  FUN_00451990(param_1,param_1 + 0x3a58);
  FUN_0044fa44(param_1,param_1 + 0xa70);
  FUN_0044e028(param_1,param_1 + 0x5b88);
  FUN_0044e034(param_1);
  *(undefined2 *)(*UNK_0044922c + 0x4b2) = 0;
  *(undefined2 *)(UNK_00449230 + 0xae) = 0;
  FUN_002e4de4(*(undefined4 *)(param_1 + 0x110),param_1,*(undefined4 *)(param_1 + 0x110));
  iVar2 = FUN_0035010c(0x14);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00453488();
  }
  uVar1 = UNK_00449234;
  *(undefined4 *)(param_1 + 0x5fc0) = uVar3;
  FUN_00453440(uVar3,param_1,uVar1,0x32);
  iVar2 = FUN_0035010c(0x144);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_004534bc();
  }
  *(undefined4 *)(param_1 + 0x5fc4) = uVar3;
  FUN_004534a4(uVar3,*(undefined4 *)(param_1 + 0x5fc0));
  FUN_00452060(param_1);
  FUN_002e47c8(param_1,param_1 + 0x261c,*(undefined1 *)(param_1 + 0x5c2c));
  FUN_0044ff18(param_1,param_1 + 0x3190,0);
  FUN_0044f36c(param_1,param_1 + 0x4c30);
  return 2;
}


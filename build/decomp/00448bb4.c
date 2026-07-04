// OoT3D decomp @ 00448bb4  name=FUN_00448bb4  size=168

undefined4 FUN_00448bb4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  FUN_0044f7b0(uRam00448c5c,param_1);
  *puRam00448c60 = 0;
  *(undefined2 *)(param_1 + 0x43dc) = 0;
  *(undefined2 *)(param_1 + 0x43de) = 0;
  *(undefined1 *)(param_1 + 0x5407) = 0;
  *(undefined1 *)(param_1 + 0x5405) = 0;
  func_0x00452368(param_1);
  *(undefined1 *)(iRam00448c64 + param_1) = 1;
  iVar3 = *(uint *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc);
  uVar2 = (*(uint *)(param_1 + 0xe0) & 0xfffffff0) - iVar3 & 0xfffffff0;
  *(uint *)(param_1 + 0xe0) = uVar2;
  func_0x0044ff04(uVar2,iVar3);
  iVar3 = FUN_0035010c(0x48);
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar1 = func_0x00453390();
  }
  *(undefined4 *)(param_1 + 0x5fc8) = uVar1;
  FUN_0044e7a0(param_1,param_1 + 0x208c,*(undefined4 *)(param_1 + 0x5c0c));
  return 3;
}


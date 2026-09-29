// OoT3D decomp @ 002f41f8  name=FUN_002f41f8  size=340

undefined4 FUN_002f41f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [204];

  FUN_0030748c();
  FUN_00456344(param_1 + 0x44);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 4);
  uVar2 = FUN_00303ea8(*(undefined4 *)(param_1 + 0x10));
  iVar3 = FUN_0045621c(param_1 + 0x1c,uVar2,uVar1);
  if (iVar3 != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
    uVar2 = FUN_00303ea8(*(undefined4 *)(param_1 + 0x14));
    iVar3 = FUN_002df620(param_1 + 0x2c,uVar2,uVar1);
    if (iVar3 != 0) {
      local_e8 = *DAT_002f434c;
      iStack_e4 = DAT_002f434c[1];
      uStack_e0 = DAT_002f434c[2];
      if (*(char *)((int)&local_e8 + *(int *)(param_1 + 0xf3c)) == '\0') {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
        uVar2 = FUN_00303ea8(*(undefined4 *)(param_1 + 0x18));
        iVar3 = FUN_002df620(param_1 + 0x38,uVar2,uVar1);
        if (iVar3 == 0) goto LAB_002f42b8;
      }
      FUN_00344410(auStack_dc,*(undefined4 *)(param_1 + 0xf3c));
      FUN_002dadd8(param_1 + 0x9dc,auStack_dc,*(undefined4 *)(param_1 + 0xf3c),param_1 + 4);
      iStack_e4 = param_1 + 4;
      local_e8 = 0x100;
      iVar3 = 0;
      if (*(int *)(param_1 + 0x3c) != 0) {
        iVar3 = param_1 + 0x38;
      }
      FUN_002dac68(param_1 + 0xac4,param_1 + 0x2c,iVar3,0x1c0,2,0x100);
      FUN_00456280(param_1 + 0xeac,param_1);
      *(undefined4 *)(param_1 + 8) = param_2;
      *(undefined1 *)(param_1 + 0xc) = 1;
      return 1;
    }
  }
LAB_002f42b8:
  FUN_0030748c(param_1);
  return 0;
}

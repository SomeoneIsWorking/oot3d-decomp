// OoT3D decomp @ 002bc168  name=FUN_002bc168  size=504

undefined4 FUN_002bc168(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  if (*(char *)(param_2 + 0x12ac) == 0) {
    return 1;
  }
  if (*(char *)(DAT_002bc360 + param_2) == '\0') {
    iVar1 = DAT_002bc364 + *(char *)(param_2 + 0x12ac) * 6;
    *(undefined *)(DAT_002bc360 + param_2) = 1;
    FUN_00367c7c(param_1,*(undefined *)(iVar1 + -2),param_2);
    FUN_00376a78(param_1,*(undefined *)(iVar1 + -6));
    iVar1 = (int)*(char *)(param_2 + 0x12ac);
    uVar3 = iVar1 - 0x4c;
    bVar6 = 1 < uVar3;
    bVar5 = uVar3 == 2;
    if (2 < uVar3) {
      bVar6 = iVar1 != 0x55;
      bVar5 = iVar1 == 0x56;
    }
    if (bVar6 && !bVar5) {
      bVar6 = 2 < iVar1 - 0x72U;
      bVar5 = iVar1 - 0x72U == 3;
    }
    if ((!bVar6 || bVar5) || (iVar1 == 0x48)) {
      FUN_0037547c(DAT_002bc370,0,4,DAT_002bc36c,DAT_002bc36c,DAT_002bc368);
    }
    else {
      uVar2 = DAT_002bc380;
      if (((iVar1 != 0x4f && iVar1 != 0x3d) && (uVar2 = DAT_002bc374, iVar1 == 0x3e)) &&
         (uVar2 = DAT_002bc380, (*(uint *)(DAT_002bc378 + 0xbc) & 0xf0000000) != 0x40000000)) {
        uVar2 = DAT_002bc37c;
      }
      FUN_0035c528(uVar2);
    }
  }
  else {
    iVar1 = FUN_003769d8(param_1 + 0x28a0);
    if (iVar1 == 2) {
      if (*(char *)(param_2 + 0x12ac) == '5') {
        FUN_003716f0(param_1,0x123,0x14);
        *(undefined2 *)(DAT_002bc384 + 0xa0) = 0xfff1;
        *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) & 0xdfffffff;
        iVar4 = *(int *)(DAT_002bc388 + param_1);
        iVar1 = FUN_0035db20(param_1,iVar4);
        if (iVar1 == 0) {
          FUN_0036b0fc(param_1,iVar4);
          FUN_0036b02c(param_1,iVar4);
          FUN_0036055c(param_1,iVar4,DAT_002bc38c,0);
          *(undefined *)(iVar4 + 0x12bc) = 8;
          uVar2 = DAT_002bc390;
          *(undefined4 *)(iVar4 + 0x12c0) = 0;
          *(undefined4 *)(iVar4 + 0x6c) = uVar2;
          *(undefined4 *)(iVar4 + 0x221c) = uVar2;
          *(undefined *)(iVar4 + 0x1749) = 0;
          iVar1 = DAT_002bc398;
          *(undefined4 *)(DAT_002bc398 + 0xcc) = DAT_002bc394;
          *(undefined *)(iVar1 + 0xd4) = 0;
        }
      }
      *(undefined *)(param_2 + 0x12ac) = 0;
    }
  }
  return 0;
}


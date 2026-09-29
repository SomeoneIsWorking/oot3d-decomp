// OoT3D decomp @ 00479cd8  name=FUN_00479cd8  size=384

void FUN_00479cd8(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;

  iVar2 = DAT_00479e58;
  if (((*(char *)(DAT_00479e58 + 0x5a2) == '\0') || (*(char *)(param_2 + 8) != '\0')) ||
     (iVar3 = FUN_0036a7a0(param_1), iVar3 != 0)) {
    if (*(int *)(iVar2 + -0xff8) < DAT_00479e60) {
      return;
    }
  }
  else {
    *(undefined4 *)(iVar2 + -0xff8) = DAT_00479e5c;
  }
  if ((*(char *)(param_2 + 8) == '\0') &&
     (iVar3 = FUN_004849ac(param_1,param_1 + 0x208c), iVar3 != 0)) {
    FUN_003667b0(param_1,0);
    iVar3 = DAT_00479e64;
    iVar6 = 0;
    iVar4 = 0;
    *(undefined2 *)(DAT_00479e64 + 2) = 0;
    *(undefined2 *)(iVar3 + 4) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0;
    do {
      iVar7 = iVar6 + 1;
      *(undefined4 *)(param_2 + iVar6 * 4 + 0x44) = 0;
      iVar4 = iVar4 + 2;
      iVar6 = iVar6 + 2;
      *(undefined4 *)(param_2 + iVar7 * 4 + 0x44) = 0;
    } while (iVar4 < 0x10);
    *(char *)(param_1 + 0x22a0) = *(char *)(param_1 + 0x22a0) + '\x01';
    if (*(char *)(param_2 + 8) == '\x01') {
      FUN_0033d13c(1);
      uVar1 = (undefined2)DAT_00479e68;
      *(undefined2 *)(param_2 + 0x20) = uVar1;
      *(undefined2 *)(param_2 + 0x28) = uVar1;
      *(undefined2 *)(param_2 + 0x2a) = uVar1;
      *(undefined2 *)(param_2 + 0x2c) = uVar1;
      *(undefined2 *)(param_2 + 0x2e) = uVar1;
      iVar4 = DAT_00479e6c;
      *(undefined1 *)(param_2 + 0x34) = 0;
      *(undefined1 *)(param_2 + 0x35) = 0;
      *(undefined2 *)(iVar3 + 8) = *(undefined2 *)(iVar4 + param_1);
      if (*(char *)(iVar3 + 1) != '\0') {
        uVar5 = FUN_00367d74(param_1);
        *(undefined4 *)(param_2 + 0x24) = uVar5;
      }
      if (*(char *)(iVar2 + 0x5a2) == '\0') {
        FUN_0034be04(1);
        FUN_00338cd8(0);
        FUN_002cf674(0);
        *(char *)(param_1 + 0x22a0) = *(char *)(param_1 + 0x22a0) + '\x01';
      }
      FUN_00321f50(param_1,param_2);
    }
    *(undefined1 *)(iVar2 + 0x5a2) = 0;
  }
  return;
}

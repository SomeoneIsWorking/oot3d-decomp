// OoT3D decomp @ 0034b590  name=FUN_0034b590  size=420

void FUN_0034b590(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  ushort uVar4;
  undefined4 uVar5;
  bool bVar6;
  short local_1c [2];
  ushort local_18 [2];

  if (*(int *)(param_1 + 0xaa4) != 2) {
    iVar3 = FUN_0036bc98(param_1,param_2);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0xaa4) = 2;
      return;
    }
    FUN_00363a20(param_2,param_1,local_18,local_1c);
    if (0x140 < local_18[0]) {
      return;
    }
    if (local_1c[0] < 0) {
      return;
    }
    bVar6 = local_1c[0] == 0xf0;
    if (local_1c[0] < 0xf1) {
      bVar6 = *(int *)(param_1 + 0xaa4) == 0;
    }
    if (!bVar6) {
      return;
    }
    iVar3 = FUN_0036bb28(DAT_0034b738,param_1,param_2);
    if (iVar3 != 1) {
      return;
    }
    sVar1 = FUN_0036bba8(param_2,*(undefined4 *)
                                  (DAT_0034b73c + (*(ushort *)(param_1 + 0x1c) & 3) * 4));
    *(short *)(param_1 + 0x116) = sVar1;
    if (sVar1 != 0) {
      return;
    }
    uVar4 = *(ushort *)(param_1 + 0x1c) & 3;
    if ((*(ushort *)(param_1 + 0x1c) & 3) == 0) {
      if ((*(ushort *)(param_1 + 0xac4) & 8) == 0) {
        uVar2 = (undefined2)DAT_0034b748;
      }
      else {
        uVar2 = (undefined2)DAT_0034b74c;
      }
    }
    else if (uVar4 == 1) {
      if ((*(ushort *)(param_1 + 0xac4) & 1) == 0) {
        uVar2 = (undefined2)DAT_0034b750;
      }
      else {
        uVar2 = (undefined2)DAT_0034b754;
      }
    }
    else if (uVar4 == 2) {
      if ((*(ushort *)(param_1 + 0xac4) & 1) == 0) {
        uVar2 = (undefined2)DAT_0034b758;
      }
      else {
        uVar2 = (undefined2)DAT_0034b75c;
      }
    }
    else {
      if (uVar4 != 3) {
        return;
      }
      if ((*(ushort *)(param_1 + 0xac4) & 1) == 0) {
        uVar2 = (undefined2)DAT_0034b740;
      }
      else {
        uVar2 = (undefined2)DAT_0034b744;
      }
    }
    *(undefined2 *)(param_1 + 0x116) = uVar2;
    return;
  }
  uVar5 = 2;
  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar3 != 6) || (iVar3 = FUN_00346964(param_2), iVar3 == 0)) goto LAB_0034b60c;
  if (*(short *)(param_1 + 0x116) == 0x6061) {
    uVar4 = *(ushort *)(DAT_0034b734 + 0x3e) | 0x40;
LAB_0034b604:
    *(ushort *)(DAT_0034b734 + 0x3e) = uVar4;
  }
  else if (*(short *)(param_1 + 0x116) == 0x6064) {
    uVar4 = *(ushort *)(DAT_0034b734 + 0x3e) | 0x100;
    goto LAB_0034b604;
  }
  uVar5 = 0;
LAB_0034b60c:
  *(undefined4 *)(param_1 + 0xaa4) = uVar5;
  return;
}

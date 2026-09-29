// OoT3D decomp @ 0041570c  name=FUN_0041570c  size=300

void FUN_0041570c(undefined4 param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar2 = param_2 - DAT_0041583c;
  piVar1 = *(int **)(*DAT_00415838 + 0xc);
  if (param_2 != DAT_0041583c) {
    if (param_2 < DAT_0041583c) {
      if (param_2 == DAT_00415840) {
        piVar1 = (int *)piVar1[4];
      }
      if (param_2 == DAT_00415840) goto LAB_00415820;
      if (param_2 < DAT_00415840) {
        if (param_2 == 0x6792) {
          piVar1 = (int *)*piVar1;
        }
        else {
          if (param_2 != 0x8d42) {
            return;
          }
          piVar1 = (int *)piVar1[3];
        }
        goto LAB_00415820;
      }
      if (param_2 - DAT_00415840 == 1) {
        piVar1 = (int *)piVar1[5];
        goto LAB_00415820;
      }
      if (param_2 - DAT_00415840 != 0xd) {
        return;
      }
    }
    else if (iVar2 != 1 && iVar2 != 2) {
      if (iVar2 != 3 && iVar2 != 4) {
        return;
      }
      iVar2 = piVar1[5];
      bVar4 = iVar2 == 0x81a5 || iVar2 == 0x81a6;
      if (iVar2 != 0x81a5 && iVar2 != 0x81a6) {
        bVar4 = iVar2 == 0x88f0;
      }
      if (bVar4) {
        piVar1 = (int *)piVar1[param_2 + -0x8d4b];
        goto LAB_00415820;
      }
      goto LAB_0041582c;
    }
  }
  iVar2 = piVar1[5];
  bVar4 = iVar2 == 0x8058 || iVar2 == 0x8057;
  if (iVar2 != 0x8058 && iVar2 != 0x8057) {
    bVar4 = iVar2 == 0x8d62;
  }
  if (!bVar4) {
    bVar4 = iVar2 == 0x8056;
  }
  if (!bVar4) {
    iVar3 = 0;
    if (iVar2 != 0x1908) {
      iVar3 = iVar2 + -0x1900;
    }
    if (iVar2 != 0x1908 && iVar3 != 7) {
LAB_0041582c:
      *param_3 = 0;
      return;
    }
  }
  piVar1 = (int *)piVar1[param_2 + -0x8d47];
LAB_00415820:
  *param_3 = (int)piVar1;
  return;
}

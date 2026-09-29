// OoT3D decomp @ 00344930  name=FUN_00344930  size=260

void FUN_00344930(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;

  *(int *)(param_1 + 0x108) = param_2;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x104) == 4) {
LAB_003449f0:
      *(undefined4 *)(param_1 + 0x110) = 5;
      *(undefined4 *)(param_1 + 0x114) = 1;
      return;
    }
  }
  else if (param_2 == 1) {
    if (*(int *)(param_1 + 0x104) == 2) goto LAB_003449f0;
  }
  else {
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x114) = 5;
      if (*DAT_003ff948 == 0) {
        return;
      }
      FUN_0030eea8(*DAT_003ff948,1,5);
      return;
    }
    if (param_2 == 3) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x114) = 5;
      uVar2 = 3;
      if ((*DAT_00344a14 & 1) == 0) {
        uVar3 = FUN_003679b4(DAT_00344a14);
        uVar2 = (int)((ulonglong)uVar3 >> 0x20);
        if ((int)uVar3 != 0) {
          FUN_0036788c(DAT_00344a18);
          uVar2 = DAT_00344a20;
        }
      }
      iVar1 = FUN_0033f40c(DAT_00344a24,uVar2);
      if (iVar1 == 0) {
        return;
      }
      FUN_003655d0(0,5);
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x110) = 5;
  *(undefined4 *)(param_1 + 0x114) = 5;
  return;
}

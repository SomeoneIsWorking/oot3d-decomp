// OoT3D decomp @ 00408e24  name=FUN_00408e24  size=104

void FUN_00408e24(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;

  puVar1 = *(undefined4 **)(*param_1 + 8);
  uVar3 = param_2 - 0x404;
  bVar4 = uVar3 == 0;
  if (bVar4) {
    uVar3 = (uint)*DAT_00408e8c;
  }
  if (!bVar4 || uVar3 != 0x900) {
    param_2 = param_2 + -0x405;
    bVar4 = param_2 == 0;
    if (bVar4) {
      param_2 = *DAT_00408e8c - 0x900;
    }
    if (!bVar4 || param_2 != 1) {
      uVar2 = 1;
      goto LAB_00408e70;
    }
  }
  uVar2 = 2;
LAB_00408e70:
  *puVar1 = uVar2;
  puVar1[1] = DAT_00408e90;
  *(undefined4 **)(*param_1 + 8) = puVar1 + 2;
  return;
}

// OoT3D decomp @ 00124124  name=FUN_00124124  size=268

void FUN_00124124(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_00124234;
  uVar1 = DAT_00124230;
  if (*(short *)(param_1 + 0x7e2) != 0) {
    *(short *)(param_1 + 0x7e2) = *(short *)(param_1 + 0x7e2) + -1;
  }
  iVar3 = FUN_003736fc(uVar2,uVar1,param_1 + 0x1a4);
  if ((iVar3 != 0) || (iVar3 = FUN_003736fc(DAT_00124238,uVar1,param_1 + 0x1a4), iVar3 != 0)) {
    FUN_00375bcc(param_1,DAT_0012423c);
  }
  if (*(short *)(param_1 + 0x7e2) == 0) {
    if (*(int *)(param_1 + 0x7d8) != DAT_00124240) {
      FUN_003660fc(DAT_00124244,param_1 + 0x1a4,7);
    }
    uVar1 = DAT_0012424c;
    *(undefined4 *)(param_1 + 0x6c) = DAT_00124248;
    *(undefined4 *)(param_1 + 0x7d8) = uVar1;
  }
  else {
    if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
      *(undefined2 *)(param_1 + 0x7de) = *(undefined2 *)(param_1 + 0x82);
      FUN_00363d50(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x98) < DAT_00124250) {
      FUN_00370378(param_1 + 0xbe,(int)(short)(*(short *)(param_1 + 0x92) + -0x8000),DAT_00124254);
      return;
    }
  }
  return;
}

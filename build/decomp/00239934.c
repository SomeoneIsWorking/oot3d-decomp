// OoT3D decomp @ 00239934  name=FUN_00239934  size=364

void FUN_00239934(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  int iVar11;
  float fVar12;

  iVar2 = DAT_00239aac;
  uVar7 = 0;
  iVar11 = *(int *)(param_1 + 0x98);
  iVar8 = *(int *)(DAT_00239aa0 + param_2);
  fVar10 = ABS(*(float *)(param_1 + 0x9c));
  bVar9 = SBORROW4(iVar11,DAT_00239aa4);
  iVar6 = iVar11 - DAT_00239aa4;
  if (iVar11 < DAT_00239aa4) {
    bVar9 = SBORROW4((int)fVar10,DAT_00239aa8);
    iVar6 = (int)fVar10 - DAT_00239aa8;
  }
  if (iVar6 < 0 == bVar9) {
    if (*(char *)(param_1 + 0x1a7) != '\0') {
      *(undefined2 *)(param_2 + 0x5c30) = 0;
      *(undefined1 *)(param_1 + 0x1a7) = 0;
    }
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((int)fVar10 < DAT_00239aac) {
    uVar7 = 0xff;
  }
  else if ((int)fVar10 <= DAT_00239ab0) {
    fVar12 = (float)VectorSignedToFloat((int)(short)(int)(DAT_00239ab4 - fVar10),
                                        (byte)(in_fpscr >> 0x15) & 3);
    uVar7 = (undefined2)(int)(fVar12 * DAT_00239ab8);
  }
  *(undefined2 *)(param_2 + 0x5c30) = uVar7;
  uVar5 = DAT_00239ac8;
  uVar4 = DAT_00239ac4;
  uVar3 = DAT_00239ac0;
  if ((int)fVar10 < iVar2) {
    *(undefined1 *)(param_1 + 3) =
         *(undefined1 *)(*(int *)(DAT_00239abc + param_2) + (uint)(uVar1 >> 10) * 0x10 + 2);
    FUN_0036e168(*(undefined4 *)(param_1 + 0x28),uVar5,uVar4,uVar3,iVar8 + 0x28);
    FUN_0036e168(*(undefined4 *)(param_1 + 0x30),uVar5,uVar4,uVar3,iVar8 + 0x30);
    if ((*(char *)(param_1 + 3) != *(char *)(DAT_00239acc + param_2)) &&
       (iVar6 = FUN_0033b6bc(param_2,param_2 + 0x4c30), iVar6 != 0)) {
      FUN_0033b608();
      uVar3 = DAT_00239ad4;
      *(undefined4 *)(param_1 + 0x1a8) = DAT_00239ad0;
      *(undefined1 *)(param_1 + 0x1a7) = 1;
      *(undefined4 *)(iVar8 + 0x6c) = uVar3;
    }
  }
  return;
}

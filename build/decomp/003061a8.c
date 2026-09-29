// OoT3D decomp @ 003061a8  name=FUN_003061a8  size=184

void FUN_003061a8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 ,uint param_6,uint param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;

  uVar7 = FUN_002eed7c(param_2,param_3,param_4);
  uVar4 = (ulonglong)DAT_00306260;
  uVar14 = (uint)(uVar4 * uVar7);
  iVar1 = ((int)uVar7 >> 0x1f) * DAT_00306260;
  uVar5 = (ulonglong)DAT_00306264;
  uVar13 = (uint)(uVar5 * param_5);
  iVar2 = ((int)param_5 >> 0x1f) * DAT_00306264;
  uVar6 = (ulonglong)DAT_00306268;
  uVar12 = (uint)(uVar6 * param_6);
  iVar3 = ((int)param_6 >> 0x1f) * DAT_00306268;
  uVar11 = (uint)((ulonglong)param_7 * 1000);
  uVar8 = param_8 + uVar11;
  uVar9 = uVar8 + uVar12;
  uVar10 = uVar9 + uVar13;
  *param_1 = uVar10 + uVar14;
  param_1[1] = (short)((int)param_7 >> 0x1f) * 1000 + (int)((ulonglong)param_7 * 1000 >> 0x20) +
               ((int)param_8 >> 0x1f) + (uint)CARRY4(param_8,uVar11) +
               iVar3 + (int)(uVar6 * param_6 >> 0x20) + (uint)CARRY4(uVar8,uVar12) +
               iVar2 + (int)(uVar5 * param_5 >> 0x20) + (uint)CARRY4(uVar9,uVar13) +
               iVar1 + (int)(uVar4 * uVar7 >> 0x20) + (uint)CARRY4(uVar10,uVar14);
  return;
}

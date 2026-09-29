// OoT3D decomp @ 0042c964  name=FUN_0042c964  size=440

/* WARNING: Type propagation algorithm not settling */

void FUN_0042c964(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_38 [4];
  int local_34 [6];

  software_interrupt(0x28);
  local_34[1] = 0;
  local_34[0] = *DAT_0042cb1c;
  *(int *)((int)local_34 + *(int *)(local_34[0] + -0x30)) = DAT_0042cb1c[3];
  local_34[4] = 0;
  local_34[5] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  uVar7 = FUN_0030d580(local_34 + 1,param_1 + 5,6);
  *param_1 = (uint)uVar7;
  if (-1 < (int)(uint)uVar7) {
    uVar4 = FUN_00435e60(local_34 + 1,(int)((ulonglong)uVar7 >> 0x20),param_1[1],
                         (int)param_1[1] >> 0x1f);
    *param_1 = uVar4;
    if (-1 < (int)uVar4) {
      uVar4 = FUN_00435eb4(local_34 + 1,auStack_38,param_1[4],param_1[1],1);
      *param_1 = uVar4;
    }
    if ((local_34[1] & 0xfffffffeU) != 0) {
      FUN_0030d614(local_34[1] & 0xfffffffe);
      local_34[1] = 0;
    }
    if (-1 < (int)*param_1) {
      uVar4 = FUN_002fbfa8(s_data__0042cb20);
      *param_1 = uVar4;
    }
  }
  uVar4 = DAT_0042cb28;
  uVar5 = *param_1;
  uVar8 = CONCAT44(uVar5,uVar5) & 0x80000000ffffffff;
  if (((int)uVar5 < 0) && (uVar8 = (ulonglong)uVar5, (int)uVar5 < 0)) {
    uVar8 = FUN_003351b4();
  }
  software_interrupt(0x28);
  uVar5 = (int)(uint *)uVar8 - (int)param_1;
  uVar6 = (int)(uVar8 >> 0x20) - (param_2 + (uint)((uint *)uVar8 < param_1));
  lVar3 = (ulonglong)uVar5 * 3 +
          CONCAT44(((int)uVar6 >> 0x1f) * DAT_0042cb2c +
                   (int)((ulonglong)DAT_0042cb2c * (ulonglong)uVar6 >> 0x20),
                   (int)((ulonglong)DAT_0042cb2c * (ulonglong)uVar6)) +
          CONCAT44(uVar6 * 3,(int)((ulonglong)DAT_0042cb2c * (ulonglong)uVar5 >> 0x20));
  uVar7 = FUN_00332754((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),uVar4,0);
  uVar5 = 1000 - (uint)uVar7;
  iVar1 = (int)((ulonglong)uVar7 >> 0x20) + (uint)(1000 < (uint)uVar7);
  iVar2 = -iVar1;
  if ((int)-(iVar2 + (uint)(uVar5 != 0)) < 0 !=
      (SBORROW4(0,iVar2) != SBORROW4(iVar1,(uint)(uVar5 != 0)))) {
    FUN_0030e604((int)((ulonglong)uVar5 * (ulonglong)uVar4),
                 uVar4 * iVar2 + (int)((ulonglong)uVar5 * (ulonglong)uVar4 >> 0x20),-uVar5);
  }
  if ((local_34[1] & 0xfffffffeU) != 0) {
    FUN_0030d614(local_34[1] & 0xfffffffe);
  }
  return;
}

// OoT3D decomp @ 00303ebc  name=FUN_00303ebc  size=480

void FUN_00303ebc(int *param_1,int param_2,char *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint unaff_r5;
  uint unaff_r8;

  if ((param_2 == 0) || (*param_3 != '\x01')) {
    uVar2 = (uint)param_1 & 0xffffff00;
    bVar1 = false;
  }
  else {
    uVar2 = FUN_00307a48(*(undefined2 *)(param_3 + 4));
    iVar3 = FUN_003079d0(*(undefined2 *)(param_3 + 6));
    bVar1 = true;
    uVar2 = (uVar2 & 0xff) << 0x10 | iVar3 << 0x18;
    uVar4 = FUN_00307a48(*(undefined2 *)(param_3 + 0xc));
    uVar5 = FUN_003079d0(*(undefined2 *)(param_3 + 0xe));
    uVar6 = FUN_00307964(*(undefined2 *)(param_3 + 8));
    iVar3 = FUN_00307964(*(undefined2 *)(param_3 + 0x10));
    unaff_r5 = uVar4 & 0xff | (uVar5 & 0xff) << 8 | (uVar6 & 0xff) << 0x10 | iVar3 << 0x18;
    uVar4 = VectorFloatToUnsigned(*(float *)(param_3 + 0x14) * DAT_0030409c,3);
    uVar5 = VectorFloatToUnsigned(*(float *)(param_3 + 0x18) * DAT_0030409c,3);
    uVar6 = VectorFloatToUnsigned(*(float *)(param_3 + 0x1c) * DAT_0030409c,3);
    iVar3 = VectorFloatToUnsigned(*(float *)(param_3 + 0x20) * DAT_0030409c,3);
    unaff_r8 = uVar4 & 0xff | (uVar5 & 0xff) << 8 | (uVar6 & 0xff) << 0x10 | iVar3 << 0x18;
  }
  uVar4 = DAT_003040a4;
  iVar3 = DAT_003040a0;
  piVar7 = *(int **)(*param_1 + 8);
  piVar7[1] = DAT_003040a0 + -0xe20000;
  uVar5 = uVar4 | (int)uVar4 >> 0x12;
  *piVar7 = iVar3;
  if (bVar1) {
    piVar7[3] = uVar4;
    piVar7[2] = ((unaff_r5 << 0x10) >> 0x18) << 0x1c | unaff_r5 << 0x18 | (uVar2 >> 0x18) << 0x14 |
                ((uVar2 << 8) >> 0x18) << 0x10 | (unaff_r5 >> 0x18) << 8 | (unaff_r5 << 8) >> 0x18;
    piVar7[4] = unaff_r8;
    piVar7[5] = uVar5;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    piVar7[2] = DAT_003040a8;
    piVar7[3] = uVar4;
    piVar7[4] = 0;
    piVar7[5] = uVar5;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(int **)(*param_1 + 8) = piVar7 + 6;
  return;
}

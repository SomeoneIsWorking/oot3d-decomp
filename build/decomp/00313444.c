// OoT3D decomp @ 00313444  name=FUN_00313444  size=324

void FUN_00313444(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;

  iVar1 = DAT_00313588;
  uVar5 = param_1[9] + param_5;
  if (param_4 == 0x1403) {
    uVar5 = uVar5 | 0x80000000;
  }
  piVar3 = *(int **)(*param_1 + 8);
  bVar8 = param_2 == 4;
  iVar6 = DAT_00313588 + 0x2a;
  *piVar3 = (uint)bVar8 << 8;
  piVar3[1] = iVar1;
  piVar3[2] = (uint)bVar8 << 8;
  piVar3[3] = iVar6;
  piVar3[4] = (uint)bVar8 << 8;
  piVar3[5] = iVar6;
  iVar4 = FUN_0047ff14(param_2);
  iVar2 = DAT_0031358c;
  piVar3[6] = iVar4 << 8;
  piVar3[8] = 0;
  piVar3[9] = iVar2 + 0x20000;
  iVar4 = DAT_00313590;
  piVar3[7] = iVar2;
  piVar3[10] = 1;
  piVar3[0xb] = iVar4;
  iVar4 = DAT_00313594;
  piVar3[0xc] = 0;
  piVar3[0xd] = iVar4;
  iVar4 = DAT_00313598;
  piVar3[0xe] = uVar5;
  iVar7 = DAT_003135a0;
  piVar3[0xf] = iVar4;
  piVar3[0x10] = param_3;
  piVar3[0x11] = iVar4 + (iVar2 >> 0x11);
  iVar4 = DAT_0031359c;
  piVar3[0x12] = 0;
  piVar3[0x14] = 1;
  piVar3[0x13] = iVar4;
  piVar3[0x16] = 1;
  piVar3[0x17] = iVar4;
  piVar3[0x15] = iVar7;
  iVar7 = iVar7 + (iVar2 >> 0x10);
  piVar3[0x18] = 1;
  piVar3[0x19] = iVar7;
  piVar3[0x1a] = 1;
  piVar3[0x1c] = 0;
  piVar3[0x1d] = iVar1;
  piVar3[0x1b] = iVar7 + -0x120;
  piVar3[0x1e] = 0;
  piVar3[0x1f] = iVar6;
  piVar3[0x20] = 0;
  iVar1 = DAT_003135a4;
  piVar3[0x21] = iVar2;
  piVar3[0x22] = iVar1;
  piVar3[0x23] = DAT_003135a8;
  *(int **)(*param_1 + 8) = piVar3 + 0x24;
  return;
}

// OoT3D decomp @ 004970c0  name=FUN_004970c0  size=452

undefined4 * FUN_004970c0(undefined4 param_1,int *param_2)

{
  int **ppiVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  puVar3 = (undefined4 *)FUN_002c4f00();
  *puVar3 = DAT_00497284;
  puVar3[0x79] = 0;
  puVar3[0x7a] = 0;
  puVar3[0x7b] = 0;
  puVar3[0x7c] = 0;
  puVar3[0x7d] = 0;
  puVar3[0x7e] = 0;
  puVar3[0x7f] = 0;
  ppiVar1 = DAT_00497288;
  iVar4 = *(int *)(*param_2 + 0xc);
  if (iVar4 == 0) {
    iVar4 = 4;
  }
  iVar4 = (int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1e)) >> 2;
  puVar3[0x7e] = iVar4;
  uVar5 = (**(code **)(**ppiVar1 + 0xc))(*ppiVar1,iVar4 * 0xc,DAT_0049728c,0x3a);
  puVar3[0x79] = uVar5;
  uVar5 = (**(code **)(**ppiVar1 + 0xc))(*ppiVar1,puVar3[0x7e] * 0xc,DAT_0049728c,0x3b);
  puVar3[0x7b] = uVar5;
  uVar5 = (**(code **)(**ppiVar1 + 0xc))(*ppiVar1,puVar3[0x7e] * 0x30,DAT_0049728c,0x3c);
  puVar3[0x7a] = uVar5;
  puVar2 = DAT_00497290;
  uVar5 = DAT_00497290[1];
  uVar6 = DAT_00497290[2];
  uVar7 = DAT_00497290[3];
  uVar8 = DAT_00497290[4];
  puVar9 = DAT_00497290 + 5;
  puVar3[0x80] = *DAT_00497290;
  puVar3[0x81] = uVar5;
  puVar3[0x82] = uVar6;
  puVar3[0x83] = uVar7;
  puVar3[0x84] = uVar8;
  uVar5 = puVar2[6];
  uVar6 = puVar2[7];
  uVar7 = puVar2[8];
  uVar8 = puVar2[9];
  puVar3[0x85] = *puVar9;
  puVar3[0x86] = uVar5;
  puVar3[0x87] = uVar6;
  puVar3[0x88] = uVar7;
  puVar3[0x89] = uVar8;
  puVar9 = DAT_00497294;
  uVar5 = puVar2[0xb];
  puVar3[0x8a] = puVar2[10];
  puVar3[0x8b] = uVar5;
  uVar5 = puVar9[1];
  uVar6 = puVar9[2];
  uVar7 = puVar9[3];
  uVar8 = puVar9[4];
  puVar3[0x98] = *puVar9;
  puVar3[0x99] = uVar5;
  puVar3[0x9a] = uVar6;
  puVar3[0x9b] = uVar7;
  puVar3[0x9c] = uVar8;
  puVar2 = DAT_00497298;
  uVar5 = puVar9[6];
  uVar6 = puVar9[7];
  puVar3[0x9d] = puVar9[5];
  puVar3[0x9e] = uVar5;
  puVar3[0x9f] = uVar6;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  uVar8 = puVar2[4];
  puVar3[0x8c] = *puVar2;
  puVar3[0x8d] = uVar5;
  puVar3[0x8e] = uVar6;
  puVar3[0x8f] = uVar7;
  puVar3[0x90] = uVar8;
  uVar5 = puVar2[6];
  uVar6 = puVar2[7];
  uVar7 = puVar2[8];
  uVar8 = puVar2[9];
  puVar3[0x91] = puVar2[5];
  puVar3[0x92] = uVar5;
  puVar3[0x93] = uVar6;
  puVar3[0x94] = uVar7;
  puVar3[0x95] = uVar8;
  uVar5 = puVar2[0xb];
  puVar3[0x96] = puVar2[10];
  puVar3[0x97] = uVar5;
  puVar3[0x7c] = 0;
  if ((*(uint *)(*param_2 + 0x1c) & 8) == 0) {
    uVar5 = (**(code **)(**ppiVar1 + 0xc))(*ppiVar1,puVar3[0x7e] << 6,DAT_0049728c,0x48);
    puVar3[0x7c] = uVar5;
  }
  puVar3[0x7d] = 0;
  if ((*(uint *)(*param_2 + 0x1c) & 0x10) == 0) {
    uVar5 = (**(code **)(**ppiVar1 + 0xc))(*ppiVar1,puVar3[0x7e] << 3,DAT_0049728c,0x4e);
    puVar3[0x7d] = uVar5;
  }
  uVar5 = DAT_0049729c;
  puVar3[0x5e] = puVar3[0x5e] | 6;
  puVar3[0xa0] = uVar5;
  puVar3[0xa1] = uVar5;
  puVar3[0xa2] = uVar5;
  return puVar3;
}


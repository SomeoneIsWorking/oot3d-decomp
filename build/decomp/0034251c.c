// OoT3D decomp @ 0034251c  name=FUN_0034251c  size=380

void FUN_0034251c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_60 [48];
  float local_30 [2];
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  puVar3 = DAT_003426a0;
  iVar8 = DAT_0034269c;
  uVar2 = DAT_00342698;
  local_20 = DAT_00342698;
  local_24 = DAT_00342698;
  local_1c = *(undefined4 *)(DAT_0034269c + *(short *)(param_1 + 0x1c) * 0xc);
  *(undefined4 *)(param_1 + 0xc54) = local_1c;
  if (((*puVar3 & 1) == 0) &&
     (iVar7 = FUN_003679b4(DAT_003426a0), puVar5 = DAT_003426a8, uVar4 = DAT_003426a4, iVar7 != 0))
  {
    *DAT_003426a8 = DAT_003426a4;
    puVar5[1] = uVar2;
    puVar5[2] = uVar2;
    puVar5[3] = uVar2;
    puVar5[4] = uVar2;
    puVar5[5] = uVar4;
    puVar5[6] = uVar2;
    puVar5[7] = uVar2;
    puVar5[8] = uVar2;
    puVar5[9] = uVar2;
    puVar5[10] = uVar4;
    puVar5[0xb] = uVar2;
  }
  FUN_00372224(auStack_60,DAT_003426a8);
  FUN_003735e8(*(undefined4 *)(iVar8 + *(short *)(param_1 + 0x1c) * 0xc + 4),auStack_60,0);
  FUN_003735ac(local_30,auStack_60,&local_24);
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0xc48) + local_30[0];
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0xc50) + local_28;
  fVar6 = DAT_003426ac;
  iVar8 = iVar8 + *(short *)(param_1 + 0x1c) * 0xc;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc4c) + *(float *)(iVar8 + 8);
  sVar1 = (short)(int)(*(float *)(iVar8 + 4) * fVar6) + -0x8000;
  *(short *)(param_1 + 0xbe) = sVar1;
  *(short *)(param_1 + 0x36) = sVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  return;
}

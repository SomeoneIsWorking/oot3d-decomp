// OoT3D decomp @ 0029acdc  name=FUN_0029acdc  size=452

void FUN_0029acdc(int param_1,int param_2)

{
  uint *puVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 auStack_48 [48];

  FUN_00372224(auStack_48,param_1 + 0x148);
  fVar2 = DAT_0029aea4;
  puVar1 = DAT_0029aea0;
  if (((DAT_0029aea0[1] & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_0029aea0 + 1), pfVar3 = DAT_0029aea8, iVar5 != 0)) {
    *DAT_0029aea8 = fVar2;
    pfVar3[1] = fVar2;
    pfVar3[2] = fVar2;
  }
  pfVar3 = DAT_0029aeac;
  if (((*puVar1 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_0029aea0), fVar4 = DAT_0029aeb0, iVar5 != 0)
     ) {
    *pfVar3 = fVar2;
    pfVar3[1] = fVar4;
    pfVar3[2] = fVar2;
  }
  iVar5 = *(int *)(DAT_0029aeb4 + param_2);
  if (*(int *)(param_1 + 0x1cc) == DAT_0029aeb8) {
    FUN_003679d0(*(undefined4 *)(iVar5 + 0x1228),*(undefined4 *)(iVar5 + 0x122c),
                 *(undefined4 *)(iVar5 + 0x1230),auStack_48,param_1 + 0xbc);
    local_54 = *(float *)(param_1 + 0x1bc);
    local_4c = *(float *)(param_1 + 0x1c4);
    local_50 = *(float *)(param_1 + 0x1c0);
  }
  else {
    if (*(float *)(param_1 + 0x70) != fVar2 || *(int *)(param_1 + 0x1cc) != DAT_0029aebc)
    goto LAB_0029ae4c;
    FUN_003679d0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                 *(undefined4 *)(param_1 + 0x10),auStack_48,param_1 + 0xbc);
    local_54 = *pfVar3;
    local_50 = pfVar3[1];
    local_4c = pfVar3[2];
  }
  local_4c = -local_4c;
  local_50 = -local_50;
  local_54 = -local_54;
  FUN_00372070(auStack_48,auStack_48,&local_54);
LAB_0029ae4c:
  FUN_003735ac(param_1 + 0x28,auStack_48,DAT_0029aea8);
  FUN_003735ac(param_1 + 8,auStack_48,DAT_0029aeac);
  if (*(int *)(param_1 + 0x1d4) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1d4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1d4),auStack_48);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1d4),0);
  }
  return;
}

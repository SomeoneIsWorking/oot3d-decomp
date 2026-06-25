// OoT3D decomp @ 004c1994  name=FUN_004c1994  size=356

void FUN_004c1994(float param_1,undefined4 param_2,float *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  undefined auStack_7c [12];
  float local_70;
  undefined auStack_6c [12];
  undefined auStack_60 [12];
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  puVar1 = DAT_004c1afc;
  if (((*(uint *)(DAT_004c1af8 + 0x20) & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_004c1b00), uVar2 = DAT_004c1b04, iVar6 != 0)) {
    *puVar1 = DAT_004c1b04;
    puVar1[1] = uVar2;
    puVar1[2] = uVar2;
  }
  fVar5 = DAT_004c1b20;
  puVar1[1] = DAT_004c1b08;
  fVar4 = DAT_004c1b18;
  iVar6 = DAT_004c1b14;
  fVar3 = DAT_004c1b10;
  uVar2 = DAT_004c1b0c;
  param_1 = param_1 * DAT_004c1b1c;
  iVar8 = 0;
  do {
    local_50 = *param_3;
    local_4c = param_3[1];
    local_48 = param_3[2];
    fVar9 = (float)FUN_00371e50(uVar2);
    pfVar7 = (float *)(iVar6 + iVar8 * 0xc);
    local_3c = (fVar9 + fVar3) * fVar4;
    local_44 = *pfVar7 * local_3c;
    local_40 = pfVar7[1] * local_3c;
    local_3c = pfVar7[2] * local_3c;
    local_50 = local_50 + *pfVar7;
    local_4c = local_4c + pfVar7[1];
    local_48 = local_48 + pfVar7[2];
    fVar9 = (float)FUN_00371e50(uVar2);
    FUN_0036df4c(auStack_7c,&local_50);
    FUN_0036df4c(auStack_6c,&local_44);
    FUN_0036df4c(auStack_60,DAT_004c1afc);
    local_54 = 0x19;
    local_70 = (fVar9 + fVar3) * param_1 * fVar5;
    FUN_00342c10(param_2,0x1a,0x80,auStack_7c);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 10);
  return;
}


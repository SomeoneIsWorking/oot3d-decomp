// OoT3D decomp @ 0034a944  name=FUN_0034a944  size=380

undefined4 FUN_0034a944(float param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [12];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;

  fVar1 = DAT_0034aacc;
  fVar12 = DAT_0034aad0;
  if (DAT_0034aacc <= param_1) {
    fVar12 = DAT_0034aad4;
  }
  fVar12 = ((DAT_0034aac4 + *(float *)(param_4 + 0x54) * DAT_0034aac0) - DAT_0034aac8) * fVar12;
  fVar9 = (float)FUN_002cfca0(param_3);
  fVar10 = (float)FUN_00338f60(param_3);
  fVar3 = DAT_0034aadc;
  iVar2 = DAT_0034aad8;
  iVar7 = 0;
  iVar8 = DAT_0034aad8 + 0x20;
  do {
    pfVar6 = (float *)(iVar2 + iVar7 * 8);
    pfVar4 = (float *)(iVar8 + iVar7 * 8);
    fVar11 = *pfVar4 + fVar3 * *pfVar6 * *(float *)(param_4 + 0x54);
    local_44 = fVar1 * fVar9 + fVar11 * fVar10 + *(float *)(param_4 + 0x28);
    local_50 = local_44 + fVar12 * fVar9;
    local_4c = pfVar4[1] + fVar3 * pfVar6[1] * *(float *)(param_4 + 0x58) +
               *(float *)(param_4 + 0x2c);
    local_3c = (fVar1 * fVar10 - fVar11 * fVar9) + *(float *)(param_4 + 0x30);
    local_48 = local_3c + fVar12 * fVar10;
    local_40 = local_4c;
    iVar5 = FUN_0035ebac(fVar1,param_2 + 0xa98,&local_44,&local_50,auStack_5c,auStack_64,1,0,0,1,
                         auStack_60,param_4);
    if (iVar5 != 0) {
      return 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  return 0;
}

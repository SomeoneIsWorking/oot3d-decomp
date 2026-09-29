// OoT3D decomp @ 002fd8e8  name=FUN_002fd8e8  size=268

void FUN_002fd8e8(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined4 param_7,float param_8,int param_9)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float extraout_s0;
  float fVar7;
  float extraout_s1;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  undefined4 extraout_s6;
  float extraout_s7;
  undefined1 auStack_48 [48];

  if (*(int *)(param_9 + 4) != 0) {
    fVar7 = param_1;
    if (((*DAT_002fd9f4 & 1) == 0) &&
       (iVar4 = FUN_003679b4(DAT_002fd9f4), puVar3 = DAT_002fda00, fVar2 = DAT_002fd9fc,
       uVar1 = DAT_002fd9f8, fVar7 = extraout_s0, param_2 = extraout_s1, param_3 = extraout_s2,
       param_4 = extraout_s3, param_5 = extraout_s4, param_6 = extraout_s5, param_7 = extraout_s6,
       param_8 = extraout_s7, iVar4 != 0)) {
      *DAT_002fda00 = DAT_002fd9f8;
      puVar3[1] = fVar2;
      puVar3[2] = fVar2;
      puVar3[3] = fVar2;
      puVar3[4] = fVar2;
      puVar3[5] = uVar1;
      puVar3[6] = fVar2;
      puVar3[7] = fVar2;
      puVar3[8] = fVar2;
      puVar3[9] = fVar2;
      puVar3[10] = uVar1;
      puVar3[0xb] = fVar2;
      fVar7 = fVar2;
      param_2 = fVar2;
      param_3 = fVar2;
      param_4 = fVar2;
      param_5 = fVar2;
      param_6 = fVar2;
      param_7 = uVar1;
      param_8 = fVar2;
    }
    FUN_00372224(fVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,auStack_48,
                 DAT_002fda00);
    iVar4 = 0;
    param_1 = param_1 * DAT_002fda04;
    do {
      iVar6 = param_9 + iVar4 * 4;
      iVar5 = *(int *)(iVar6 + 0x418);
      if (iVar5 != 0) {
        FUN_002f2c88(param_1,iVar5,auStack_48);
      }
      iVar5 = *(int *)(iVar6 + 0x818);
      if (iVar5 != 0) {
        FUN_002f2c88(param_1,iVar5,auStack_48);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x100);
  }
  return;
}

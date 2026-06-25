// OoT3D decomp @ 004c7f58  name=FUN_004c7f58  size=436

void FUN_004c7f58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9,uint param_10)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 local_44;
  int local_40;
  
  FUN_00305224(*(undefined4 *)(param_1 + 0x920));
  FUN_002df800(*(undefined4 *)(param_1 + 0x520));
  local_44 = 0;
  FUN_004c8e70(*(undefined4 *)(param_1 + 0x520),param_2,1,param_3,param_4,param_5,param_6,param_7,
               param_8);
  FUN_002db0d8(*(undefined4 *)(param_1 + 0x920),param_1 + 0x124,0xff);
  fVar2 = DAT_004c8110;
  iVar1 = DAT_004c810c;
  *(undefined *)(*(int *)(param_1 + 0x920) + 0x6c) = 1;
  uVar3 = DAT_004c8114;
  iVar4 = *(int *)(param_1 + 0x920);
  uVar7 = 0;
  *(undefined4 *)(iVar4 + 0xa4) = 1;
  *(undefined4 *)(iVar4 + 0xa8) = 1;
  pfVar5 = (float *)(iVar1 + *(int *)(param_1 + 0x120) * 8);
  fVar9 = *pfVar5;
  fVar10 = pfVar5[1];
  if (*(int *)(param_1 + 0x934) != -1) {
    fVar9 = fVar9 + fVar2;
  }
  iVar4 = *(int *)(param_1 + 0x920);
  *(float *)(iVar4 + 0x80) = fVar9;
  *(float *)(iVar4 + 0x84) = fVar10;
  *(undefined4 *)(iVar4 + 0x88) = uVar3;
  if (*(int *)(param_1 + 0x120) == 5) {
    *(undefined4 *)(*(int *)(param_1 + 0x920) + 0xa4) = 0;
  }
  if (param_10 != 0) {
    local_40 = param_1 + 0x924;
    do {
      iVar4 = *(int *)(param_1 + uVar7 * 4 + 0x6b4);
      pfVar5 = (float *)(iVar1 + *(int *)(param_1 + 0x120) * 8);
      fVar10 = pfVar5[1];
      pbVar6 = (byte *)(param_9 + uVar7 * 0x10);
      fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(pbVar6 + 4),(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = *pfVar5 + fVar9;
      fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(pbVar6 + 8),(byte)(in_fpscr >> 0x15) & 3);
      if (*(int *)(param_1 + 0x934) != -1) {
        fVar9 = fVar9 + fVar2;
      }
      uVar12 = *(undefined4 *)(pbVar6 + 0xc);
      *(float *)(iVar4 + 0x80) = fVar9;
      *(float *)(iVar4 + 0x84) = fVar10 + fVar11;
      *(undefined4 *)(iVar4 + 0x88) = uVar12;
      iVar8 = *(int *)(param_1 + (uVar7 + 100) * 4 + 0x524);
      uVar12 = FUN_00305980(local_40,*pbVar6 + 100,&local_44);
      FUN_00305950(iVar8,uVar12,local_44);
      *(undefined *)(iVar8 + 0x14) = 1;
      *(undefined4 *)(iVar8 + 0x18) = uVar3;
      uVar7 = uVar7 + 1;
      *(undefined *)(iVar4 + 0x6c) = 0;
    } while (uVar7 < param_10);
  }
  *(uint *)(param_1 + 0x11c) = param_10;
  return;
}


// OoT3D decomp @ 00335090  name=FUN_00335090  size=292

void FUN_00335090(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  short sVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float local_50 [3];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];

  FUN_0034f910(param_2,param_1 + 0x1d8);
  FUN_0034f760(param_2,param_1 + 0x1d8,param_1,param_3,param_1 + 0x1f8);
  iVar7 = 0;
  do {
    iVar4 = 0;
    do {
      iVar1 = iVar4 * 0xc;
      pfVar6 = local_50 + iVar4 * 3;
      sVar2 = *(short *)(param_1 + 0x16);
      pfVar3 = (float *)(*(int *)(param_3 + 0xc) + iVar7 * 0x3c + iVar4 * 0xc + 0x18);
      fVar8 = (float)FUN_002cfca0((int)sVar2);
      fVar9 = (float)FUN_00338f60((int)sVar2);
      iVar5 = iVar4 + 1;
      *pfVar6 = pfVar3[2] * fVar8 + *pfVar3 * fVar9;
      local_50[iVar4 * 3 + 1] = pfVar3[1];
      *(float *)(auStack_44 + iVar1 + -4) = pfVar3[2] * fVar9 - *pfVar3 * fVar8;
      *pfVar6 = *pfVar6 + *(float *)(param_1 + 0x28);
      local_50[iVar4 * 3 + 1] = local_50[iVar4 * 3 + 1] + *(float *)(param_1 + 0x2c);
      *(float *)(auStack_44 + iVar1 + -4) =
           *(float *)(auStack_44 + iVar1 + -4) + *(float *)(param_1 + 0x30);
      iVar4 = iVar5;
    } while (iVar5 < 3);
    FUN_00362434(param_1 + 0x1d8,iVar7,local_50,auStack_44,auStack_38);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 2);
  return;
}

// OoT3D decomp @ 0022ae30  name=FUN_0022ae30  size=616

void FUN_0022ae30(int param_1,int param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_4c [3];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];

  FUN_003510b0(param_1,DAT_0022b0f8);
  uVar1 = FUN_00372f38(param_1,param_2,param_1 + 0x29c,6,0);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(*(int *)(param_1 + 0x29c) + 0xc);
  uVar1 = FUN_00372f0c(uVar1,2);
  FUN_00372d94(*(undefined4 *)(param_1 + 0x2a0),uVar1);
  uVar1 = DAT_0022b0fc;
  *(undefined4 *)(*(int *)(param_1 + 0x2a0) + 0xc) = DAT_0022b0fc;
  TorchAnimationModel_0034f94c(param_1 + 0x2a4,param_2,param_1,0);
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_0037572c(DAT_0022b100,param_1);
    fVar9 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x16));
    fVar10 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x16));
    FUN_0034f910(param_2,param_1 + 0x1a8);
    FUN_0034f760(param_2,param_1 + 0x1a8,param_1,DAT_0022b104,param_1 + 0x1c8);
    iVar3 = DAT_0022b104;
    iVar7 = 0;
    do {
      pfVar2 = local_4c;
      iVar4 = 0;
      do {
        iVar5 = iVar4 + 1;
        pfVar6 = (float *)(*(int *)(iVar3 + 0xc) + iVar7 * 0x3c + iVar4 * 0xc + 0x18);
        fVar11 = pfVar6[2] * fVar9 + *pfVar6 * fVar10;
        *pfVar2 = fVar11;
        pfVar2[1] = pfVar6[1];
        pfVar2[2] = pfVar6[2] * fVar10 - *pfVar6 * fVar9;
        *pfVar2 = fVar11 + *(float *)(param_1 + 0x28);
        pfVar2[1] = pfVar2[1] + *(float *)(param_1 + 0x2c);
        pfVar2[2] = pfVar2[2] + *(float *)(param_1 + 0x30);
        pfVar2 = pfVar2 + 3;
        iVar4 = iVar5;
      } while (iVar5 < 3);
      FUN_00362434(param_1 + 0x1a8,iVar7,local_4c,auStack_40,auStack_34);
      iVar4 = DAT_0022b10c;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0022b108;
    *(undefined2 *)(iVar4 + param_1) = 3;
    FUN_0037322c(uVar1,param_1);
    return;
  }
  FUN_0037572c(DAT_0022b110,param_1);
  FUN_00353dd0(param_2,param_1 + 0x1a8);
  FUN_00353d24(param_2,param_1 + 0x1a8,param_1,DAT_0022b114);
  FUN_0037632c(param_1,param_1 + 0x1a8);
  uVar8 = DAT_0022b11c;
  *(undefined4 *)(param_1 + 0x74) = DAT_0022b118;
  FUN_00350d20(param_1 + 0xa0,0,uVar8);
  FUN_00372d4c(uVar1,DAT_0022b120,param_1 + 0xbc,DAT_0022b124);
  *(undefined1 *)(param_1 + 0xd0) = 0x80;
  fVar9 = DAT_0022b12c;
  iVar3 = *(int *)(DAT_0022b128 + param_2);
  uVar1 = *(undefined4 *)(iVar3 + 0x2c);
  uVar8 = *(undefined4 *)(iVar3 + 0x30);
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(iVar3 + 0x28);
  *(undefined4 *)(param_1 + 0x288) = uVar1;
  *(undefined4 *)(param_1 + 0x28c) = uVar8;
  *(float *)(param_1 + 0x288) = *(float *)(param_1 + 0x288) + fVar9;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}

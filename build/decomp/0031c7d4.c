// OoT3D decomp @ 0031c7d4  name=FUN_0031c7d4  size=364

void FUN_0031c7d4(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,int param_5
                 ,int param_6,undefined4 param_7,undefined2 param_8,int param_9)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  short sVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;

  uVar4 = DAT_0031ca50;
  puVar1 = DAT_0031ca40;
  uVar3 = DAT_0031ca3c;
  if (0 < param_6) {
    param_3 = param_3 - DAT_0031ca38;
    do {
      if (param_9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      fVar7 = (float)FUN_003738a8(param_1);
      iVar2 = param_5 + (short)(int)param_3 * 0xc;
      fVar10 = *(float *)(iVar2 + 0x1000);
      fVar11 = *(float *)(param_5 + 0x28);
      fVar8 = (float)FUN_003738a8(param_2);
      fVar12 = *(float *)(iVar2 + 0x1004);
      fVar13 = *(float *)(param_5 + 0x2c);
      fVar9 = (float)FUN_003738a8(param_1);
      fVar14 = *(float *)(iVar2 + 0x1008);
      fVar15 = *(float *)(param_5 + 0x30);
      sVar6 = 0;
      puVar5 = DAT_0031ca58;
      do {
        if (*(char *)(puVar5 + 9) == '\0') {
          *(undefined1 *)(puVar5 + 9) = 7;
          puVar5[0x15] = param_5;
          *puVar5 = uVar4;
          puVar5[1] = uVar3;
          puVar5[2] = uVar4;
          uVar3 = puVar1[1];
          uVar4 = puVar1[2];
          puVar5[6] = *puVar1;
          puVar5[7] = uVar3;
          puVar5[8] = uVar4;
          puVar5[3] = puVar5[6];
          puVar5[4] = puVar5[7];
          puVar5[5] = puVar5[8];
          *(undefined2 *)(puVar5 + 10) = param_8;
          *(undefined2 *)((int)puVar5 + 0x2e) = 0;
          puVar5[0x12] = (fVar7 + fVar10) - fVar11;
          puVar5[0x14] = (fVar9 + fVar14) - fVar15;
          puVar5[0x13] = (fVar8 + fVar12) - fVar13;
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
        sVar6 = sVar6 + 1;
        puVar5 = puVar5 + 0x17;
      } while (sVar6 < 200);
      param_6 = param_6 + -1;
    } while (0 < param_6);
  }
  return;
}

// OoT3D decomp @ 0034f760  name=FUN_0034f760  size=424

undefined4
FUN_0034f760(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined1 *param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;

  *param_2 = param_3;
  *(undefined1 *)(param_2 + 5) = *param_4;
  *(undefined1 *)(param_2 + 4) = param_4[1];
  *(undefined1 *)((int)param_2 + 0x11) = param_4[2];
  *(undefined1 *)((int)param_2 + 0x12) = param_4[3];
  *(undefined1 *)((int)param_2 + 0x13) = param_4[4];
  *(undefined1 *)((int)param_2 + 0x15) = param_4[5];
  iVar2 = *(int *)(param_4 + 8);
  param_2[6] = iVar2;
  param_2[7] = param_5;
  puVar1 = DAT_0034f908;
  puVar7 = *(undefined1 **)(param_4 + 0xc);
  if (param_5 < param_5 + iVar2 * 0x17) {
    puVar10 = DAT_0034f908 + -3;
    do {
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      uVar6 = puVar1[4];
      uVar8 = puVar1[5];
      uVar11 = puVar1[6];
      uVar12 = puVar1[7];
      *param_5 = *puVar1;
      param_5[1] = uVar3;
      param_5[2] = uVar4;
      param_5[3] = uVar5;
      param_5[4] = uVar6;
      param_5[5] = uVar8;
      param_5[6] = uVar11;
      param_5[7] = uVar12;
      puVar9 = DAT_0034f90c;
      uVar3 = puVar1[9];
      param_5[8] = puVar1[8];
      param_5[9] = uVar3;
      uVar3 = puVar1[-0x4f];
      *param_5 = puVar1[-0x50];
      param_5[1] = uVar3;
      uVar3 = puVar1[-2];
      uVar4 = puVar1[-1];
      param_5[2] = *puVar10;
      param_5[3] = uVar3;
      param_5[4] = uVar4;
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      uVar6 = puVar9[4];
      uVar8 = puVar9[5];
      param_5[10] = *puVar9;
      param_5[0xb] = uVar3;
      param_5[0xc] = uVar4;
      param_5[0xd] = uVar5;
      param_5[0xe] = uVar6;
      param_5[0xf] = uVar8;
      uVar3 = puVar9[7];
      uVar4 = puVar9[8];
      uVar5 = puVar9[9];
      uVar6 = puVar9[10];
      uVar8 = puVar9[0xb];
      uVar11 = puVar9[0xc];
      param_5[0x10] = puVar9[6];
      param_5[0x11] = uVar3;
      param_5[0x12] = uVar4;
      param_5[0x13] = uVar5;
      param_5[0x14] = uVar6;
      param_5[0x15] = uVar8;
      param_5[0x16] = uVar11;
      *(undefined1 *)(param_5 + 5) = *puVar7;
      *param_5 = *(undefined4 *)(puVar7 + 4);
      *(undefined1 *)(param_5 + 1) = puVar7[8];
      *(undefined1 *)((int)param_5 + 5) = puVar7[9];
      param_5[2] = *(undefined4 *)(puVar7 + 0xc);
      *(undefined1 *)(param_5 + 3) = puVar7[0x10];
      *(undefined1 *)((int)param_5 + 0xd) = puVar7[0x11];
      *(undefined1 *)((int)param_5 + 0x15) = puVar7[0x14];
      *(undefined1 *)((int)param_5 + 0x16) = puVar7[0x15];
      *(undefined1 *)((int)param_5 + 0x17) = puVar7[0x16];
      puVar13 = (undefined4 *)(puVar7 + 0x18);
      for (puVar9 = param_5 + 10; puVar9 < param_5 + 0x13; puVar9 = puVar9 + 3) {
        uVar3 = *puVar13;
        uVar4 = puVar13[1];
        uVar5 = puVar13[2];
        puVar13 = puVar13 + 3;
        *puVar9 = uVar3;
        puVar9[1] = uVar4;
        puVar9[2] = uVar5;
      }
      FUN_0033ae14(puVar7 + 0x18,puVar7 + 0x24,puVar7 + 0x30,&local_28,&local_2c,&local_30,&local_34
                  );
      puVar9 = param_5 + 0x17;
      param_5[0x13] = local_28;
      puVar7 = puVar7 + 0x3c;
      param_5[0x14] = local_2c;
      param_5[0x15] = local_30;
      param_5[0x16] = local_34;
      param_5 = puVar9;
    } while (puVar9 < (undefined4 *)(param_2[7] + param_2[6] * 0x5c));
  }
  return 1;
}

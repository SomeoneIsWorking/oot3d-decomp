// OoT3D decomp @ 001a9dc8  name=FUN_001a9dc8  size=384

undefined4
FUN_001a9dc8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined1 *param_4)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  uint in_fpscr;
  float fVar13;

  *param_2 = param_3;
  *(undefined1 *)(param_2 + 5) = *param_4;
  *(undefined1 *)(param_2 + 4) = param_4[1];
  *(undefined1 *)((int)param_2 + 0x11) = param_4[2];
  *(undefined1 *)((int)param_2 + 0x12) = param_4[3];
  *(undefined1 *)((int)param_2 + 0x13) = 0x10;
  *(undefined1 *)((int)param_2 + 0x15) = param_4[4];
  param_2[6] = *(undefined4 *)(param_4 + 8);
  puVar5 = (undefined4 *)FUN_00347248(*(int *)(param_4 + 8) * 0x50);
  param_2[7] = puVar5;
  fVar4 = DAT_001a9f50;
  puVar3 = DAT_001a9f4c;
  puVar2 = DAT_001a9f48;
  if (puVar5 == (undefined4 *)0x0) {
    param_2[6] = 0;
    uVar6 = 0;
  }
  else {
    puVar12 = *(undefined1 **)(param_4 + 0xc);
    if (puVar5 < puVar5 + param_2[6] * 0x14) {
      puVar10 = DAT_001a9f48 + -3;
      do {
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        uVar9 = puVar2[4];
        uVar11 = puVar2[5];
        *puVar5 = *puVar2;
        puVar5[1] = uVar6;
        puVar5[2] = uVar7;
        puVar5[3] = uVar8;
        puVar5[4] = uVar9;
        puVar5[5] = uVar11;
        uVar6 = puVar2[7];
        uVar7 = puVar2[8];
        uVar8 = puVar2[9];
        puVar5[6] = puVar2[6];
        puVar5[7] = uVar6;
        puVar5[8] = uVar7;
        puVar5[9] = uVar8;
        uVar6 = puVar2[-0x4f];
        *puVar5 = puVar2[-0x50];
        puVar5[1] = uVar6;
        uVar6 = puVar2[-2];
        uVar7 = puVar2[-1];
        puVar5[2] = *puVar10;
        puVar5[3] = uVar6;
        puVar5[4] = uVar7;
        uVar6 = puVar3[1];
        uVar7 = puVar3[2];
        uVar8 = puVar3[3];
        uVar9 = puVar3[4];
        puVar5[10] = *puVar3;
        puVar5[0xb] = uVar6;
        puVar5[0xc] = uVar7;
        puVar5[0xd] = uVar8;
        puVar5[0xe] = uVar9;
        uVar6 = puVar3[6];
        uVar7 = puVar3[7];
        uVar8 = puVar3[8];
        uVar9 = puVar3[9];
        puVar5[0xf] = puVar3[5];
        puVar5[0x10] = uVar6;
        puVar5[0x11] = uVar7;
        puVar5[0x12] = uVar8;
        puVar5[0x13] = uVar9;
        *(undefined1 *)(puVar5 + 5) = *puVar12;
        *puVar5 = *(undefined4 *)(puVar12 + 4);
        *(undefined1 *)(puVar5 + 1) = puVar12[8];
        *(undefined1 *)((int)puVar5 + 5) = puVar12[9];
        puVar5[2] = *(undefined4 *)(puVar12 + 0xc);
        *(undefined1 *)(puVar5 + 3) = puVar12[0x10];
        *(undefined1 *)((int)puVar5 + 0xd) = puVar12[0x11];
        *(undefined1 *)((int)puVar5 + 0x15) = puVar12[0x14];
        *(undefined1 *)((int)puVar5 + 0x16) = puVar12[0x15];
        *(undefined1 *)((int)puVar5 + 0x17) = puVar12[0x16];
        *(undefined1 *)(puVar5 + 0x13) = puVar12[0x18];
        uVar6 = *(undefined4 *)(puVar12 + 0x20);
        uVar7 = *(undefined4 *)(puVar12 + 0x24);
        uVar8 = *(undefined4 *)(puVar12 + 0x28);
        puVar5[10] = *(undefined4 *)(puVar12 + 0x1c);
        puVar5[0xb] = uVar6;
        puVar5[0xc] = uVar7;
        puVar5[0xd] = uVar8;
        psVar1 = (short *)(puVar12 + 0x2c);
        puVar12 = puVar12 + 0x30;
        fVar13 = (float)VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
        puVar5[0x12] = fVar13 * fVar4;
        puVar5 = puVar5 + 0x14;
      } while (puVar5 < (undefined4 *)(param_2[7] + param_2[6] * 0x50));
    }
    uVar6 = 1;
  }
  return uVar6;
}

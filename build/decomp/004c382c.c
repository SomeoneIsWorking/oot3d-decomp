// OoT3D decomp @ 004c382c  name=FUN_004c382c  size=392

void FUN_004c382c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  undefined4 uVar11;
  float fVar12;
  undefined4 local_440;
  float local_43c [257];
  int local_38;
  undefined1 local_34;

  *param_1 = param_2;
  param_1[3] = param_3;
  iVar10 = *(int *)(param_2 + 8);
  if (0 < iVar10) {
    iVar5 = *(int *)(param_3 + 8);
    *(int *)(param_3 + 8) = iVar5 + iVar10 * 4;
    param_1[1] = iVar5;
    iVar5 = *(int *)(param_1[3] + 8);
    *(int *)(param_1[3] + 8) = iVar5 + iVar10 * 0x800;
    param_1[2] = iVar5;
    FUN_002deb7c(iVar10,param_1[1]);
    fVar4 = DAT_004c39b8;
    fVar3 = DAT_004c39b4;
    iVar5 = 0;
    do {
      iVar9 = 0;
      local_38 = *param_1 + *(int *)(*param_1 + 0x10 + iVar5 * 4);
      local_34 = 0;
      iVar6 = param_1[2];
      do {
        uVar11 = VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
        fVar12 = (float)FUN_003087a4(uVar11,&local_38);
        pfVar7 = local_43c + iVar9;
        iVar9 = iVar9 + 1;
        *pfVar7 = fVar12;
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar3) << 0x1f |
                (uint)(fVar12 == fVar3) << 0x1e;
        in_fpscr = uVar1 | (uint)(NAN(fVar12) || NAN(fVar3)) << 0x1c;
        bVar2 = (byte)(uVar1 >> 0x18);
        if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar12 = fVar3;
        }
        *pfVar7 = fVar12;
      } while (iVar9 < 0x101);
      iVar9 = 0x80;
      puVar8 = &local_440;
      iVar6 = iVar6 + iVar5 * 0x800 + -4;
      do {
        *(undefined4 *)(iVar6 + 4) = puVar8[1];
        iVar9 = iVar9 + -1;
        *(float *)(iVar6 + 0x404) = (float)puVar8[2] - (float)puVar8[1];
        *(undefined4 *)(iVar6 + 8) = puVar8[2];
        *(float *)(iVar6 + 0x408) = (float)puVar8[3] - (float)puVar8[2];
        puVar8 = puVar8 + 2;
        iVar6 = iVar6 + 8;
      } while (iVar9 != 0);
      iVar6 = param_1[2];
      FUN_002fb074(iVar5 + 0x6614,*(undefined4 *)(param_1[1] + iVar5 * 4));
      local_43c[1] = (float)DAT_004c39bc;
      local_440 = 0;
      local_43c[0] = fVar4;
      local_43c[2] = (float)(iVar6 + iVar5 * 0x800);
      FUN_004c6964(iVar5 + 0x6614,0,fVar4,0x200);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar10);
  }
  return;
}

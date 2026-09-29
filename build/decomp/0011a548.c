// OoT3D decomp @ 0011a548  name=FUN_0011a548  size=1440

void FUN_0011a548(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;

  FUN_003731e0(param_1 + 0x1a8);
  uVar8 = DAT_0011a8c0;
  uVar2 = DAT_0011a89c;
  uVar1 = DAT_0011a898;
  fVar16 = DAT_0011a894;
  iVar6 = DAT_0011a88c;
  uVar7 = DAT_0011a888;
  uVar5 = DAT_0011a884;
  switch(*(undefined2 *)(param_1 + 0xaee)) {
  case 0:
    fVar15 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xace) * 0x500));
    fVar13 = *(float *)(param_1 + 0xafc);
    fVar12 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xace) * 0x700));
    uVar8 = DAT_0011a8a0;
    fVar14 = *(float *)(param_1 + 0xafc);
    FUN_00373500(fVar15 * fVar13,DAT_0011a8a0,*(undefined4 *)(param_1 + 0xaf4),param_1 + 0x28);
    FUN_00373500(fVar12 * fVar14,uVar8,*(undefined4 *)(param_1 + 0xaf4),param_1 + 0x30);
    FUN_00373500(uVar2,uVar1,DAT_0011a8a4,param_1 + 0xafc);
    if (*(short *)(param_1 + 0xae2) == 8) {
      FUN_00375bcc(param_1,DAT_0011a8a8);
    }
    uVar8 = DAT_0011a8b0;
    uVar9 = DAT_0011a8ac;
    if (*(short *)(param_1 + 0xae2) < 0x15) {
      iVar6 = FUN_003695f8();
      fVar15 = DAT_0011a8b4;
      if (iVar6 == 0) {
        fVar12 = (float)FUN_00371e50(DAT_0011a8b4);
        *(float *)(param_1 + 0xb8c) = fVar12 + fVar15 + *(float *)(param_1 + 0xb8c);
      }
      FUN_00373500(DAT_0011a8b8,fVar16,uVar1,param_1 + 0xb88);
      *(undefined1 *)(param_1 + 0xacc) = 1;
      uVar9 = uVar8;
    }
    FUN_00373500(uVar9,uVar5,*(undefined4 *)(param_1 + 100),param_1 + 0x2c);
    FUN_00373500(uVar7,uVar1,uVar1,param_1 + 100);
    if (*(short *)(param_1 + 0xae2) == 0x15) {
      uVar5 = FUN_0036ae14(param_1 + 0x1a8,0x1d);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xaf8) = uVar5;
      FUN_00374a58(uVar2,param_1 + 0x1a8,0x1d);
      *(undefined4 *)(param_1 + 100) = uVar2;
    }
    if (*(short *)(param_1 + 0xae2) == 0) {
      *(undefined2 *)(param_1 + 0xaee) = 1;
      *(undefined4 *)(param_1 + 100) = uVar2;
    }
    break;
  case 1:
    *(undefined4 *)(*(int *)(DAT_0011a88c + 0x44) + 0x1720) = DAT_0011a8bc;
    uVar5 = DAT_0011a8c4;
    *(undefined1 *)(param_1 + 0xacc) = 1;
    FUN_00373500(uVar5,uVar1,uVar8,param_1 + 100);
    iVar6 = DAT_0011a8c8;
    fVar15 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100);
    *(float *)(param_1 + 0x2c) = fVar15;
    if ((int)fVar15 < iVar6) {
      *(undefined4 *)(param_1 + 0x2c) = DAT_0011a8cc;
      *(undefined2 *)(param_1 + 0xaee) = 2;
      *(undefined2 *)(param_1 + 0xae2) = 0xf;
      FUN_0036fca8(param_1,param_2,10,0x14);
      *(undefined2 *)(param_1 + 0xac8) = 0x35;
      uVar5 = DAT_0011a8d0;
      *(undefined1 *)(param_1 + 0xaca) = 0;
      FUN_00375bcc(param_1,uVar5);
      *(undefined4 *)(param_1 + 0xb88) = uVar2;
      uVar9 = DAT_0011a8e4;
      fVar15 = DAT_0011a8e0;
      uVar8 = DAT_0011a8dc;
      uVar7 = DAT_0011a8d8;
      uVar5 = DAT_0011a8d4;
      local_58 = *(undefined4 *)(param_1 + 0xb94);
      uStack_50 = *(undefined4 *)(param_1 + 0xb9c);
      sVar4 = 0;
      local_54 = uVar2;
      do {
        local_4c = FUN_003738a8(uVar5);
        local_48 = FUN_00371e50(uVar7);
        local_44 = FUN_003738a8(uVar5);
        fVar12 = (float)FUN_00371e50(uVar8);
        FUN_00366f60(fVar12 + fVar15,uVar9,param_2,&local_58,&local_4c,DAT_0011a8e8,0x1e);
        sVar4 = sVar4 + 1;
      } while (sVar4 < 0x50);
    }
    break;
  case 2:
    *(undefined1 *)(param_1 + 0xacc) = 1;
    if (*(short *)(param_1 + 0xae2) == 0) {
      uVar5 = FUN_0036ae14(param_1 + 0x1a8,0x1e);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xaf8) = uVar5;
      FUN_00374a58(uVar2,param_1 + 0x1a8,0x1e);
      *(undefined2 *)(param_1 + 0xaee) = 3;
      *(undefined4 *)(param_1 + 100) = uVar2;
      *(undefined1 *)(param_1 + 0xacb) = 1;
    }
    break;
  case 3:
    FUN_00373500(DAT_0011a890,DAT_0011a884,*(undefined4 *)(param_1 + 100),param_1 + 0x2c);
    FUN_00373500(uVar7,uVar1,uVar1,param_1 + 100);
    iVar10 = FUN_003736fc(*(undefined4 *)(param_1 + 0xaf8),uVar1,param_1 + 0x1a8);
    if (iVar10 != 0) {
      uVar5 = FUN_0036ae14(param_1 + 0x1a8,0x16);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0xaf8) = uVar5;
      FUN_00374a58(uVar2,param_1 + 0x1a8,0x16);
      FUN_003731e0(param_1 + 0x1a8);
      uVar5 = DAT_0011ab68;
      *(undefined4 *)(*(int *)(iVar6 + 0x44) + 0x171c) = DAT_0011ab64;
      FUN_00375bcc(param_1,uVar5);
      *(undefined2 *)(param_1 + 0xaee) = 4;
    }
    break;
  case 4:
    FUN_00373500(DAT_0011a890,DAT_0011a884,*(undefined4 *)(param_1 + 100),param_1 + 0x2c);
    FUN_00373500(uVar7,uVar1,uVar1,param_1 + 100);
    iVar6 = FUN_003736fc(*(undefined4 *)(param_1 + 0xaf8),uVar1,param_1 + 0x1a8);
    if (iVar6 != 0) {
      FUN_0036e288(param_1,param_2);
    }
  }
  uVar5 = DAT_0011ab6c;
  sVar4 = *(short *)(param_1 + 0xac8);
  if ((sVar4 == 0x35 || sVar4 == 0x2d) || sVar4 == 0x26) {
    local_4c = *(undefined4 *)(param_1 + 0x28);
    local_44 = *(undefined4 *)(param_1 + 0x30);
    local_48 = uVar2;
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xac8),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if (*(short *)(param_1 + 0xac8) < 1) {
      fVar16 = fVar15 * DAT_0011ab70 * DAT_0011ab74 - fVar16;
    }
    else {
      fVar16 = fVar16 + fVar15 * DAT_0011ab70 * DAT_0011ab74;
    }
    iVar6 = (int)(short)((short)(int)fVar16 + -0x19);
    iVar10 = *(int *)(param_2 + 0x5c28) + iVar6 * 0x4c;
    *(undefined1 *)(*(int *)(param_2 + 0x5c28) + iVar6 * 0x4c) = 6;
    *(undefined4 *)(iVar10 + 4) = local_4c;
    *(undefined4 *)(iVar10 + 8) = uVar2;
    *(undefined4 *)(iVar10 + 0xc) = local_44;
    puVar3 = DAT_0011a8e8;
    uVar7 = DAT_0011a8e8[1];
    uVar8 = DAT_0011a8e8[2];
    *(undefined4 *)(iVar10 + 0x10) = *DAT_0011a8e8;
    *(undefined4 *)(iVar10 + 0x14) = uVar7;
    *(undefined4 *)(iVar10 + 0x18) = uVar8;
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    *(undefined4 *)(iVar10 + 0x1c) = *puVar3;
    *(undefined4 *)(iVar10 + 0x20) = uVar7;
    *(undefined4 *)(iVar10 + 0x24) = uVar8;
    *(undefined4 *)(iVar10 + 0x40) = uVar1;
    uVar7 = DAT_0011ab78;
    *(undefined4 *)(iVar10 + 0x34) = uVar2;
    *(undefined4 *)(iVar10 + 0x38) = uVar5;
    fVar16 = (float)FUN_00371e50(uVar7);
    *(short *)(iVar10 + 0x30) = (short)(int)fVar16;
    *(undefined2 *)(iVar10 + 0x2c) = 0;
    *(undefined2 *)(iVar10 + 2) = 0;
    *(undefined2 *)(iVar10 + 0x2e) = 0;
    if (*(short *)(param_1 + 0xac8) == 0x35) {
      local_4c = *(undefined4 *)(param_1 + 0x28);
      local_44 = *(undefined4 *)(param_1 + 0x30);
      sVar4 = 0;
      local_48 = uVar2;
      pcVar11 = *(char **)(param_2 + 0x5c28);
      while (*pcVar11 != '\0') {
        sVar4 = sVar4 + 1;
        pcVar11 = pcVar11 + 0x4c;
        if (0x95 < sVar4) {
          return;
        }
      }
      *pcVar11 = '\a';
      uVar1 = DAT_0011ab7c;
      *(undefined4 *)(pcVar11 + 4) = local_4c;
      *(undefined4 *)(pcVar11 + 8) = uVar2;
      *(undefined4 *)(pcVar11 + 0xc) = local_44;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      *(undefined4 *)(pcVar11 + 0x10) = *puVar3;
      *(undefined4 *)(pcVar11 + 0x14) = uVar8;
      *(undefined4 *)(pcVar11 + 0x18) = uVar9;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      *(undefined4 *)(pcVar11 + 0x1c) = *puVar3;
      *(undefined4 *)(pcVar11 + 0x20) = uVar8;
      *(undefined4 *)(pcVar11 + 0x24) = uVar9;
      pcVar11[0x2c] = -1;
      pcVar11[0x2d] = '\0';
      *(undefined4 *)(pcVar11 + 0x40) = uVar1;
      *(undefined4 *)(pcVar11 + 0x34) = uVar2;
      *(undefined4 *)(pcVar11 + 0x38) = uVar5;
      fVar16 = (float)FUN_00371e50(uVar7);
      *(short *)(pcVar11 + 0x30) = (short)(int)fVar16;
      pcVar11[0x2e] = '\0';
      pcVar11[0x2f] = '\0';
      pcVar11[2] = '\0';
      pcVar11[3] = '\0';
    }
  }
  return;
}

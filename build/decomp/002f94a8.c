// OoT3D decomp @ 002f94a8  name=FUN_002f94a8  size=1096

void FUN_002f94a8(undefined4 *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float local_a4;
  float local_a0;
  float local_9c [6];
  float local_84;
  float local_80;
  float local_7c;
  undefined1 auStack_78 [48];
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;

  fVar10 = DAT_002f98a0;
  fVar2 = DAT_002f989c;
  if (param_1[9] == 0) {
    iVar6 = param_1[4];
    iVar7 = iVar6 + 1;
    param_1[4] = iVar7;
    if (iVar7 < 0x1f) {
      local_38 = (float)VectorSignedToFloat(iVar7 * 6,(byte)(in_fpscr >> 0x15) & 3);
    }
    else {
      local_38 = (float)VectorSignedToFloat((iVar6 + -0x1d) * 6,(byte)(in_fpscr >> 0x15) & 3);
      local_38 = DAT_002f98a4 - local_38;
    }
    local_38 = local_38 * fVar10;
    if (0x3b < iVar7) {
      param_1[4] = 0;
    }
    fVar10 = (float)param_1[0xd];
    iVar6 = 4;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar10 < fVar2) << 0x1f;
    in_fpscr = uVar1 | (uint)(NAN(fVar10) || NAN(fVar2)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      local_38 = fVar10;
    }
    do {
      FUN_002fcdec(param_1[2],&local_38,1,iVar6);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
  }
  fVar3 = DAT_002f98ac;
  fVar10 = DAT_002f98a8;
  if (param_1[9] == 6) {
    iVar6 = param_1[4];
    iVar7 = iVar6 + 1;
    param_1[4] = iVar7;
    if (iVar7 < 0x10) {
      fVar11 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
      local_38 = DAT_002f98b0 + fVar11 * fVar3;
    }
    else {
      fVar11 = (float)VectorSignedToFloat(iVar6 + -0xf,(byte)(in_fpscr >> 0x15) & 3);
      local_38 = fVar10 - fVar11 * fVar3;
    }
    if (0x1f < iVar7) {
      param_1[4] = 0;
    }
    FUN_002f8b80(fVar10,local_38,param_1[2],1,0);
    fVar11 = DAT_002f98c8;
    fVar3 = DAT_002f98c4;
    uVar8 = DAT_002f98c0;
    iVar6 = DAT_002f98bc;
    local_9c[3] = (float)*DAT_002f98b4;
    local_9c[4] = (float)DAT_002f98b4[1];
    local_9c[5] = (float)DAT_002f98b4[2];
    iVar7 = 0;
    local_9c[0] = (float)DAT_002f98b4[3];
    local_9c[1] = (float)DAT_002f98b4[4];
    local_9c[2] = (float)DAT_002f98b4[5];
    local_48 = DAT_002f98b8;
    local_44 = DAT_002f98b8;
    do {
      if (param_1[iVar7 + 10] == 0) {
        local_a4 = fVar3;
        local_a0 = fVar11;
        param_1[4] = 0;
        FUN_002f9430(param_1[2],&local_a4,1,iVar7 + 1);
      }
      else {
        local_40 = local_9c[iVar7 + 3] + (float)param_1[6];
        local_3c = local_9c[iVar7] + (float)param_1[7];
        FUN_002fc534(param_1[2],&local_40,&local_48,1,iVar7 + 1);
        local_a4 = fVar2;
        local_a0 = fVar2;
        FUN_002f9430(param_1[2],&local_a4,1,iVar7 + 1);
        if (*(int *)(iVar6 + 4) != 0) {
          FUN_002f8b80(uVar8,fVar10,param_1[2],1,iVar7 + 1);
        }
      }
      fVar4 = DAT_002f98cc;
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    if (*(int *)(iVar6 + 4) == 0) {
      iVar6 = param_1[5] + 1;
      param_1[5] = iVar6;
      if (iVar6 < 0x1f) {
        local_38 = (float)VectorSignedToFloat(iVar6 * 4,(byte)(in_fpscr >> 0x15) & 3);
        local_38 = local_38 + DAT_002f98d4;
      }
      else {
        local_38 = (float)VectorSignedToFloat(iVar6 * 4 + -0x78,(byte)(in_fpscr >> 0x15) & 3);
        local_38 = DAT_002f98d0 - local_38;
      }
      local_38 = local_38 * fVar4;
      iVar6 = 0;
      if (0x3b < (int)param_1[5]) {
        param_1[5] = 0;
      }
      do {
        if (param_1[iVar6 + 10] != 0) {
          FUN_002f8b80(local_38,fVar10,param_1[2],1,iVar6 + 1);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 3);
    }
  }
  FUN_002f9a1c(param_1[2]);
  uVar8 = *(undefined4 *)(param_1[2] + 0x10);
  uVar9 = FUN_002f9a0c(param_1[2]);
  FUN_0036759c(*param_1,uVar9,uVar8);
  uVar8 = FUN_002fc3f0(param_1[2],0);
  uVar9 = FUN_002f9a00(param_1[2]);
  FUN_00317d1c(*param_1,uVar9,uVar8);
  uVar8 = FUN_002fc3e4(param_1[2],0);
  uVar9 = FUN_002f99f4(param_1[2]);
  FUN_002f9934(*param_1,uVar9,uVar8);
  if (((*DAT_002f98d8 & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_002f98d8), pfVar5 = DAT_002f98dc, iVar6 != 0)) {
    *DAT_002f98dc = fVar10;
    pfVar5[1] = fVar2;
    pfVar5[2] = fVar2;
    pfVar5[3] = fVar2;
    pfVar5[4] = fVar2;
    pfVar5[5] = fVar10;
    pfVar5[6] = fVar2;
    pfVar5[7] = fVar2;
    pfVar5[8] = fVar2;
    pfVar5[9] = fVar2;
    pfVar5[10] = fVar10;
    pfVar5[0xb] = fVar2;
  }
  FUN_00372224(auStack_78,DAT_002f98dc);
  local_84 = fVar2;
  local_80 = fVar2;
  local_7c = fVar2;
  (**(code **)(*(int *)param_1[1] + 8))((int *)param_1[1],auStack_78,auStack_78,local_9c + 6);
  return;
}

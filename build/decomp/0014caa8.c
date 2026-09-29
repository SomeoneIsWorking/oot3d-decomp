// OoT3D decomp @ 0014caa8  name=FUN_0014caa8  size=1608

void FUN_0014caa8(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  undefined4 uStack_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;

  fVar2 = DAT_0014ce6c;
  local_40 = DAT_0014ce6c;
  local_3c = DAT_0014ce6c;
  local_38 = DAT_0014ce6c;
  local_4c = DAT_0014ce6c;
  local_48 = DAT_0014ce70;
  local_44 = DAT_0014ce6c;
  local_58 = DAT_0014ce6c;
  local_54 = DAT_0014ce6c;
  local_50 = DAT_0014ce6c;
  local_70 = DAT_0014ce6c;
  local_6c = DAT_0014ce74;
  local_68 = DAT_0014ce6c;
  local_74 = *DAT_0014ce78;
  bVar10 = *(int *)(param_1 + 0x274) != 0;
  sVar1 = 0;
  if (bVar10) {
    sVar1 = *(short *)(param_1 + 0x26c);
  }
  if (bVar10 && sVar1 != 0) {
    *(short *)(param_1 + 0x26c) = sVar1 + -1;
  }
  iVar3 = DAT_0014ce7c;
  if ((*(char *)(param_1 + 0x278) == '\0') && (iVar8 = FUN_00371e40(param_1,param_2), iVar8 == 0)) {
    if (*(int *)(param_1 + 0x98) < iVar3) {
      fVar12 = *(float *)(param_1 + 0x9c);
      uVar11 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar2) << 0x1f;
      in_fpscr = uVar11 | (uint)(NAN(fVar12) || NAN(fVar2)) << 0x1c;
      if ((byte)(uVar11 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar12 = -fVar12;
      }
      if ((int)fVar12 < DAT_0014ce80) goto LAB_0014cb98;
    }
    *(undefined1 *)(param_1 + 0x278) = 1;
  }
LAB_0014cb98:
  fVar12 = DAT_0014ce90;
  uVar6 = DAT_0014ce8c;
  uVar5 = DAT_0014ce88;
  piVar4 = DAT_0014ce84;
  uVar11 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x70) == fVar2) << 0x1e;
  if (!SUB41(uVar11 >> 0x1e,0)) {
    *(undefined2 *)(*DAT_0014ce84 + 0x560) = 1;
    FUN_00376340(uVar6,fVar12,uVar5,param_2,param_1,0x1f);
    *(undefined2 *)(*piVar4 + 0x560) = 0;
  }
  (**(code **)(param_1 + 0x270))(param_1,param_2);
  puVar9 = (undefined4 *)(param_1 + 0x28);
  if ((*(short *)(param_1 + 0x1c) == 0) && (FUN_00376864(param_1), *(short *)(param_1 + 0x1c) == 0))
  {
    if ((fVar2 < *(float *)(param_1 + 100)) && ((*(ushort *)(param_1 + 0x90) & 0x10) != 0)) {
      *(float *)(param_1 + 100) = -*(float *)(param_1 + 100);
    }
    uVar11 = uVar11 & 0xfffffff | (uint)(*(float *)(param_1 + 0x6c) == fVar2) << 0x1e;
    if ((!SUB41(uVar11 >> 0x1e,0)) && ((*(ushort *)(param_1 + 0x90) & 8) != 0)) {
      sVar1 = *(short *)(param_1 + 0x82) - *(short *)(param_1 + 0x36);
      if (0x8000 < (int)sVar1 + 0x4000U) {
        *(short *)(param_1 + 0x36) = sVar1 + -0x8000 + *(short *)(param_1 + 0x82);
      }
      FUN_00357680(param_2,param_1);
      FUN_00376864(param_1);
      *(undefined2 *)(*piVar4 + 0x560) = 1;
      FUN_00376340(uVar6,fVar12,uVar5,param_2,param_1,0x1f);
      fVar7 = DAT_0014ce94;
      *(undefined2 *)(*piVar4 + 0x560) = 0;
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * fVar7;
      *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfff7;
    }
    fVar7 = DAT_0014ce98;
    if (((*(byte *)(param_1 + 0x1b5) & 2) == 0) &&
       (((*(byte *)(param_1 + 0x1b6) & 2) == 0 ||
        (*(char *)(*(int *)(param_1 + 0x1b0) + 2) != '\x05')))) {
      if ((0x96 < *(short *)(param_1 + 0x26c)) &&
         (iVar8 = FUN_003575e8(DAT_0014ce98,DAT_0014ce9c,param_2,param_1 + 0x28), iVar8 != 0)) {
        *(undefined2 *)(param_1 + 0x26c) = 0x96;
      }
      if (*(int *)(param_1 + 0x274) == 0) goto LAB_0014d038;
    }
    else {
      *(undefined4 *)(param_1 + 0x274) = 1;
      *(undefined2 *)(param_1 + 0x26c) = 0;
    }
    local_6c = DAT_0014cea0;
    local_64 = *puVar9;
    uStack_5c = *(undefined4 *)(param_1 + 0x30);
    local_60 = *(float *)(param_1 + 0x2c) + DAT_0014cea4;
    if (*(short *)(param_1 + 0x26c) < 0xbf) {
      if ((*(uint *)(DAT_0014cea8 + param_2) & 1) == 0) {
        FUN_00357540(param_2,param_1,&local_64,&local_40,&local_58);
      }
      FUN_00375bcc(param_1,DAT_0014ceac);
      local_60 = local_60 + DAT_0014ceb0;
      FUN_00366150(param_2,&local_64,&local_40,&local_70,&local_74,&local_74,0x32,5);
    }
    sVar1 = *(short *)(param_1 + 0x26c);
    if (((sVar1 == 3 || sVar1 == 0x1e) || sVar1 == 0x32) || sVar1 == 0x46) {
      *(short *)(param_1 + 0x27a) = *(short *)(param_1 + 0x27a) >> 1;
    }
    if ((*(short *)(param_1 + 0x26c) < 0x96) &&
       (((int)*(short *)(param_1 + 0x26c) & (int)*(short *)(param_1 + 0x27a) + 1U) != 0)) {
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x27a),
                                          (byte)(uVar11 >> 0x15) & 3);
      FUN_0036e168(DAT_0014ceb4,DAT_0014ceb8,DAT_0014ceb4 / fVar13,fVar2,param_1 + 0x27c);
    }
    else {
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x27a),
                                          (byte)(uVar11 >> 0x15) & 3);
      FUN_0036e168(fVar2,DAT_0014ceb8,DAT_0014ceb4 / fVar13,fVar2,param_1 + 0x27c);
    }
    if ((*(short *)(param_1 + 0x26c) < 3) &&
       (FUN_0037572c(*(float *)(param_1 + 0x54) + DAT_0014d140,param_1),
       *(short *)(param_1 + 0x26c) == 0)) {
      local_64 = *puVar9;
      uStack_5c = *(undefined4 *)(param_1 + 0x30);
      local_60 = *(float *)(param_1 + 0x2c) + fVar12;
      iVar8 = FUN_00371e40(param_1,param_2);
      if (iVar8 != 0) {
        local_60 = local_60 + fVar7;
      }
      if (*(ushort *)(param_1 + 0xbc) - 0x7980 < 0x701) {
        local_48 = -local_48;
        FUN_0036f95c(param_2,&local_64,&local_40,&local_4c,0xffffff9c,0x13);
      }
      else {
        FUN_0036f95c(param_2,&local_64,&local_40,&local_4c,100,0x13);
      }
      local_60 = *(float *)(param_1 + 0x84);
      if (*(uint *)(param_1 + 0x84) < DAT_0014d144) {
        FUN_0035b9d4(param_2,&local_64,&local_40,&local_58);
      }
      FUN_00375bcc(param_1,DAT_0014d148);
      *(undefined2 *)(param_2 + 0x3206) = 0xfa;
      *(undefined2 *)(param_2 + 0x3204) = 0xfa;
      *(undefined2 *)(param_2 + 0x3202) = 0xfa;
      *(undefined2 *)(param_2 + 0x3200) = 0xfa;
      *(undefined2 *)(param_2 + 0x31fe) = 0xfa;
      *(undefined2 *)(param_2 + 0x31fc) = 0xfa;
      FUN_0036627c(param_2 + 0x364,2,0xb,8);
      *(undefined2 *)(param_1 + 0x1c) = 1;
      *(undefined2 *)(param_1 + 0x26c) = 10;
      *(undefined4 *)(param_1 + 0x270) = DAT_0014d14c;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
    }
  }
LAB_0014d038:
  *(undefined4 *)(param_1 + 0x3c) = *puVar9;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar12;
  if (*(short *)(param_1 + 0x1c) < 1) {
    FUN_0037632c(param_1,param_1 + 0x1a4);
    if ((0x3f7fffff < *(int *)(param_1 + 0x280)) && (*(char *)(param_1 + 0x278) != '\0')) {
      FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
    }
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  }
  if ((DAT_0014d150 <= *(int *)(param_1 + 0x54)) && (*(short *)(param_1 + 0x1c) != 1)) {
    if (*(int *)(param_1 + 0x88) < iVar3) {
      if ((*(ushort *)(param_1 + 0x90) & 0x40) != 0) {
        *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xffbf;
        FUN_00375bcc(param_1,DAT_0014d158);
        return;
      }
    }
    else {
      FUN_0035e4f4(param_2,param_1 + 0x28,DAT_0014d154,1,1,10);
      FUN_00374428(param_1);
    }
  }
  return;
}

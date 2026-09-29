// OoT3D decomp @ 00463cf8  name=FUN_00463cf8  size=1272

undefined4 FUN_00463cf8(int *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint in_fpscr;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float local_80 [6];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;

  uVar4 = *(byte *)(param_1 + 0x76) & param_2 | (int)param_2 >> 4;
  if ((uVar4 & 2) != 0) {
    FUN_002feabc(param_1[2],*param_1,param_1[3] - param_1[2],param_1[1] - *param_1);
    iVar3 = FUN_002dd704();
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0x78 < iVar3) {
      iVar3 = 0x78;
    }
    FUN_002d5984(param_1[2],*param_1 + iVar3,param_1[3] - param_1[2],
                 (param_1[1] - iVar3) - (*param_1 + iVar3));
  }
  fVar2 = DAT_0046415c;
  fVar1 = DAT_00464158;
  fVar12 = DAT_00464154;
  if ((uVar4 & 8) == 0) {
    if ((uVar4 & 6) != 0) {
      fVar6 = (float)VectorSignedToFloat(param_1[3] - param_1[2],(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = (float)VectorSignedToFloat(param_1[1] - *param_1,(byte)(in_fpscr >> 0x15) & 3);
      param_1[9] = (int)(fVar10 / fVar6);
      fVar16 = (float)param_1[5];
      fVar7 = (float)param_1[4];
      if ((float)param_1[4] == fVar1) {
        fVar7 = DAT_00464160;
      }
      fVar15 = (float)param_1[6];
      fVar8 = fVar7 * DAT_00464164 * DAT_00464168 * DAT_0046416c;
      FUN_0036c258(&local_38,&local_3c);
      param_1[0x16] = (int)fVar1;
      param_1[0x17] = (int)fVar1;
      param_1[0x18] = (int)fVar1;
      param_1[0x19] = (int)fVar1;
      param_1[0x1b] = (int)fVar1;
      param_1[0x1c] = (int)fVar1;
      param_1[0x1d] = (int)fVar1;
      param_1[0x1e] = (int)fVar1;
      param_1[0x21] = (int)fVar1;
      param_1[0x22] = (int)fVar1;
      fVar7 = DAT_00464170;
      fVar11 = fVar2 / (fVar15 - fVar16);
      param_1[0x23] = (int)DAT_00464170;
      param_1[0x24] = (int)fVar1;
      param_1[0x15] = (int)((local_3c / local_38) / (fVar10 / fVar6));
      param_1[0x1a] = (int)(local_3c / local_38);
      param_1[0x1f] = (int)(fVar15 * fVar11);
      param_1[0x20] = (int)(fVar15 * fVar16 * fVar11);
      fVar16 = (float)param_1[9];
      fVar10 = (float)param_1[5];
      FUN_0036c258(fVar8,&local_38,&local_3c);
      param_1[0x26] = (int)fVar1;
      param_1[0x27] = (int)fVar1;
      param_1[0x28] = (int)fVar1;
      param_1[0x29] = (int)fVar1;
      param_1[0x2b] = (int)fVar1;
      param_1[0x2c] = (int)fVar1;
      param_1[0x2d] = (int)fVar1;
      param_1[0x2e] = (int)fVar1;
      param_1[0x31] = (int)fVar1;
      param_1[0x32] = (int)fVar1;
      param_1[0x33] = (int)fVar7;
      param_1[0x34] = (int)fVar1;
      fVar6 = fVar2 / (fVar12 - fVar10);
      param_1[0x25] = (int)((local_3c / local_38) / fVar16);
      param_1[0x2a] = (int)(local_3c / local_38);
      param_1[0x2f] = (int)(fVar12 * fVar6);
      param_1[0x30] = (int)(fVar12 * fVar10 * fVar6);
      fVar16 = (float)param_1[9];
      fVar10 = (float)param_1[5];
      fVar6 = (float)param_1[6];
      FUN_0036c258(DAT_00464174,&local_38,&local_3c);
      param_1[0x36] = (int)fVar1;
      param_1[0x37] = (int)fVar1;
      param_1[0x38] = (int)fVar1;
      param_1[0x39] = (int)fVar1;
      param_1[0x3b] = (int)fVar1;
      param_1[0x3c] = (int)fVar1;
      param_1[0x3d] = (int)fVar1;
      param_1[0x3e] = (int)fVar1;
      param_1[0x41] = (int)fVar1;
      param_1[0x42] = (int)fVar1;
      param_1[0x43] = (int)fVar7;
      param_1[0x44] = (int)fVar1;
      iVar3 = DAT_00464178;
      fVar12 = fVar2 / (fVar6 - fVar10);
      param_1[0x35] = (int)((local_3c / local_38) / fVar16);
      param_1[0x3a] = (int)(local_3c / local_38);
      param_1[0x3f] = (int)(fVar6 * fVar12);
      param_1[0x40] = (int)(fVar6 * fVar10 * fVar12);
      if (*(char *)(iVar3 + 0xe) != '\0') {
        local_40 = fVar7;
        local_3c = fVar2;
        local_38 = fVar2;
        local_80[2] = 0.0;
        local_80[3] = 0.0;
        local_80[0] = fVar7;
        local_60 = 0;
        local_80[4] = 0.0;
        local_80[5] = fVar2;
        local_80[1] = 0.0;
        local_5c = 0;
        local_58 = fVar2;
        local_48 = 0.0;
        local_44 = 1.0;
        local_68 = 0;
        local_64 = 0;
        local_54 = 0.0;
        local_50 = 0.0;
        local_4c = 0.0;
        FUN_002d9688(param_1 + 0x15,local_80,param_1 + 0x15);
        FUN_002d9688(param_1 + 0x25,local_80,param_1 + 0x25);
        FUN_002d9688(param_1 + 0x35,local_80,param_1 + 0x35);
      }
    }
  }
  else {
    uVar14 = VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x15) & 3);
    uVar13 = VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x15) & 3);
    uVar9 = VectorSignedToFloat(param_1[3],(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = VectorSignedToFloat(param_1[2],(byte)(in_fpscr >> 0x15) & 3);
    FUN_00300aa8(uVar5,uVar9,uVar13,uVar14,param_1[5],param_1[6],param_1 + 0x15,0);
    uVar14 = VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x15) & 3);
    uVar13 = VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x15) & 3);
    uVar9 = VectorSignedToFloat(param_1[3],(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = VectorSignedToFloat(param_1[2],(byte)(in_fpscr >> 0x15) & 3);
    FUN_00300aa8(uVar5,uVar9,uVar13,uVar14,param_1[5],fVar12,param_1 + 0x25,0);
    uVar14 = VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x15) & 3);
    uVar13 = VectorSignedToFloat(param_1[1],(byte)(in_fpscr >> 0x15) & 3);
    uVar9 = VectorSignedToFloat(param_1[3],(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = VectorSignedToFloat(param_1[2],(byte)(in_fpscr >> 0x15) & 3);
    FUN_00300aa8(uVar5,uVar9,uVar13,uVar14,param_1[5],param_1[6],param_1 + 0x35,0);
  }
  if ((uVar4 & 1) != 0) {
    local_40 = (float)param_1[0xc];
    local_3c = (float)param_1[0xd];
    local_38 = (float)param_1[0xe];
    local_4c = (float)param_1[0x12];
    local_48 = (float)param_1[0x13];
    local_44 = (float)param_1[0x14];
    local_58 = (float)param_1[0xf];
    local_54 = (float)param_1[0x10];
    local_50 = (float)param_1[0x11];
    FUN_002d9e68(param_1 + 0x45,&local_40,&local_4c,&local_58);
    local_58 = fVar1;
    local_54 = fVar1;
    local_50 = fVar1;
    local_4c = fVar1;
    local_44 = fVar1;
    local_40 = fVar1;
    local_3c = fVar1;
    local_38 = DAT_00464218;
    local_48 = fVar2;
    FUN_002d9e68(param_1 + 0x51,&local_58,&local_4c,&local_40);
    param_1[0x5d] = param_1[0x45];
    param_1[0x5e] = param_1[0x46];
    param_1[0x5f] = param_1[0x47];
    param_1[0x60] = param_1[0x48];
    param_1[0x61] = param_1[0x49];
    param_1[0x62] = param_1[0x4a];
    param_1[99] = param_1[0x4b];
    param_1[100] = param_1[0x4c];
    param_1[0x65] = param_1[0x4d];
    param_1[0x66] = param_1[0x4e];
    param_1[0x67] = param_1[0x4f];
    param_1[0x68] = param_1[0x50];
    param_1[0x68] = (int)fVar1;
    param_1[100] = (int)fVar1;
    param_1[0x60] = (int)fVar1;
    FUN_0034a80c(param_1 + 0x5d,param_1 + 0x5d);
  }
  *(undefined1 *)(param_1 + 0x76) = 0;
  return 1;
}

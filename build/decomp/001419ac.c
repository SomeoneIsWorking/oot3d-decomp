// OoT3D decomp @ 001419ac  name=FUN_001419ac  size=852

void FUN_001419ac(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;

  fVar1 = DAT_00141d00;
  if (*(short *)(param_1 + 0x962) == 0) {
    *(undefined4 *)(param_1 + 0x9dc) = DAT_00141d1c;
    *(undefined2 *)(param_1 + 0x962) = 0x18;
    FUN_0037632c(param_1,param_1 + 0x908);
  }
  else {
    uVar6 = *(short *)(param_1 + 0x962) - 1;
    uVar7 = (uint)uVar6;
    *(ushort *)(param_1 + 0x962) = uVar6;
    if (uVar7 < 0xc) {
      *(undefined2 *)(param_1 + 0xbc) = 0;
    }
    else {
      fVar11 = (float)VectorSignedToFloat(uVar7 - 0xc,(byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0xbc) = (short)(int)(fVar11 * DAT_00141d04 * DAT_00141d08 * fVar1);
    }
    fVar5 = DAT_00141d34;
    fVar4 = DAT_00141d30;
    fVar3 = DAT_00141d2c;
    fVar2 = DAT_00141d28;
    fVar11 = DAT_00141d24;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00141d0c + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)uVar7 < (int)(DAT_00141d10 / fVar12 + DAT_00141d14)) {
      iVar10 = DAT_00141d20;
      if (uVar7 < 0xc) {
        if (uVar7 < 7) {
          iVar10 = 0;
        }
        else {
          fVar12 = (float)VectorSignedToFloat(uVar7 - 6,(byte)(in_fpscr >> 0x15) & 3);
          iVar10 = (int)(short)(int)(fVar12 * DAT_00141d18);
        }
      }
    }
    else {
      fVar12 = (float)VectorSignedToFloat(0x18 - uVar7,(byte)(in_fpscr >> 0x15) & 3);
      iVar10 = (int)(short)(int)(fVar12 * DAT_00141d18);
    }
    iVar9 = 1;
    do {
      fVar12 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
      FUN_0036c258(fVar12 * fVar3 * fVar4 * fVar5 * fVar4,&local_38,&local_3c);
      fVar12 = fVar2 - local_3c;
      iVar8 = param_1 + iVar9 * 0x34;
      local_74 = local_3c + fVar12 * fVar11;
      local_4c = local_3c + fVar12 * fVar2;
      local_70 = fVar12 * fVar11 * fVar11;
      local_5c = fVar12 * fVar11 * fVar2;
      local_64 = local_70 + local_38 * fVar2;
      local_70 = local_70 - local_38 * fVar2;
      local_6c = local_5c + local_38 * fVar11;
      local_54 = local_5c - local_38 * fVar11;
      local_50 = local_5c + local_38 * fVar11;
      local_5c = local_5c - local_38 * fVar11;
      local_68 = fVar11;
      local_58 = fVar11;
      local_48 = fVar11;
      local_60 = local_74;
      FUN_0036c174(iVar8 + 0x228,iVar8 + 0x228,&local_74);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 8);
    if (*(ushort *)(param_1 + 0x962) < 0xc) {
      fVar12 = (float)FUN_002cfca0((int)(short)(*(ushort *)(param_1 + 0x962) * (short)DAT_00141d38))
      ;
      iVar10 = 1;
      fVar13 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(param_1 + 0x962),(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = fVar12 * fVar13 * DAT_00141d3c;
      do {
        fVar13 = (float)VectorSignedToFloat((int)(short)(int)(fVar12 * fVar1),
                                            (byte)(in_fpscr >> 0x15) & 3);
        FUN_0036c258(fVar13 * fVar3 * fVar4 * fVar5 * fVar4,&local_40,&local_44);
        fVar13 = fVar2 - local_44;
        iVar9 = param_1 + iVar10 * 0x34;
        local_74 = local_44 + fVar13 * fVar11;
        local_60 = local_44 + fVar13 * fVar2;
        local_70 = fVar13 * fVar11 * fVar2;
        local_6c = fVar13 * fVar11 * fVar11;
        local_5c = fVar13 * fVar2 * fVar11;
        local_64 = local_70 + local_40 * fVar11;
        local_54 = local_6c - local_40 * fVar2;
        local_70 = local_70 - local_40 * fVar11;
        local_6c = local_6c + local_40 * fVar2;
        local_50 = local_5c + local_40 * fVar11;
        local_5c = local_5c - local_40 * fVar11;
        local_68 = fVar11;
        local_58 = fVar11;
        local_48 = fVar11;
        local_4c = local_74;
        FUN_0036c174(iVar9 + 0x228,iVar9 + 0x228,&local_74);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 8);
      return;
    }
  }
  return;
}
